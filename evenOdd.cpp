#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the given number: ";
    cin>>n;

    if((n & 1)==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}