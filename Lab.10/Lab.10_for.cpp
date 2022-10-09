#include<stdio.h>
#include<string.h>

int main(){

    char name[10];
    int num ;
    int i ;

    printf("input = ");
    gets(name);

    num = strlen(name); //count lenght of text
    
    // printf("size : %d ",num); //check size
    
    printf("result : ");

    for(i=0; num >= i; num-- ){     // num more than i
        printf("%c",name[num]);     //Use an array based on the number of message lengths.
    }
    printf("\n------------------------");

    return 0 ;
}
