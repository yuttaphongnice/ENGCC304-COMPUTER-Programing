#include<stdio.h>
#include<string.h>

int main(){

    char name[10];
    int num ;
    int i = 0 ;

    printf("input = ");
    gets(name);

    num = strlen(name); //count lenght of text
    
    // printf("size : %d ",num); //check size
    
    printf("result : ");

    while(num >= i){     // num more than i
        printf("%c",name[num]);     //Use an array based on the number of message lengths.
        num --;
    }
    printf("\n------------------------");

    return 0 ;
}
