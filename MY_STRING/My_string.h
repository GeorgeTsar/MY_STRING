#pragma once

class My_string
{
	char* str;   // ��������� �� ������
	int length;  // ����� ������
public:
	void create_str(const char* s);  // ��������� �������
	My_string();
	My_string(int len);
	My_string(const char* s, int len);
	void set_str(const char* s);
	const char* get_str();
	void My_strcpy(const My_string& obj);  // ����������� ����� (����������� �����������)
	int My_chr(char c);  // ����� ������� � ������
	int My_str_len();    // ���������� ����� ������
	char* My_str_cat(char* b); // ����������� ����� (������������)
	void My_del_chr(char c);  // ������� ��������� ������
	int My_str_cmp(char& b);  // ��������� ����� 


	~My_string();
};

