/*==================================================================================================
	Title: Functions PArameters
	Author: Camila de A. Pires
	Date: 01/05/2022
	Description: Module 05, lesson 1 from Linguagem C (Wagner Rambo) Course
==================================================================================================*/

#include <stdio.h>
#include <stdlib.h>


/*==================================================================================================*/
/* --- Prototypes --- */
void specialChar(int a),
	 freq_555(float Ra,float Rb, float C), 
	 lowPassFilter(float res,float cap, char selection);
	 /*We can also write the prototypes in this way when they return the same kind of variable */

/*==================================================================================================*/
/* --- Main function --- */
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
		printf("Let's calculate the output frequency from the 555 oscillator:\n\n");
		
		printf("Type Ra value: ");
		scanf("%f", &a);
		printf("Type Rb value: ");
		scanf("%f", &b);
		printf("Type C value: ");
		scanf("%f", &c);	
		freq_555(a,b,c);
		printf("Type 1 to continue and Zero to quit: ");
		scanf("%d", &sw);
		if (sw) system("CLS");
	}
	
	printf("\n\n");
		
	float re,ca;
	char select = 'a';
		
	while(select!='0'){
		printf("Let's calculate the frequency or time of a low pass filter:\n\n");
	
		printf("Type Resistor value: ");
		scanf("%f", &re);
		printf("Type Capacitor value: ");
		scanf("%f", &ca);
		
		printf("Type f for frequency, t for time: ");
		scanf("	%c", &select);	
		while(select!='f'&&select!='t'&&select!='0'){
			printf("\n\n Wrong valuer! Type f for frequency, t for time: ");	
			scanf(" %c", &select);				
		}
		
		if (select=='f'||select=='t') lowPassFilter(re , ca, select);
		
		printf("\nDo you want to calculate again? (Y/N) ");
		scanf(" %c", &sw);
		switch(sw){
			case 'Y':
			case 'y': 	system("CLS");
						break;
			case 'N':
			case 'n': select = '0'; break;
			default: 	system("CLS");
						printf("\nYou chose a different value, so let's calculate again!\n\n'");
		}				
	}
	
	system("CLS");
	printf("We finished all tests here. See you again! :-)\n\n");
	
	return 0;
}

/*==================================================================================================*/
/* --- Functions --- */

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
	
	freq = 1.44 /((Ra+2*Rb)*C);
	printf("\nThe 555 frequency is %.2fHz\n\n", freq);
}

void lowPassFilter(float res,float cap, char selection){
	float result;
	
	if (selection=='f'){
		result = 1/(2*3.1416*res*cap);
		printf("\nf = %.2fHz\n\n", result);
	}
	else{
		result = res*cap;
		printf("\nt = %fs\n\n", result);
	}
}
