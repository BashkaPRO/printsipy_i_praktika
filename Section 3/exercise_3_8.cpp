//�������� ���������.����������� �������� ��� ���������� �����
//�����.��� ������.���������, ��� ����� ��������� ���� � �����.���
//�� ������, �� ������� �������������� ������� ������������ �����
//"��" ��� "���".����� ������ ���� �������������, �������� "���
//�� 4 ��JJ����� ������". ���������: ��. �������� ���������� �������
//� ������� 3.4.

#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "std_lib_facilities.h" 



int main()
{

	setlocale(LC_ALL, "Russian");
	using namespace std;


	cout << "Enter an integer: ";
	int val{ 0 };
	if (!(cin >> val)) { simple_error("Invalide integer value\n"); }
	string res = (val % 2) ? "odd" : "even";
	cout << "The value " << val << " is a " << res << " number\n";
	keep_window_open();
	return 0;
}