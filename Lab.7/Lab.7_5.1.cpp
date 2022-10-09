#include <stdio.h>

int main() {


    int n;
    scanf("%d", &n);

    int divisible = 0;
    int i = 1;
    while (i <= n) {
        if ((i==1 || i%2 == 0 || i%3 == 0 || i%5==0 || i%7==0) 
            && (i!=2 && i!=3 && i!=5 && i!=7)){
            divisible++;
        }
        i++;
    }

    if (divisible == 2) {
       printf("%d is prime number\n", n);
    } else {
       printf("%d is not prime number\n", n);
    }
    
}
