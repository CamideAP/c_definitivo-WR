/*==================================================================================================
	Title: Using break and continue
	Author: Camila de A. Pires
	Date: 18/04/2022
	Description: Module 05, lesson 3 from Linguagem C (Wagner Rambo) Course
==================================================================================================*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*BREAK:
	Stops imemdiataly the the loop or function when reached*/
	
	char i = 0;
	unsigned long w = 0;
	
	while (i<15){
		if (i==10) break;
		i++;
		printf("%d\n",i);
	}
	
	while(1){
		if (kbhit()) break; // "kbhit()" returns 0 while any key is not pressed
		w++;
		printf("%d\n",w);
		
	} 
	
	/*continue:
	starts the next step when reached, ignores the line till the final of the loop or function*/
	putchar('\n');
	
	char ok,chr;
	
	ok = 0;
	
	while(!ok){
		
		chr = getchar();
		
		if (chr == '@'){
		ok=1;
		continue;
		}
		putchar(chr+2);
	}
	
	/*Exercise:
	Writes a program that generates the Fibonacci sequence from Zero to 1000*/
	
	printf("\nPress enter to start the Fibonacci sequence:");
	while(1){
		if (kbhit()) break;
	}
	
	int first = 0, second = 1, sum;
	
	printf("\n0, 1");
	
	while(1){
		sum = first + second;
		first = second;
		second = sum;
		if (sum>1000) break;
		printf(", %d",sum);
	}
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
