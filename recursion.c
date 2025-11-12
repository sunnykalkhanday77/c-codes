#include<stdio.h>
// function declartiom
int factorial( int n);


// void printhello(){
//     printf("heelo\n");
    
//     return ;

int main(){
int n;
    printf("enter n:");
    scanf("%d",&n);

    printf(" factorial  is : %d", factorial);
   
    return 0;
   
}
int factorial (int n){
   if(n==0){
    return 1;

   }
   int factnm1=factorial(n-1);
   int factn=factnm1*n;
   return factn;
}



