// // #include<iostream>   

// // using namespace std;

// // int main(){
// //     int n=32 ;

// //     cout<<"enter your number ";
// //     cin>>n;
    
    
// //     if (n %2 ==0 ){
// //         cout<<"your number is odd";
// //     }

// //     else {
// //         cout<<"your no is even";
   
// //     }


// //     return 0;


    


// // }
// #include<iostream>

// using namespace std;
// int main(){
//     int marks;
//      char ch;

     
   
//     cout<<"enter your marks :";
//     cin>> ch;


//     if( marks>=90){
//         cout<<" A\n";
        
//  }
//         else if(marks>=80 &&  marks<90){
//             cout<<" B\n";

//         }
//         else if(marks>=70 &&  marks<80){
//             cout<<"C\n";


//         }

//         else{
//             cout<<"Fail\n";
//         }
//         return 0;

   
    
    

// }
#include <iostream>
using namespace std;

int main() {
    int n;char ch='A';
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {        // row loop
        for (int j = 1; j <= i; j++) {    // column loop
            cout << ch << " ";
            ch++;  // increment for next number
        }
        cout << endl; // next row
    }

    return 0;
}

