
#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "std_lib_facilities.h" 

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;


	cout << "Как тебя звать? \n";
	string first_name{ "???" };
	cin >> first_name;
	cout << "Дорогой, " << first_name << ',' << " Введите имя адресата \n";
	cout << "Как дела? У меня все хорошо. \n"
		<< "Еще несколько строк. \n";



	// узнаю имя юзера
	cout << "Введи имя другого друга \n";
	string friend_name;
	cin >> friend_name;
	cout << "Давно ли ты встречал" << ' ' << friend_name << "?\n";



	// определяю пол

	cout << "Введи значение m, если " << friend_name << " - мужчина, и t - если женщина.\n";
	char friend_sex{ '?' };

	while (cin >> friend_sex)
	{

		if (friend_sex == 'm') {
			cout << "мужик, го за пивом\n";
			break;
		}

		else if (friend_sex == 't') {
			cout << "телочка)) \n";
			break;
		}
		else {
			cout << friend_name << " m - мужчина, и t - если женщина.\n";
		}
	}


	// определяю возраст
	cout << "Сколько лет " << friend_name << "?\n";
	int age{ -1 };
	if (cin >> age && age > 0 && age < 110) {
		cout << "Я слышал, ты только что отметил день рождения и тебе исполнилось " << age << " лет.\n";
		if (age < 12) { cout << "В следующем году тебе будет " << age + 1 << ".\n"; }
		if (age == 17) { cout << "Тебе 17, через год сможешь голосовать.\n"; }
		if (age > 70) { cout << "Я надеюсь ты не скучаешь на пенсии.\n"; }
		cout << "Искренне ваш,\n\n\nИмя Фамилия\n";     //add 2 blank lines for a signature



	}
	else { simple_error("да ты шутник"); }


	keep_window_open(); //лучше использовать getch(); 
	return 0;
}