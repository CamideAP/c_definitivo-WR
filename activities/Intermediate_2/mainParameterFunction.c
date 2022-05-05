/*==================================================================================================
	Title: Functions PArameters
	Author: Camila de A. Pires
	Date: 01/05/2022
	Description: Module 05, lesson 1 from Linguagem C (Wagner Rambo) Course
==================================================================================================*/

#include <stdio.h>
#include <stdlib.h>

void specialChar(int a);
void freq_555(float Ra,float Rb, float C);

int main() {
	int GFUser = 1;
	
	while (GFUser>0 && GFUser<10){
		printf("Type a number from 1 to 9 or any other number to quit: ");
		scanf("%d",&GFUser);
		specialChar(GFUser);
	}
	int sw =1;
	float a,b,c;
	
	while(sw){
		printf("Type Ra value: ");
		scanf("%f", &a);
		printf("Type Rb value: ");
		scanf("%f", &b);
		printf("Type C value: ");
		scanf("%f", &c);	
		freq_555(a,b,c);
		printf("Type 1 to continue and Zero to quit: ");
		scanf("%d", &sw);
		if (sw){
			system("CLS");
		}
		
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

void freq_555(float Ra,float Rb, float C){
	float freq;
	
	freq = 1,44 /((Ra+Rb)*C);
	printf("\nThe 555 frequency is %.2fHz\n\n", freq);
}
