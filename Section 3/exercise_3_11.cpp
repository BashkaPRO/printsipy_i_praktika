//�������� ���������.������������ ������������ ������ ������
//������ ���������� 1 - , 5 - , 1 0 - , 25 - , 50 - �������� � ���������� �����.
//������������ ������ �� ����������� ������ ���������� ����� ���
//���� �����������, �������� "������� � ��� ������������ �����?"
//����� ��������� ������ ������� ��������� �������� ������ ����.
//� ��� 23 ����������w� ����� .
//� ��� 17 ����������w� ����� .
//� ��� 14 ������������w� ����� .
//� ��� 7 ������������������w� ����� .
//� ��� 3 ����������������w� ����� .
//����� ��������� ����� ����� ����� 573 ������.
//���������������� ��������� : ���� � ������������ ������ ���� ����
//��, �������� ����� � ������������� ���������� �����.��������,
//" 14 �������������� �����" � "1 ������������ ������" (� �� "1 ��
//	���������� �����"). ����� ����, �������� �����

#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "std_lib_facilities.h" 

	int main()
{

	setlocale(LC_ALL, "Russian");
	using namespace std;

	cout << "Lets count some change $$$$!\n";
	int penny{ 0 };
	int nickel{ 0 };
	int dime{ 0 };
	int quarter{ 0 };
	int half_dollar{ 0 };
	int dollar{ 0 };
	//feel lazy so did not do input checking
	cout << "Enter number of pennies: ";
	cin >> penny;
	cout << "Enter number of nickels: ";
	cin >> nickel;
	cout << "Enter number of dimes: ";
	cin >> dime;
	cout << "Enter number of quarters: ";
	cin >> quarter;
	cout << "Enter number of half dollars: ";
	cin >> half_dollar;
	cout << "Enter number of dollar coins: ";
	cin >> dollar;

	string denomination{ "???" };
	if (penny > 0) {
		denomination = (penny == 1 ? "penny" : "pennies");
		cout << "you have " << penny << " " << denomination << endl;
	}

	if (nickel > 0) {
		denomination = (nickel == 1 ? "nickel" : "nickels");
		cout << "you have " << nickel << " " << denomination << endl;
	}

	if (dime > 0) {
		denomination = (dime == 1 ? "dime" : "dimes");
		cout << "you have " << dime << " " << denomination << endl;
	}

	if (quarter > 0) {
		denomination = (quarter == 1 ? "quarter" : "quarters");
		cout << "you have " << quarter << " " << denomination << endl;
	}

	if (half_dollar > 0) {
		denomination = (half_dollar == 1 ? "half dollar" : "half dollars");
		cout << "you have " << half_dollar << " " << denomination << endl;
	}

	if (dollar > 0) {
		denomination = (dollar == 1 ? "dollar" : "dollars");
		cout << "you have " << dollar << " " << denomination << endl;
	}

	double total{ 0.0 };
	total = penny + nickel * 5 + dime * 10 + quarter * 25 + half_dollar * 50 + dollar * 100;
	total /= 100;
	cout << "your total is $" << total << endl;

	keep_window_open();
	return 0;
}