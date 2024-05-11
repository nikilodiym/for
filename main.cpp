#include <iostream>;
#include <string>;
using namespace std;

int main() {
	int A, B;
	cout << "Enter a number A: ";
	cin >> A;

	for (B = 1; B <= A; B++) {
		if (A % B == 0 && A % (B * B * B) != 0) {
			cout << B << " " << endl;
		}
	}

	system("pause");
	return 0;
}