#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));
    int guessNumber = rand() % 500 + 1;
    int guess;
    int attempts = 0;
    clock_t start, end;

    cout << "Guess the number between 1 and 500. Enter 0 to exit: ";

    start = clock();

    for (;;) {
        cout << "Your guess: ";
        cin >> guess;
        attempts++;

        if (guess == 0) {
            cout << "Game over. Goodbye!";
            break;
        }
        else if (guess == guessNumber) {
            cout << "Congratulations! The number is " << guessNumber << endl;
            break;
        }
        else if (guess < guessNumber) {
            cout << "The secret number is greater." << endl;
        }
        else {
            cout << "The secret number is smaller." << endl;
        }
    }

    end = clock();
    double time_taken = double(end - start) / CLOCKS_PER_SEC;

    cout << "Statistics: " << endl;
    cout << "Attempts: " << attempts << endl;
    cout << "Time: " << time_taken << " seconds" << endl;

	system("pause");
	return 0;
}