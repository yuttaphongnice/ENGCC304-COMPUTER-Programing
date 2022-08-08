#include <stdio.h>

int main() {
    
	int years;
    printf( " Input years : " ) ;
    scanf( " %d ", &years ) ;
    years = years % 4 ;

    switch ( years ) {
    case 0 :
        printf( " Feb = 29 days " ) ;
        break ;
    default :
        printf ( " Feb = 28 days " ) ;
        break ;
    } //end switch case

    return 0;
} //end funtion
