#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "std_lib_facilities.h" 

int main()
{
	string previous = " ";

	string current;
	while (cin >> current) {
		if (previous == current)

			cout << "povtor clova: " << current << '\n';
		previous = current;
	}
}