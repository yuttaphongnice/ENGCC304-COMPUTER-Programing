#include<stdio.h>

int main() {
	
	int user ;
	int hrs ;
	int salary ;
	int total ;  
	
	printf ( "Input the Employees Id :" ) ;
	scanf  ( "%d",&user );
	printf ( "Input the working hrs :" ) ;
	scanf  ( "%d",&hrs );
	printf ( "Salary amount/hr (bath) : " ) ;
	scanf  ( "%d",&salary ) ;
	total = hrs*salary ;

	
	printf( "\n----" ) ;
	printf( "\nExpected Output :" ) ;
	printf( "\nEmployees ID = %d", user ) ;
	printf( "\nAmount /day = %d", total ) ;
 //	getch();
	
return 0 ;
}





