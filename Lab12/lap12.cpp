#include <stdio.h>

int frequency = 0 ;
struct information {
    int  salary     ; 
    int  duration   ;
    char name[100]  ;

}typedef inf ;

void induct( inf[] , int )  ;
void display( inf[] , int ) ;

int main () {
    int x = 100 ;
    inf Data_of_Presonnel[x] ;
    induct(Data_of_Presonnel , x ) ;
    display(Data_of_Presonnel , x ) ;

    return 0 ;
}// end int main

void induct( inf Data_of_Presonnel[], int ) {
    int  q = 0  ;
    char ans   ;
    bool logic ;

do{
    printf("Do you want to Enter Employee Information? (y/n) : ") ;
    scanf("%s" , &ans ) ;
    switch (ans) {
        case 'n' :
        logic = false ;
        break ;

        default :
        logic = true ;

        printf ("Name of presonnel --> ") ;
        scanf ("%s" ,Data_of_Presonnel[q].name) ;
        printf ("Salary (Bath/Month) --> ") ;
        scanf ("%d" ,&Data_of_Presonnel[q].salary) ;
        printf ("Duration --> ") ;
        scanf ("%d" ,&Data_of_Presonnel[q].duration) ;

        q++ ;
        frequency++ ;
    }// end switch case

}
    while (logic) ;
}// end funtioninduct

void display (inf Data_of_Presonnel[] , int ) {

    int   i         = 0 ;
    int   j         = 0 ;
    int   supreme   = 0 ; //max salary
    int   info      = 0 ; //informetion
    float total     = 0 ; //sum of saiary
    float alternate = 0 ;

while (j < frequency ) {
    total = total + Data_of_Presonnel[j].salary ;
    j++ ;
}
while ( i < frequency ) {
    while( Data_of_Presonnel[i].salary > supreme ) {
        supreme = Data_of_Presonnel[i].salary ;
        info = i ;
        break ;
    }
    i++ ;
}

alternate = Data_of_Presonnel[info].salary ;

printf( "*****************************************\n" ) ;
printf( "Average of Salary : %.2f" , total/frequency ) ;
printf( "\nPayment of every month : %.0f " , total )  ;
printf("\n**Most Salary in this business**\n") ;
printf("Name is : %s",Data_of_Presonnel[info].name) ;
printf("\nDuration: %d year",Data_of_Presonnel[info].duration) ;
printf("\nMost Salary in this business %.2f Bath\n", alternate) ;
printf("\n*****************************************") ;
 
}//end funtiondisplay