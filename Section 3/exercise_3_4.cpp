//�������� ���������.������������ ������������ ������ ��� ����
//��������� ��������.�������� ��� �������� � ���������� ���� int
//� ������� vall � val2.�������� ���������.������������ ���
//������� � ���������� ��������, � ����� �����, ��������, �������
//����� � ������� ���� ��������.

#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "std_lib_facilities.h" 

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;


	cout << "����� ������ �����\n";
	int val1;
	cin >> val1;

	cout << "����� ������ �����\n";
	int val2;
	cin >> val2;

	if (val1 > val2) {
		cout << val1 << " ������ " << val2 << endl;
	}

	else if (val1 < val2) {
		cout << val1 << " ������ " << val2 << endl;
	}

	else if (val1 == val2) {
		cout << val1 << " ����� " << val2 << endl;
	}
	else { simple_error("not sure how got here?"); }




	keep_window_open(); //����� ������������ getch(); 
	return 0;