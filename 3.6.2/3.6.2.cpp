// proverka pobtoryushihsy slov-grammatiki
#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "std_lib_facilities.h" 

int main()
{
	int number_of_words = 0;
	string previous = " "; // ne slovo
	string current;


	while (cin >> current) {
		++number_of_words; // uvelichivaeb schetchik slov
		if (previous == current)
			cout << "kolichestvo slov " << number_of_words 
				 << " repeated: " << current << '\n';
			previous = current;
	}
}