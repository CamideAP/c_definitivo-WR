#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /*Graphic accentuation library*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
	
	system("PAUSE");
	return 0;
}
