#include<iostream>
#include<time.h>
using namespace std;
int main() {
	int number,guess,count=0;
	cout << "###welcome to guessing number game###" << endl;
	cout << "Secret number has been chosen" << endl;

	srand(time(NULL));
	number = 1 + rand() % +9;
	do {
		cout << "Guess the number(1 to 10): "  ;
		cin >> guess;
		count++;
		if (number > guess) {
			cout << "The secret number is lower" << endl;

		}
		else if (number < guess) {
			cout << "The number is higher" << endl;
		}


		
	} while (number != guess);
	cout << "Congratuations!" << endl;
	cout << "The secret number is " << number << endl;
	cout << "You made " << count << " guesses " << endl;
	return 0;
}