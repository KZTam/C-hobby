#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	cout << "BASIC 4D GENERATOR" << endl;
	cout << "made by KZTam";
	string enter;

	for (int y = 0; y < 900; y++){
	cout << "\n\nTo get your today 20 4D numbers which might lead you to wealth,";
	cout << " type 'ok' to continue.(don't use 'space' button)" << endl;
	cin >> enter;
		if (enter == "ok"){
		cout << "\n";
		srand(time(0));
		cout << "\n4D list for today:\n";
		for (int x = 0; x < 20; x++){
			cout << rand() % 10;
			cout << rand() % 10;
			cout << rand() % 10;
			cout << rand() % 10 << endl;
			}	
		}
		else {
			for (int z = 0; z < 999; z++){
			cout << "\n\n";
			cout << "that's not the word 'ok', please type again." << endl;
			cin >> enter;
				if (enter == "ok"){
					cout << "\n\n";
					srand(time(0));
					cout << "\n4D list for today:\n";
					for (int x = 0; x < 20; x++){
					cout << rand() % 10;
					cout << rand() % 10;
					cout << rand() % 10;
					cout << rand() % 10 << endl;
					}	
					break;
				}
				else {
					continue;
				}
			}
		}
		cout << "\n\n";
		cout << "Statisfied with the 4D numbers generated? yes or no?" << endl;
		string boolean;
		cin >> boolean;
		if (boolean == "no"){
			continue;
		}
		else {
			break;
		}
	}
	cout << "\n\n";	
	cout << "THANKS FOR USING THIS PROGRAM" << endl;
	cout << "Hope you get JACKPOT" << endl;
	cout << "p.s.: Don't come find me if you not win the 4D:) it's ok to bet low, but refrain from huge bet thanks. :D" << endl;
	return 0;
}
