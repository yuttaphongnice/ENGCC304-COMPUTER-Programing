#include <stdio.h>

int main ( ) {
	int years ;
	
	printf( " Input years : " ) ;
	scanf( "%d" , &years ) ;
	
	if ( years % 4 == 0 ) {
		printf( " Feb = 29 Days " ) ;
	}
	else {
		printf( "Feb = 28 Days ") ;
	}
	
return 0 ;
}
