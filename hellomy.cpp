#include<stdio.h>

int main (){
    int n=7;
    printf("enter your number\n");
    scanf("%d",&n);

for (int i=2;i<=n; i++){
    if (n % i ==  0)
        printf ("hte number is prime ");

    
    else 

printf ("the number is not prime ");
    
}
    return 0;


}
