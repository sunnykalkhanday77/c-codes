#include<iostream>
using namespace std;

int main (){
    int n=4;
    int num=1;
 //char ch='A'; inverted triangle pattern 

    for (int i=0; i<n;i++){

        //spaces 
        for (int j=0; j<i;j++){
            cout<< "   ";

        }
        // num 
        for (int j=0;j<n-i;j++){
           cout<<(i+1);
           //cout<<ch;  this part of the program will be used for character version inverted triangle pattern
          // ch++;

        }
        cout<<endl;
    }
    return 0;
}