#include <iostream>;
#include <string>;
using namespace std;

int main() {
	int number;
	cout << "Enter a number: ";
	cin >> number;

	cout << "The number" << number << "is divisible by: " << endl;
	for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            std::cout << i << " ";
        }
    }

	cout << endl;

	system("pause");
	return 0;
}