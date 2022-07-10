#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"*****Check for odd or even*****"<<endl;
    if(n&1)
     cout<<n<<" is an odd Number";
    else
     cout<<n<<" is an even Number";

    return 0;
}