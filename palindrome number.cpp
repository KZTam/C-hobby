#include<iostream>
using namespace std;

void intro()
{
	cout << "PALINDROME NUMBER CHECKER" << endl;
	cout << "a program by KZTam" << endl;
	
	cout << "\nHOW IT WORKS?" << endl;
	cout << "1) Type in your number. (only integer allowed)" << endl;
	cout << "2) The system will give a feedback, corresponding the number you input-ed just now" << endl;
	cout << "3) If want continue, type 'yes', otherwise type 'no'." << endl;
	cout << "4) ENJOY!" << endl;	
}

void definition()
{
	cout << "\nWhat is palindrome number?" << endl;
	cout << "Palindrome number is the number that reads the same from forward to backward and vice versa. (example: 1234321)" << endl;
}


int isPalindrome(int x){
	int num, digit, rev = 0;
	num = x;
	
	while (x > 0)
	{
		digit = x % 10;
		rev = (rev*10) + digit;
		x = x / 10;
	}
	
	if (num == rev)
		return 1;
	else
		return 0;
	
}

int main()
{
	int n, i;
	string decision;
	intro();
	definition();
	while(1)
	{
	cout << "\nInteger?" << endl;
	cin >> n;
	
	cout << "\n";
		if (isPalindrome(n)) {
			cout << n << " is palindrome number." << endl;
		}
		else {
			cout << n << " is NOT palindrome number." << endl;
		}
		
	cout << "\nContinue? yes or no?" << endl;
	cin >> decision;
	
		if (decision == "yes"){
			continue;
		}
		else{
			break;
		}
	}
	cout << "\nTHANKS FOR PLAYING!!!" << endl;
}
