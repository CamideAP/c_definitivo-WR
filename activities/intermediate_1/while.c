/*==================================================================================================
	Title: while command
	Author: Camila de A. Pires
	Date: 14/04/2022
	Description: Module 05, class 1 from Linguagem C (Wagner Rambo) Course
==================================================================================================*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	/*---		Nested while: Multiplication table		---*/
	int tab,n;
	
	tab =1;
	while(tab<=10){
		n=1;
		while(n<=10){
			printf("%2d x %2d = %3d\n",tab,n,n*tab);
			n++;
		}
		putchar('\n'); //writes a single character to the standard output stream
		tab++;
	}
	
	printf("Press any key + enter to continue the while example: ");
	scanf("%c",&n);
	system("cls"); //clean the screen
	
	/*---		Exercise: write a code to get a minimum frequency input and a maximum value, then print the frequencies from the minimum range to the maximum
	in Hz		---*/
	int min, max;
	
	printf("Type the minimum frequency value: ");
	scanf("%d", &min);
	printf("\nType the maximum frequency value: ");
	scanf("%d",&max);
	
	printf("\nThe range of frequency is from %dHz to %dHz:\n\n", min,max);
	
	while(min<=max){
		printf("%dHz\n\n",min);
		min++;
	}
	
	
	system("PAUSE");
	return 0;
}
