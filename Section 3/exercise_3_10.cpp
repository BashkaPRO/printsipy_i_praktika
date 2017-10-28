//Напишите программу, принимающую на входе символ операции с
//двумя операндами и выводящую на экран результат вычисления.На­
//пример :
//+100 3.14
//* 4 5
//Считайте символ операции в строку с именем operation и, используя
//инструкцию if, выясните, какую операцию хочет выполнить пользо­
//ватель, например if (operation = "+").Считывайте операнды в пере­
//менные типа douЫe.Выполните операции + , -, *· / , plus, minus.mul и
//div, имеющие очевидный смысл.

#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "std_lib_facilities.h" 

int main()
{

	setlocale(LC_ALL, "Russian");
	using namespace std;

	const vector<string> op{ "+", "-", "*", "/", "plus", "minus", "mul", "div" };
	cout << "Enter an operation (+, -, *, /, plus, minus, mul, and div) followed by 2 operands separated by spaces:\n";

	string operation{ "??" };
	// check for good operation
	bool goodOperation{ false };
	cin >> operation;
	for (auto i : op) {
		if (i == operation) {
			goodOperation = true;
			break;
		}
	}
	if (goodOperation == false) { simple_error("Bad Operation"); }

	double val1{ 0.0 };
	double val2{ 0.0 };
	// check for good operands
	if (!(cin >> val1 >> val2)) { simple_error("Bad Operands"); }

	double res{ 0.0 };
	// compute result
	if (operation == "+" || operation == "plus")
	{
		res = val1 + val2;
		operation = "+";
	}
	else if (operation == "-" || operation == "minus")
	{
		res = val1 - val2;
		operation = "-";
	}
	else if (operation == "*" || operation == "mul")
	{
		res = val1 * val2;
		operation = "*";
	}
	else if (operation == "/" || operation == "div")
	{
		if (val2 == 0)
			simple_error("divide by zero");
		res = val1 / val2;
		operation = "/";
	}
	else
		simple_error("not sure how I got here");

	// print results
	cout << val1 << " " << operation << " " << val2 << " = " << res << endl;

	keep_window_open();
	return 0;
}