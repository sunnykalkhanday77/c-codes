#include<iostream>

using namespace std;

int main(){
    int n=4;
    

for(int i=0;i<n;i++){

         
         for(int j=0;j<n-i-1;j++){
           
            cout<<j;
         }
                
                for(int p=1;p<=i+1;p++){
                    cout<< p;
                }
                for(int x=i;x>0;x--){
                    cout<< x;
                }
                cout<< endl;

}
return 0;
    
}