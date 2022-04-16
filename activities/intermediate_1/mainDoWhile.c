/*==================================================================================================
	Title: do while command
	Author: Camila de A. Pires
	Date: 16/04/2022
	Description: Module 05, class 2 from Linguagem C (Wagner Rambo) Course
==================================================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /*Graphic accentuation library*/

/* do {} while(); executes one time the instructions before testing the condition */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese_Brazil"); // sets to accept Portuguese language characters
	/*Warning: this function changes printed float numbers, instead of punct (. ex: 1.89), it will return a comma(, ex 1,89) */
	
	char opt;
	
	do{
		printf("(a) Settings.\n");
		printf("(q) quit.\n");
		printf("Option / Opção (pt): ");
		scanf(" %c",&opt);
		system("CLS");
		
		switch(opt)
		{
			case 'a': 
			case 'A': printf("Settings\n\n"); break;
			case 'Q':
			case 'q': printf("You left the settings\n"); break;
			default: printf("invalid item\n\n");
		}
	} while (opt!='q' && opt!='Q');
	putchar('\n');
	
	/*---		Testing condition of inputs		---*/
	
	int number;
	
	do{
		printf("Type a number: ");
		scanf("%d", &number);
	} while(number>=10); /* asks for a user input while the number is greater than or equal 10
	 */
	 
	system("CLS");
	
	/*---		Challenge:
	Develop a system with options to subscribe a client. You have to use the following options: N - New client, S - Search clients, D - Delete client,
	C - Clear the clients list, Q - quit.
	The input should consider lowercase and uppercase letters, the output shows just the options you've choosen, nothing else.
	---*/
	char subs;
	
	do{
		printf("N - New Client.\n");
		printf("S - Search Client.\n");
		printf("D - Delete Client.\n");
		printf("C - Clear the clients list.\n");
		printf("Q - Quit.\n");
		printf("Option: ");
		scanf(" %c",&subs);
		system("CLS");
		
		switch(subs)
		{
			case 'N': 
			case 'n': puts("New Client"); break; /* puts - prints a string (we can't use variables here), adds a new line in the final*/
			case 'S':
			case 's': puts("Search Client"); break;
			case 'D':
			case 'd': puts("Delete Client"); break;
			case 'C':
			case 'c': puts("Clear the Clients list"); break;
			case 'Q':
			case 'q': puts("Quit"); break;
			default: printf("invalid item\n");
		}
		putchar('\n');
	} while (subs!='q' && subs!='Q');
		
	system("PAUSE");
	return 0;
}
