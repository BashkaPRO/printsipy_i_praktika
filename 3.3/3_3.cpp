#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "std_lib_facilities.h" 

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Please enter your name\n";
	string first_name;
	cin >> first_name;

	cout << "������� ���� ���?\n";
	double age = 0.0;
	cin >> age;

	double months = age * 12;
	cout << "������, " << first_name << " (���� ����� " << age << " ��� " << months << " ������� ������ ����� " << ")\n";

	keep_window_open(); //����� ������������ getch(); 
	return 0;
}