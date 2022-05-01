/*==================================================================================================
	Title: Functions PArameters
	Author: Camila de A. Pires
	Date: 01/05/2022
	Description: Module 05, lesson 1 from Linguagem C (Wagner Rambo) Course
==================================================================================================*/

#include <stdio.h>
#include <stdlib.h>

void specialChar(int a);


int main() {
	int GFUser = 1;
	
	while (GFUser>0 && GFUser<10){
		printf("Type number from 1 to 9 or any other number to quit: ");
		scanf("%d",&GFUser);
		specialChar(GFUser);
	}
	
	return 0;
}

void specialChar(int a){
	int i;
	char b;
	
	switch (a){
		case 1: 
			b = '!'; break;
		case 2: 
			b = '@'; break;
		case 3:
			b = '#'; break;			
		case 4: 
			b = '$'; break;
		case 5: 
			b = '%'; break;
		case 6: 
			b = '§'; break;
		case 7: 
			b = '&'; break;
		case 8: 
			b = '*'; break;
		case 9: 	
			b = '?'; break;
	}
	
	putchar('\n');
	for(i = 0; i<54;i++) putchar(b);
	printf("\n\n");
		 
}
