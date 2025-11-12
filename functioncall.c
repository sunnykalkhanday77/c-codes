#include<stdio.h>

void japan();
void india();
void england();
void gendu();

void india(){
    printf("you are in india\n");
    england();
}

void japan(){
    printf("you are in japan \n");
    gendu();
}


int main(){
    printf("you are in main //program start from here \n");
    india();
    return 0;
}

void england(){
    printf("you are in england\n");
    japan();
}

void gendu(){
    printf("you are a gendu \n");
}