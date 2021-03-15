#pragma once
#include<iostream>
namespace ENCRYPTION
{
	class Symbol {
	public:
		Symbol(char s):Symbol()
		{
			this->s = s;
		}

		Symbol()
		{
			key = 0;
		}

		void operator()(char&key)
		{
			this->key = key;
			//setKey(c);
			encrypt();
		}
		void print()
		{
			std::cout << s;
		}
		char getKey()
		{
			return key;
		}
	private:
		void encrypt()
		{			
			s ^= key;
		}
		void setKey(char key)
		{
			this->key = key;
		}
		char key;
		char s;
	};
}
