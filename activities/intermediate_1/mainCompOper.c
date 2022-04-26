/*==================================================================================================
	Title: Compound Assignment Operators
	Author: Camila de A. Pires
	Date: 26/04/2022
	Description: Module 05, lesson 5 from Linguagem C (Wagner Rambo) Course
==================================================================================================*/

#include <stdio.h>
#include <stdlib.h>

/*            normal expression          >>>     Compound Assigment Operator ~= shortcut
	var = var (op) exp; (ex. a = a +5;)  >>>         var (op) = exp; (ex. a += 5;)         */

main() {
	float a = 55.3;
	a /= 1.8;
	printf("a= %.2f\n\n",a);
	
	int b = 12, c = 2, d = 5;
	printf("b = %d, c = %d and d = %d.\n\n", b,c,d);
	b = b *(c+d);
	printf ("b = b * (c + d)\t= %d\n", b);
	b = 12;
	b = b * c+d;
	printf ("b = b *  c + d\t= %d\n\n", b); // uses the normal rules of maths, * has the priority, that is not the expected expression.
	b = 12;

	b  *= (c+d);
	printf ("b *= (c + d)\t= %d\n", b);
	b = 12;
	b *= c+d;
	printf ("b *=  c + d\t= %d\n", b); // The expression will be solved first, so the result will be multiplied by b, no needed the "()".

	
	
	return 0;
}
