/*==================================================================================================
	Title: Functions
	Author: Camila de A. Pires
	Date: 26/04/2022
	Description: Module 06, lesson 0 from Linguagem C (Wagner Rambo) Course
==================================================================================================*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*================================================================================================*/
/*		--- Function Prototypes ---		*/
void printTable();
void whenSeven();
void BOXp();
void BOXsp();
/*================================================================================================*/

int i,j;

main() {
	int seven = 1; 
	
	printTable();
	printf("\n\t Main menu\n\n");
	printTable();
	printf("\n\t Tasks menu\n\n");
	printTable();
	printf("\n\t    Help\n\n");
	printTable();
	
	while (seven){
		printf("\nType 7 for printing, any number for keep the loop or zero to quit:  ");
		scanf("%d", &seven);	
		if (seven == 7){
			putchar('\n');
			whenSeven();
		}
	}
	
	system("CLS");
	
	int number = 1;
	
	while(number){
		printf("Press zero to quit...\nChoose box 3 or box 7 pressing the wished number: ");
		scanf("%d", &number);
		
		if (number==3){
			BOXp();
			BOXsp();
			printf("| NUMERO3 |\n");
			BOXsp();
			BOXp();
		}
		if (number==7){
			BOXp();
			BOXsp();
			printf("| NUMERO7 |\n");
			BOXsp();
			BOXp();
		}
		
		putchar('\n');
	}
	
	return 0;
}

/*================================================================================================*/
/*		--- Functions ---		*/

void printTable(){
	for(i = 0; i <= 3; i++){
		
		for(j = 0; j <=30;j++) putchar('#');
		putchar('\n');
	}
}

void whenSeven(){
	for (i = 0; i <10 ; i++)
		putchar('*');
	putchar('\n');
}

void BOXp(){
	for (i = 0; i<11;i++) putchar('+');
	putchar('\n');
}

void BOXsp(){
	printf("|         |\n");
}
