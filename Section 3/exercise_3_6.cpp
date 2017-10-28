//Напишите программу.предлагающую пользователю ввести три целых
//числа, а затем выводит их в порядке возрастания, разделяя запяты­
//ми.Например, если пользователь вводит числа 10 4 6. то программа
//должна вывести на экран числа 4, 6, 10. Если два числа совпадают.то
//они должны идти одно за другим.Например.если пользователь вво­
//дит числа 4 5 4, то программа должна вывести на экран 4, 4, 5.


#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "std_lib_facilities.h" 


int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;

	cout << "Введи 3 числа\n";
	int val1{ 0 };
	int val2{ 0 };
	int val3{ 0 };
	cin >> val1 >> val2 >> val3;
	cout << "первое чиcло " << val1 << " второе число " << val2 << " третье число " << val3 << "\n\n";

	int min{ 0 };
	int mid{ 0 };
	int max{ 0 };


	if ((val1 <= val2) && (val1 <= val3))
	{

		if (val2 <= val3)
		{
			min = val1;
			mid = val2;
			max = val3;
		}
		else
		{
			min = val1;
			mid = val3;
			max = val2;
		}
	}
	else if ((val2 <= val1) && (val2 <= val3))
	{
		if (val1 <= val3)
		{
			min = val2;
			mid = val1;
			max = val3;
		}
		else
		{
			min = val2;
			mid = val3;
			max = val1;
		}

	}
	else
	{
		if (val1 <= val2)
		{
			min = val1;
			mid = val1;
			max = val2;
		}
		else
		{
			min = val3;
			mid = val2;
			max = val1;
		}
	}







	cout << min << ", " << mid << ", " << max << endl;
	keep_window_open(); //лучше использовать getch(); 
	return 0;

}