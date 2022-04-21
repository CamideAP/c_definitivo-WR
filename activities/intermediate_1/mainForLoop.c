/*==================================================================================================
	Title: For Loop
	Author: Camila de A. Pires
	Date: 21/04/2022
	Description: Module 05, lesson 4 from Linguagem C (Wagner Rambo) Course
==================================================================================================*/


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char i;
	
	for(i=0; i<=10; i++) /* prints numbers from 0 to 10 in one single line*/
		printf ("%d ", i); 
	putchar('\n');
	
	unsigned k,j;
	
	for (k=7; k>=1;k--) { /* prints the cube number from 7 to 1*/
		j = k*k*k;
		printf("\nThe cube number of %d is %d.\n", k,j);
	}
	putchar('\n');
	
	int a,b;
	for (a=0,b=0; a+b <=50; a++,b++)
		printf("%2d\n", a+b);
		
	putchar('\n');
	
	/* Printing a matrix with nested for */
	
	int lin,col;
	
	for (lin = 0; lin <5; lin++){
		for(col=0; col<5; col++)
			printf(" 1 ");
		putchar('\n');
	}
	
	/* Printing steps of a stair: Ask the user how many steps the stair will have and print on the screen. */
	int steps, stair,width;
	
	printf("\nHow many steps will have the stair? ");
	scanf(" %d", &steps);
	putchar('\n');
	
	for(stair=1; stair<=steps; stair++){
			
		for(width =1; width<=stair; width++)
			printf("#");
		putchar('\n');
	}
	putchar('\n');
	
	system("PAUSE");
	return 0;
}
