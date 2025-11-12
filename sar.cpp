#include<iostream>
using namespace std;

void print2(int n){
    int space=2*(n-1);
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           cout<<j<<" ";
       }
       for(int j=1;j<=space;j++){
            cout<<"  ";
       }
       for(int j=i;j>=1;j--){
           cout<<j<<" ";
       }        
 
       cout<<endl;  

         space-=2;
   }
}
void print3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
           cout<<"*";
        }
         cout<<endl;
    }
}
void print4(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
           cout<<j <<" ";
        }
         cout<<endl;
    }
}
void print5(int n){

    for(int i=1;i<+n;i++){
        for(int j=1;j<=i;j++){
           cout<<i <<" ";
        }
         cout<<endl;
    }
}
void print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
           cout<<"j "<<" ";
        }
         cout<<endl;
    }
}
void print7(int n){
     for(int i=0;i<n;i++){
        //spaces 
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;

     }


}
void print8(int n){
     for(int i=0;i<n;i++){
        //spaces 
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;

     }
    }
int main(){
    // int n;cout<<"enter ur no of rows u need"<<endl;
    // cin>>n;
    
    // print3(n);
    int t;
    cin>>t;
    // cout<<" enter number of rows u need ";
    for(int i=0;i<t;i++){
        int n;
        cin>> n;
        // cout<<"enter number of columns u need ";
         print7(n);
        print8(n);
         
}

    return 0;

}