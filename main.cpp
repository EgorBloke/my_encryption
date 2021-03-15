#include"encryption.h"
#include<string>
#include<fstream>
#include<iostream>


int main()
{
	char key='e'%255;
	std::cout << key;

	ENCRYPTION::Symbol sym;

	std::fstream fin("data.txt", std::fstream::binary | std::fstream::in);
	if (!fin.is_open())
	{
		std::cout << "file data.txt won`t open";
		return 0;
	}
	std::fstream fout("result.txt", std::fstream::binary | std::fstream::out);
	if (!fout.is_open())
	{
		std::cout << "file result.txt won`t open";
		return 0;
	}
	char buff;
	while (!fin.eof())
	{
		fin.read((char*)&buff, 1);
		std::cout << buff;
		sym=buff;
		sym(key);
		fout.write((char*)&buff, 1);
	}
	fin.close();
	fout.close();




	//std::
	



	return 0;
}
