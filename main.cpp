#include <iostream>;
#include <string>;
using namespace std;

int main() {
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;

	cout << "Common divisors of " << num1 << " and " << num2 << " are: ";
	int smaller = (num1 < num2) ? num1 : num2;
	for (int i = 1; i <= smaller; ++i) {
		if (num1 % i == 0 && num2 % i == 0) {
			std::cout << i << " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}