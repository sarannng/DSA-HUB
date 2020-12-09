
//This is the code for making an stair case of size according to user.
// *
// **
// ***
// ****

#include<iostream>
using namespace std;

int main(){
    char star= '*';
    int num;

    cout<<"Enter the height of the staircase";
    cin>>num;

    for(int i=0; i<num; i++){
        
        for(int j=0; j<=i; j++){
            cout<<star;
        }
        cout<<"\n";
    }
}