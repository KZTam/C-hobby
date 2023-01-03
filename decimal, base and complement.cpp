#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void intro()
{
	cout << "DECIMAL TO ANY BASE CONVERTER\n";
	cout << "a program by KZTam\n";
	cout << "\n=========================================================================\n\n";
	cout << "DESCRIPTION\n\n";
	cout << "Convert your integer (base 10) to other base and complement form. (bases which are applicable are listed down below)\n";
	cout << "\n=========================================================================\n\n";
	cout << "GUIDE TO USE\n\n";
	cout << "1) Type in your integer (base 10).(Note: decimals (like 0.5) are not accepted)\n";
	cout << "2) Answers will be calculated.\n";
	cout << "3) If want to continue, type 'yes', if want to quit, type 'no'\n\n";
	cout << "\n=========================================================================\n\n";
	cout << "BASE LIST\n\nBCD\nbinary\nbase 4\noctal\nhexadecimal\ngray code\n1s complement\n2s complement\n\n";
	cout << "\n=========================================================================\n\n";
	cout << "ENJOY :)\n\n";
	cout << "#Digital Electronics\n#C++ programming\n#Electronic Engineering\n";
}

void one_complement(unsigned int n)
{
	unsigned int a = ~n;
	int count = 0, bin[100];
	for (int x = 0; a > 0; x++){
		bin[x] = a % 2;
		a = a / 2;
		count++;
	}
	cout << "\nYour negative 1s complement will be: ";
	for(int y = count - 1; y >= 0; y--){
		cout << bin[y];
	}
}

void two_complement(unsigned int n)
{
	unsigned int a = ~n + 1;
	int count = 0, bin[100];	
	for (int x = 0; a > 0; x++){
		bin[x] = a % 2;
		a = a / 2;
		count++;
	}
	cout << "\nYour negative 2s complement will be: ";
	for(int y = count - 1; y >= 0; y--){
		cout << bin[y];
	}
}

void BCDconversion(int n)
{
	cout << "\nYour BCD value will be: ";
	if (n==0){
		cout << "0000" << endl;
		return;
	}
	int rev = 0;
	while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    while (rev > 0){
    	bitset<4> b(rev % 10);
    	cout << b << ' ';
    	rev /= 10;
	}
}

void BINconversion(int n)
{
	int count = 0, bin[100];
	for (int x = 0; n > 0; x++){
		bin[x] = n % 2;
		n = n / 2;
		count++;
	}
	cout << "\n\nYour binary will be: ";
	for(int y = count - 1; y >= 0; y--){
		cout << bin[y];
	}
}

void base4conversion(int n)
{
	int count = 0, bin[100];
	for (int x = 0; n > 0; x++){
		bin[x] = n % 4;
		n = n / 4;
		count++;
	}
	cout << "\nYour base 4 will be: ";
	for(int y = count - 1; y >= 0; y--){
		cout << bin[y];
	}
}

void OCTALconversion(int n)
{
	int count = 0, bin[100];
	for (int x = 0; n > 0; x++){
		bin[x] = n % 8;
		n = n / 8;
		count++;
	}
	cout << "\nYour octal will be: ";
	for(int y = count - 1; y >= 0; y--){
		cout << bin[y];
	}
}

void graycode(int n)
{
	int a = 0, count = 0, bin[100];
    a = n ^ (n >> 1);
	for (int x = 0; a > 0; x++){
		bin[x] = a % 2;
		a = a / 2;
		count++;
	}
	cout << "\nYour graycode will be: ";
	for(int y = count - 1; y >= 0; y--){
		cout << bin[y];
	}	
}

int main()
{
	intro();
	
	int decimal,count =0,bin[100], bin2;
	string boolean, operation;
	for (int a = 0; a <99999; a++){
		cout << "\ninteger?\n";
		cin >> decimal; 
		BINconversion(decimal);
		base4conversion(decimal);
		OCTALconversion(decimal);
		BCDconversion(decimal);
		graycode(decimal);
		one_complement(decimal);
		two_complement(decimal);
		cout << "\nYour hexadecimal will be: ";
		cout << std::hex << decimal;
		cout << "\n\nWanna continue? yes or no?\n";
		cin >> boolean;
		if (boolean == "yes"){
			decimal = 0;
			count = 0;
			for (int z = 0; z < 100; z++){
			bin[z] = 0;
			continue;
			}
		}
		else {
			break;
		}
	}
	cout << "\n\nGOOD BYE.\n";
	cout << "Have a nice day ^w^\n";
	return 0;
}
