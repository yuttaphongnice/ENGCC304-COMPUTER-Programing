#include<stdio.h>

int main(){

    int i ;
    int j ; 
    int n = 0  ;
    int num[n] ;

    printf(" Input Array size : ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("Array[%d] : ",i);
        scanf("%d",&num[i]);
    }  //end for

    for(i = 0 ; i < n ; i++)
    {
        for(j=i+1; j < n ; j++)
        {
            if(num[i]==num[j])  
            {      
            printf("Unique = %d ",num[i]);    
            }   //enf if
        }   // end for j
    }   //end for i
        
        return 0 ;
        
}   // end function main
