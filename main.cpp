#include <iostream>;
#include <string>;
using namespace std;

int main() {
	int num, position, digit, temp, result = 0;
	cout << "Enter a number: ";
	cin >> num;
	temp = num;

	for (position = 1; temp > 0; position *= 10) {
		digit = temp % 10;
		temp /= 10;

		if (digit != 3 && digit != 6) {
			result += digit * position;
		}
	}

	cout << "The number without 3 and 6 is: " << result << endl;

	system("pause");
	return 0;
}