//�������� ���������, ������������� ����� "����", "���" � ��� �����
//� ����� �. 2 � �.�.����� ������������ ������ ����� � ���� �����, ���
//������ ������ ������� �� ����� ��������������� �����.�����
//���� ��� ��������� ��� ���� �, 1, 2, 3 � 4. ���� ������������ ������
//��� - ������ ������, �������� ����� "r����� ���������!", �������
//�� ������ �������� "� �� ���� ����r� �����!"

#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "std_lib_facilities.h" 

int main()
{

	setlocale(LC_ALL, "Russian");
	using namespace std;

	cout << "Enter a spelled out number (example \"two\" for 2) type \"quit\" to exit:\n";
	string spell_num;
	while (cin >> spell_num)
	{
		int val{ -1 };
		if (spell_num == "zero") { val = 0; }
		else if (spell_num == "one") { val = 1; }
		else if (spell_num == "two") { val = 2; }
		else if (spell_num == "three") { val = 3; }
		else if (spell_num == "four") { val = 4; }
		else if (spell_num == "quit") { break; }
		else { cout << "spelled out number does not compute try again\n"; }

		if (val >= 0) {
			cout << "The entered number " << spell_num << " is the number " << val << endl;
		}
	}
	return 0;
}
