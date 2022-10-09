#include <stdio.h>
#include <string.h>
struct Employee {
    char Name[ 20 ] ;
    int  Age ;
    int  Salary ;
    char Job[ 20 ] ;
} typedef Em ;
void DefineEm( Em[] ) ;
void ShowEm( Em[], int ) ;
void ShowSingleEm( Em[], int ) ;
int ShowOldest( Em[], int ) ;
int main() {
    int n = 7 ;
    Em A[ n ] ;
    DefineEm( A ) ; ShowEm( A, n ) ;
    
    ShowSingleEm( A, ShowOldest( A, n ) ) ;
    
    
    
    return 0 ;
}//end function
void DefineEm( Em InputEm[] ) {
    strcpy( InputEm[ 0 ].Name, "Pong" ) ;
    strcpy( InputEm[ 1 ].Name, "Jong" ) ;
    strcpy( InputEm[ 2 ].Name, "Ngong" ) ;
    strcpy( InputEm[ 3 ].Name, "Long" ) ;
    strcpy( InputEm[ 4 ].Name, "Xong" ) ;
    strcpy( InputEm[ 5 ].Name, "Mong" ) ;
    strcpy( InputEm[ 6 ].Name, "Nong" ) ;
    
    InputEm[ 0 ].Age = 36 ;
    InputEm[ 1 ].Age = 23 ;
    InputEm[ 2 ].Age = 15 ;
    InputEm[ 3 ].Age = 18 ;
    InputEm[ 4 ].Age = 24 ;
    InputEm[ 5 ].Age = 42 ;
    InputEm[ 6 ].Age = 17 ;
    
    InputEm[ 0 ].Salary = 27000 ;
    InputEm[ 1 ].Salary = 43025 ;
    InputEm[ 2 ].Salary = 19000 ;
    InputEm[ 3 ].Salary = 36000 ;
    InputEm[ 4 ].Salary = 46550 ;
    InputEm[ 5 ].Salary = 52500 ;
    InputEm[ 6 ].Salary = 12000 ;
    
    strcpy( InputEm[ 0 ].Job, "Support" ) ;
    strcpy( InputEm[ 1 ].Job, "CEO" ) ;
    strcpy( InputEm[ 2 ].Job, "Support" ) ;
    strcpy( InputEm[ 3 ].Job, "Programmer" ) ;
    strcpy( InputEm[ 4 ].Job, "HR" ) ;
    strcpy( InputEm[ 5 ].Job, "Programmer" ) ;
    strcpy( InputEm[ 6 ].Job, "Programmer" ) ;
}//end function
void ShowEm( Em InputEm[], int n ) {
    printf( "\n----| Employee : \n" ) ;
    for( int i = 0 ; i < n ; i++ ) {
        printf( "%10s %3d %6d %10s\n",  
            InputEm[ i ].Name,
            InputEm[ i ].Age,
            InputEm[ i ].Salary,
            InputEm[ i ].Job
        ) ;
    }//end for
}//end function
void ShowSingleEm( Em InputEm[], int Pos ) {
    printf( "\n----| Employee : \n" ) ;
    printf( "%10s %3d %6d %10s\n",  
        InputEm[ Pos ].Name,
        InputEm[ Pos ].Age,
        InputEm[ Pos ].Salary,
        InputEm[ Pos ].Job
    ) ;
}//end function
int ShowOldest( Em InputEm[], int n ) {
    int Max = -999999 ;
    int Pos = -1 ;
    for( int i = 0 ; i < n ; i++ ) {
        if( InputEm[ i ].Age > Max ) {
            Max = InputEm[ i ].Age ;
            Pos = i ;
        }//end if
    }//end for
    return Pos ;
}//end function
