#include <iostream>
#include <math.h>
using namespace std;

void intro()
{
	cout << "FINDING ROOTS OF ax^2 +bx + c" << endl;
	cout << "nan means complex number" << endl;
}

void quadratic(float a, float b, float c)
{
	float dominator1,dominator2,root1,root2;
	dominator1 = -b + sqrt(pow(b,2)-4*a*c);
	dominator2 = -b - sqrt(pow(b,2)-4*a*c);
	root1 = dominator1 / (2*a);
	root2 = dominator2 / (2*a);
	cout << "\nroots of your functions will be: " << root1 << " , " << root2 << endl;
}

int main()
{
	float a,b,c;
	int i;
	char yes;
	intro();
	for(i = 0;i < 99999; i++)
	{
		cout << "\n\na?" << endl;
		cin >> a;
		cout << "\n\nb?" << endl;
		cin >> b;
		cout << "\n\nc?" << endl;
		cin >> c;
		quadratic(a,b,c);
		cout << "\n\ncontinue or quit? (y for yes, n for no)" << endl;
		cin >> yes;
		if (yes == 'y')
		{
			continue;
		}
		else
		{
			break;
		}
	}
}
