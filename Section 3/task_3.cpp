
#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "std_lib_facilities.h" 

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;


	cout << "��� ���� �����? \n";
	string first_name{ "???" };
	cin >> first_name;
	cout << "�������, " << first_name << ',' << " ������� ��� �������� \n";
	cout << "��� ����? � ���� ��� ������. \n"
		<< "��� ��������� �����. \n";



	// ����� ��� �����
	cout << "����� ��� ������� ����� \n";
	string friend_name;
	cin >> friend_name;
	cout << "����� �� �� ��������" << ' ' << friend_name << "?\n";



	// ��������� ���

	cout << "����� �������� m, ���� " << friend_name << " - �������, � t - ���� �������.\n";
	char friend_sex{ '?' };

	while (cin >> friend_sex)
	{

		if (friend_sex == 'm') {
			cout << "�����, �� �� �����\n";
			break;
		}

		else if (friend_sex == 't') {
			cout << "�������)) \n";
			break;
		}
		else {
			cout << friend_name << " m - �������, � t - ���� �������.\n";
		}
	}


	// ��������� �������
	cout << "������� ��� " << friend_name << "?\n";
	int age{ -1 };
	if (cin >> age && age > 0 && age < 110) {
		cout << "� ������, �� ������ ��� ������� ���� �������� � ���� ����������� " << age << " ���.\n";
		if (age < 12) { cout << "� ��������� ���� ���� ����� " << age + 1 << ".\n"; }
		if (age == 17) { cout << "���� 17, ����� ��� ������� ����������.\n"; }
		if (age > 70) { cout << "� ������� �� �� �������� �� ������.\n"; }
		cout << "�������� ���,\n\n\n��� �������\n";     //add 2 blank lines for a signature



	}
	else { simple_error("�� �� ������"); }


	keep_window_open(); //����� ������������ getch(); 
	return 0;
}