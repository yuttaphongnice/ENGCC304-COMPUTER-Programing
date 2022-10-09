#include<stdio.h>

int main(){

    int i = 0 ;
    int j ; 
    int n = 0  ;
    int num[n] ;

    printf(" Input Array size : ");
    scanf("%d",&n);

    while ( i < n)
    {
        printf("Array[%d] : ",i);
        scanf("%d",&num[i]);
        i++;
    }  //end for

    i = 0 ; 
    while( i < n)
    {
        j=i+1;
        while(j  < n )
        {        
            if(num[i]==num[j])  
            {      
            printf("Unique = %d ",num[i]);    
            }   //enf if
            j++;
        }   // end for j
        i++;
    }   //end for i
        
        return 0 ;
        
}   // end function main
