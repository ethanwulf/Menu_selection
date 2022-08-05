#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	//example of a Menu system using "Do While" loop.
	char selec{};
	do {
		cout << "\n-----------------" << endl;
		cout << "1. Something" << endl;
		cout << "2. Do the thing" << endl;
		cout << "3. Yip yip" << endl;
		cout << "Q. Quit" << endl;
		cout << "\nEnter your selection:";
		cin >> selec;

		if (selec == '1')
			cout << "You choose 1 - Something" << endl;
		else if (selec == '2')
			cout << "You choose 2 - Do the thing" << endl;
		else if (selec == '3')
			cout << "You choose 3 - Yip yip" << endl;
		else if (selec == 'Q' || selec == 'q')
			cout << "Cya..." << endl;
		else
			cout << "Invalid Option." << endl;



	} while (selec != 'q' && selec != 'Q');
}