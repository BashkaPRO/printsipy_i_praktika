#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "std_lib_facilities.h" 
//�������� �� ����� �++ ���������, ������� ����������� ���� � ��
//�������.���� ��������� ������ ��������� �������� ��������
//��� ������������ ������ ���������� ����.��������: � ����� ����
//1 .609 ��.

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;


	cout << "����� ����� ? \n";
	double ml;
	cin >> ml;
	cout << "�� ����� " << ml << " ����� \n";
	double km = 1.609 * ml;
	cout << "� " << ml << " ����� " << km << "�� \n";







	keep_window_open(); //����� ������������ getch(); 
	return 0;
}