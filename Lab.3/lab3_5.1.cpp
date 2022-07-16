#include <stdio.h>

int main() { 
/*
 	Function Name : Main
 	@Para 	Input 	f Float		First input from User
 	@Para   Input 	a char		second input from User
*/
    char  Text ;			//%f  %.2f
	float Decimal ; 	    //%c
    
    printf( "Please enter value :" ) ; 
    scanf ( "%f  %c" ,&Decimal ,&Text ) ; 	//Store values as Decimal numbers and text from value f,a
    printf( "%.2f %c" ,Decimal ,Text ) ; 	//display the value as 2 decimal places and text from value f,a
    return 0 ;
} //end function

