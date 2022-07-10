#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int num = n;
    int count = 0;
    while(n>0){
        count++;
        n /= 10;
    }
    int temp = num%10;
    num /= 10;
    int intermediate = 1;
    while(count>0){
        intermediate *= 10;
        count--;
    }
    intermediate /= 10;
    num = (temp*intermediate)+num;
    cout<<num;
    return 0;
}