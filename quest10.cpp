#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n%10==0){
        cout<<n;
    }
    else{
        n = n/10;
        n = n*10;
        cout<<n;
    }
    return 0;
}