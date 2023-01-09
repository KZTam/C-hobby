#include <stdio.h>
#include <math.h>
//created during 2nd week sem 1 year 1.
//this is just the beginning...

int main()
{
	printf("SIMPLE CALCULATOR!!!\n");
	printf("made by KZTam\n\n");
	printf("=============================================================================================================\n\n");
	printf("HOW TO USE?\n");
	printf("To choose your operation, type in the number of the operation. Example: if you want addition, type 1.\nThis operation is for 2 numbers only (eg: number1 + number2).\n\n");
	printf("operation lists:\n");
	printf("+ - addition        s - sine\n- - subtraction     c - cosine\nx - multiplication  t - tangent\n/ - division\nr - square root\n^ - power\n\n");
	printf("command lists:\n");
	printf("y - yes\nn - no\n\n");
	char operation;
	char command;
	double num1, num2, ans;
	
	for (int x=0; x<99999; x++){
	printf("\nyour operation?\n");
	scanf(" %c", &operation);
	printf("\n\n");
	switch(operation){
	case '+':
		printf("your first number?\n");
		scanf("%lf", &num1);
		printf("\n\n");
		printf("your second number?\n");
		scanf("%lf", &num2);
		ans = num1 + num2;
		printf("\n\n");
		printf("your answer is: %lf", ans);
		break;
	case '-':
		printf("your first number?\n");
		scanf("%lf", &num1);
		printf("\n\n");
		printf("your second number?\n");
		scanf("%lf", &num2);
		ans = num1 - num2;
		printf("\n\n");
		printf("your answer is: %lf", ans);
		break;
	case 'x':
		printf("your first number?\n");
		scanf("%lf", &num1);
		printf("\n\n");
		printf("your second number?\n");
		scanf("%lf", &num2);
		ans = num1 * num2;
		printf("\n\n");
		printf("your answer is: %lf", ans);
		break;
	case '/':
		printf("your first number?\n");
		scanf("%lf", &num1);
		printf("\n\n");
		printf("your second number?\n");
		scanf("%lf", &num2);
		ans = num1 / num2;
		printf("\n\n");
		printf("your answer is: %lf", ans);
		break;
	case 'r':
		printf("your first number?\n");
		scanf("%lf", &num1);
		printf("\n\n");
		ans = sqrt(num1);
		printf("your answer is: %lf", ans);
		break;
	case '^':
		printf("your first number?\n");
		scanf("%lf", &num1);
		printf("\n\n");
		printf("your second number?\n");
		scanf("%lf", &num2);
		ans = pow( num1, num2);
		printf("\n\n");
		printf("your answer is: %lf", ans);
		break;
	case 's':
		printf("format: <constant>sin(x)\n");
		printf("constant value?\n");
		scanf("%lf", &num1);
		printf("\n\n");
		printf("x value? (in radian)\n");
		scanf("%lf", &num2);
		ans = num1*sin(num2);
		printf("\n\n");
		printf("your answer is: %lf", ans);
		break;
	case 'c':
		printf("format: <constant>cos(x)\n");
		printf("constant value?\n");
		scanf("%lf", &num1);
		printf("\n\n");
		printf("x value? (in radian)\n");
		scanf("%lf", &num2);
		ans = num1*cos(num2);
		printf("\n\n");
		printf("your answer is: %lf", ans);
		break;
	case 't':
		printf("format: <constant>tan(x)\n");
		printf("constant value?\n");
		scanf("%lf", &num1);
		printf("\n\n");
		printf("x value? (in radian)\n");
		scanf("%lf", &num2);
		ans = num1*tan(num2);
		printf("\n\n");
		printf("your answer is: %lf", ans);
		break;
	}
		printf("\n\n\n");
		printf("Wanna continue? y or n?\n");
		scanf(" %c", &command);
		if (command == 'n'){
			break;
		}
		else if (command == 'y') {
			continue;
		}
	}
	printf("\n\nTHANKS FOR PLAYING!!!");
	printf("\nHave a nice day:)");
	return 0;
}
