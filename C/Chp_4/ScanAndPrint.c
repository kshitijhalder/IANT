//
//  Chp 4
//  FORMATTED INPUT & OUTPUT FUNCTIONS
//  SCAN AND PRINT [SAP].c
//
//  Created by Kshitij Halder on 21/02/25.
//

//#include <Scan&Print.h>
/* The following program demonstrates different forms 
 of Formatted input & output functions */
 #include <stdio.h>
# include <stdlib.h>

int main() {

int n1, n2, n3, n4, n5, n6, num, m;
float f1, f2, f3, avg, n;
char c1, c2, ch, s1[20];

system("clear");
printf("Enter an integer: ");
scanf("%d", &n1);
printf("Enter a two-digit integer: ");
scanf("%2d", &n2);
printf("Enter a floating point number: ");
scanf("%f", &f1);
printf("Enter a character: ");
scanf(" %c", &c1);
printf("Enter two integers: ");
scanf("%d %d", &n3, &n4);
printf("Enter an integer and a floating point number: ");
scanf("%d %f", &n5, &f2);
printf("Enter an integer, a floating point number and a character: ");
scanf("%d %f %c", &n6, &f3, &c2);

printf("Output of the input values\n");
printf("n1 = %d\n", n1);
printf("n2 = %d\n", n2);
printf("f1 = %f\n", f1);
printf("c1 = %c\n", c1);
printf("n3 = %d, n4 = %d\n", n3, n4);
printf("n5 = %d, f2 = %f\n", n5, f2);
printf("n6 = %d, f3 = %f, c2 = %c\n", n6, f3, c2);

printf("\nFormatted input & output functions");
printf("Formatted input & output functions\n");
printf("Ram scored %d marks in Maths\n", num);
printf("Any real number: %f\n", avg);
printf("A single character: %c\n", ch);
printf("A string: %s\n", s1);
printf("M = %d, N = %f\n", m, n);
return 0;

}