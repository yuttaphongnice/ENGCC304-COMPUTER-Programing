#include <stdio.h>

int main() {
    int num ;

    printf( "Input : " ) ;
    scanf( "%d",&num ) ;

    while ( num > 1 ) {
        if ( num==2 || num==3 || num==5 || num==7 ) {
            printf( "%d ",num ) ;
        }
        else if ( num%2 > 0 && num%3 > 0 && num%5 > 0 && num%7 > 0 ) {
            printf( "%d ",num ) ;
        } //end if else   
        num-- ;   
    } //end while
    
    return 0 ;
} //end funtion
