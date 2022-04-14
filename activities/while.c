/*==================================================================================================
	Title: while command
	Autor: Camila de A. Pires
	Data: 14/04/2022
	Descrição: Module 05, part 1 from Linguagem C (Wagner Rambo) Course
==================================================================================================*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	/*Nested while: Multiplication table*/
	int tab,n;
	
	tab =1;
	while(tab<=10){
		n=1;
		while(n<=10){
			printf("%2d x %2d = %3d\n",tab,n,n*tab);
			n++;
		}
		printf("\n");
		tab++;
	}
	
	system("PAUSE");
	return 0;
}
