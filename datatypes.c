//Datatypes
#include<stdio.h>
void main (void)
{
    int num1;
    int num2 = 0;
    int num3, num4= -10;
    int num5 = 89U;			// Unsigned int
    long int num6 = 99998L;	//signed long int
    unsigned long int num11=123456UL		// Long int
    unsigned int num7=35u;
    short int num8=5245;
    unsigned short int num9=44653
    long int num10=55746L
    float fnum1=458.88f
    double dnum1=5.8765
    long double ldnum1=3.99876L
    bool var1=1
    char var2='a'
    char var3;
    printf ("Demo - Data Types\n\n");
    printf ("integer:  %d\n", num1);
    printf ("integer Address of Number Varaible 1 : %p\n", &num1);
    printf ("integer Number Variable 2 : %d\n", num2);
    printf ("Number Variable 3 : %d\n", num3);
    printf ("Number Variable 4 : %d\n", num4);
    printf ("Number Variable 5 which is an unsigned integer: %d\n", num3);
    printf ("signed long int : %ld\n", num6);
    printf ("unsigned long int : %lu\n", num11);
    printf ("unsigned  int: %u\n", num7);
    printf ("signed short int : %hd \n", num8);
    printf ("unsigned short int : %hu \n", num9);
    printf ("Long int : %ld  \n", num10);
    printf ("signed short int : %hd \n", num8);
    printf("\n");
    printf ("float variable : %f \n", fnum1);
    printf ("double variable : %lf \n", dnum1);
    printf ("long double variable : %Lf \n", ldnum1);
    printf("\n");
    printf ("boolean variable : %f \n", var1);
    printf ("Character Variable a: %c\n", Var2);
    Var2++;
    printf ("Character Variable a after increment is: %c\n", Var2);
    Var3 = 99;						// Assigned ASCII value a-->97 b-->98 c-->99
    printf ("Character Variable b: %c", Var3);
}
