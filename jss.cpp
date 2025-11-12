#include <iostream>

using namespace std;

int main(){
    int m;  // we have declare this variable for using it...
    
    int sum;// we have declare this variable for using it as addition

    cout<<"enter the value:";

    cin>>m;

    for (int i=1; i<=m; i++){

        if (i%3==0){

            sum +=i;


        }
    }
    cout<<"the sum of all numbers from 1 to"<<m<< "that are divisbile by 3 is "<<sum<<endl;

    return 0;
}