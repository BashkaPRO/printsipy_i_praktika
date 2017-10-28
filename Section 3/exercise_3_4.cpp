//Напишите программу.предлагающую пользователю ввести два цело­
//численных значения.Запишите эти значения в переменные типа int
//с именами vall и val2.Напишите программу.определяющую наи­
//меньшее и наибольшее значения, а также сумму, разность, произве­
//дение и частное этих значений.

#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "std_lib_facilities.h" 

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;


	cout << "введи первое число\n";
	int val1;
	cin >> val1;

	cout << "введи второе число\n";
	int val2;
	cin >> val2;

	if (val1 > val2) {
		cout << val1 << " больше " << val2 << endl;
	}

	else if (val1 < val2) {
		cout << val1 << " меньше " << val2 << endl;
	}

	else if (val1 == val2) {
		cout << val1 << " равно " << val2 << endl;
	}
	else { simple_error("not sure how got here?"); }




	keep_window_open(); //лучше использовать getch(); 
	return 0;