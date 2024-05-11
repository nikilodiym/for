#include <iostream>;
#include <string>;
using namespace std;

int main() {
	int count = 0;

	for (int i = 100; i <= 999; i++) {
		int a = i / 100;
		int b = (i / 10) % 100;
		int c = i % 10;

		if (a == b || b == c || a == c) {
			count++;
		}
	}

	cout << "The number of integers with two identical digits: " << count << endl;


	system("pause");
	return 0;
}