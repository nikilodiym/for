#include <iostream>;
#include <string>;
using namespace std;

int main() {
    const double usd_to_uah = 39.58;
    const double eur_to_uah = 42.70;

    for (;;) {
        int choice;
        double amount;

        cout << "<<________________Currency Converter________________>>"<< endl;
        cout << "     <<-----------1. USD to UAH---------------->>" << endl;
        cout << "     <<-----------2. EUR to UAH---------------->>" << endl;
        cout << "     <<-----------3. UAH to EUR---------------->>" << endl;
        cout << "     <<-----------4. UAH to USD---------------->>" << endl;
        cout << "     <<-----------5. Exit---------------------->>" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Goodbye!" << endl;
            break;
        }

        switch (choice) {
        case 1:
            cout << "Enter amount in USD: ";
            cin >> amount;
            cout << "Equivalent in UAH: " << amount * usd_to_uah << endl;
            cout << endl;
            break;
        case 2:
            cout << "Enter amount in EUR: ";
            cin >> amount;
            cout << "Equivalent in UAH: " << amount * eur_to_uah << endl;
			cout << endl;
            break;
        case 3:
			cout << "Enter amount in UAH: ";
			cin >> amount;
			cout << "Equivalent in EUR: " << amount / eur_to_uah << endl;
            cout << endl;
			break;
		case 4:
			cout << "Enter amount in UAH: ";
			cin >> amount;
			cout << "Equivalent in USD: " << amount / usd_to_uah << endl;
            cout << endl;
			break;
        default:
            cout << "Error" << endl;
			cout << endl;
			break;
        }
    }

	system("pause");
	return 0;
}