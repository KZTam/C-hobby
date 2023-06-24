#include <stdio.h>

/* TITLE: SECP1103 Final Project (15% Carry Marks)
*  Author: TAM KAI ZHANG
*  Group: 2
*  Matrik no.: A22EE0239
*  Code Type: Finalised program
*   
*	Copyright© - Group 2, Section 2, SECP1103
*/


/***********PROGRAM FUNCTIONS*************/
void readFile(char ID[]);
void identity(char name[], char matric[]);
void compareAnswers(char data[], int flag, FILE* file);
void printMissQuestion(float no[],char wrong[], char correct[]);
void Percentage_and_Grade(int error);
void PrintGrade(int error,FILE* file);
void printreport();

void readFile(char ID[]){
	
	char name[14], matrikno[11], Answers[42]; 
	char temp[11];
	int wrong = 0,i;
	FILE *StudentAnswers;
	
	temp[0] = ' ';
	for(i = 1;i<=11;i++) { 
		temp[i] = ID[i-1];
	}
	
	StudentAnswers = fopen("StudentAnswers.dat","r");
	while(!feof(StudentAnswers)){ 
		fgets(name,14,StudentAnswers);
		fgets(matrikno,11,StudentAnswers);
		fgets(Answers,42,StudentAnswers);
		for(i=0;i<11;i++){
			if(temp[i] != matrikno[i]) wrong++;
		}

		if(wrong == 0){
			identity(name,matrikno);
			compareAnswers(Answers, 1, StudentAnswers);
			break;
		}
		wrong = 0; 
	}
	fclose(StudentAnswers);
}

void identity(char name[], char matric[]){	
	printf("Name      : %s\n",name);
	printf("Student ID:%s\n",matric);
}

void compareAnswers(char data[], int flag, FILE* file){
	char temp[42];
	char wrongAns[20], correctAns[20];
	int i, k = 0, missed = 0, error;
	float number[20];
	
	for(i = 1;i<42;i++){ 
		temp[i - 1] = data[i]; 
	}
	
	char AnswerScheme[41];
	FILE *RealAnswers;
	RealAnswers = fopen("Answers.txt","r");
	fgets(AnswerScheme,42,RealAnswers);
	
	for(i = 0;i<42;i++){ 
		if(temp[i] != AnswerScheme[i]) {
			number[k] = 0.5*i + 1;
			wrongAns[k] = temp[i];
			correctAns[k] = AnswerScheme[i];
			missed++;
			k++;
		}
	}
	
	error = missed - 1;
	if(flag){
		printf("Number of questions missed. : %d\n",error);		
		printMissQuestion(number,wrongAns,correctAns);
		Percentage_and_Grade(error);		
	}
	else{
		PrintGrade(error,file);
	}
}

void printMissQuestion(float no[],char wrong[], char correct[]){
	int i = 0;
	
	printf("List of the questions missed: \n\n");
	printf("Question        CorrectAnswer   StudentAnswer\n");
	
	while(1){
		if(no[i]>20){
			break;
		}
		printf("%.0f\t\t%c\t\t%c\n",no[i],correct[i],wrong[i]);
		i++;
	}	
}

void Percentage_and_Grade(int error){
	float percentage;
	int right = 20 - error;
	char grade; 
	
	percentage = ((float)right/20)*100;
	
	if(percentage>=80 &&percentage<=100) grade = 'A';
	else if(percentage>=70 &&percentage<80)grade = 'B';
	else if(percentage>=60 &&percentage<70)grade = 'C';
	else grade = 'F';
	
	printf("\nPercentage: %.2f %%, GRED: %c\n",percentage,grade);
}

void PrintGrade(int error,FILE* file){
	float percentage;
	int right = 20 - error;
	char grade; 
	
	percentage = ((float)right/20)*100;
	
	if(percentage>=80 &&percentage<=100) grade = 'A';
	else if(percentage>=70 &&percentage<80)grade = 'B';
	else if(percentage>=60 &&percentage<70)grade = 'C';
	else grade = 'F';
	
	fprintf(file,"%.0f\t\t",percentage);
	fprintf(file,"%c\n",grade);
}

void printreport(){
		
	char name[14], matrikno[11], Answers[42]; 
	char temp[42];
	int wrong = 0,i;
	FILE *StudentAnswers, *output;
	
	StudentAnswers = fopen("StudentAnswers.dat","r");
	output = fopen("OUTPUT.out","w");
	
	fprintf(output,"LIST OF STUDENTS AND GRADES\n\n");
	fprintf(output,"NAME\t\t ID\t\tPERCENTAGE\tGRADE\n");
	while(!feof(StudentAnswers)){ 
		fgets(name,14,StudentAnswers);
		fprintf(output,"%s\t",name);
		fgets(matrikno,11,StudentAnswers);
		fprintf(output,"%s\t",matrikno);
		fgets(Answers,42,StudentAnswers);
		compareAnswers(Answers, 0, output);
	}
	fclose(StudentAnswers);
	fclose(output);
}


/************ MAIN FUNCTION *************/

int main()
{
	char ID[20];
	int yesno;	
	printf("ENTER THE STUDENT ID: ");
	scanf("%s",&ID);
	printf("\n\nEXAM RESULT\n\n");
	readFile(ID);
	printreport();
}
