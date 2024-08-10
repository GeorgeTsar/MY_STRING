#include "My_string.h"
#include <iostream>
using namespace std;


void My_string::create_str(const char* s)
{
	int str_length = strlen(s);
	str = new char[str_length + 1];
	for (int i = 0; i <= str_length; i++)
	{
		str[i] = s[i];
	}
}

My_string::My_string()
{
	str = nullptr;
	length = 80;
}

My_string::My_string(int len)
{
	str = nullptr;
	length = len;
}

My_string::My_string(const char* s, int len)
{
	create_str(s);
	length = len;
}

void My_string::set_str(const char* s)
{
	delete[] str;
	create_str(s);
}

const char* My_string::get_str()
{
	return str;
}

void My_string::My_strcpy(const My_string& obj)
{
	str = new char[strlen(obj.str) + 1];
	strcpy(str, obj.str);
	//cout << "Copy constructor" << endl;
}

int My_string::My_chr(char c)
{
	for (int i = 0; i <= length; i++)
	{
		if (str[i] == c)
		{
			return str[i];
		}
		else
		{
			return -1;
		}
	}
}

int My_string::My_str_len()
{
	return strlen(str);
}

char* My_string::My_str_cat(char* b)
{
	int len_b = strlen(b);
	//str = new char[length + strlen_b + 1];
	for (int i = 0; str[i] != '\0'; i++)
	{
		b[len_b + i] = str[i];
	}
	b[len_b + length] = '\0';
	return b;
}

void My_string::My_del_chr(char c)
{
	for (int i = 0; i <= length; i++)
	{
		if (str[i] = c)
		{
			str[i] = str[i + 1];
		}
	}
}

int My_string::My_str_cmp(char& b)
{
	int len_b = strlen(&b);
	if (len_b > length)
	{
		return -1;
	}
	else if (len_b < length)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

My_string::~My_string()
{
	cout << "Отработал деструктор для " << str << endl;
	if (str != nullptr)
	{
		delete[] str;
	}
}
