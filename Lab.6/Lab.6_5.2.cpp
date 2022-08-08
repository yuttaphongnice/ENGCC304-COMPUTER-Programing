#include <stdio.h>

int main ( ) {
	
	int i 	;
	int j 	;
	int num ;
	int sp 	;
	
	printf( " Input your line : ") ;
	scanf( " %d " , &num ) ;
	for( i = 0 ; i < num ; i++ ) {
		for( sp = 0 ; sp <= i ; sp++ ) {
			printf( " " ) ;
		}//end for sp
		for( j = 1 ; j <= ( num - i ) ; j++ ) {
			printf( "*") ;
		}//end for j
		printf( " \n " ) ;
	} //end for i
	return 0 ;
} //end funtion
