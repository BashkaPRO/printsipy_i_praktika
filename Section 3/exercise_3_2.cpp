#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "std_lib_facilities.h" 
//Напишите на языке С++ программу, которая преобразует мили в ки­
//лометры.Ваша программа должна содержать понятное приглаше­
//ние пользователю ввести количество миль.Указание: в одной миле
//1 .609 км.

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;


	cout << "Сколь МИЛЕЙ ? \n";
	double ml;
	cin >> ml;
	cout << "Вы ввели " << ml << " МИЛЕЙ \n";
	double km = 1.609 * ml;
	cout << "В " << ml << " МИЛЯХ " << km << "КМ \n";







	keep_window_open(); //лучше использовать getch(); 
	return 0;
}