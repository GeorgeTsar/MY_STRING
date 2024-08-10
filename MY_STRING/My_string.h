#pragma once

class My_string
{
	char* str;   // Указатель на строку
	int length;  // Длина строки
public:
	void create_str(const char* s);  // Служебная функция
	My_string();
	My_string(int len);
	My_string(const char* s, int len);
	void set_str(const char* s);
	const char* get_str();
	void My_strcpy(const My_string& obj);  // Копирование строк (конструктор копирования)
	int My_chr(char c);  // Поиск символа в строке
	int My_str_len();    // Возвращает длину строки
	char* My_str_cat(char* b); // Объединение строк (контатенация)
	void My_del_chr(char c);  // Удаляет указанный символ
	int My_str_cmp(char& b);  // Сравнение строк 


	~My_string();
};

