#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 15;
    cout<<"The values of a and b prior to swapping are:"<<a<<" "<<b<<endl;
    b = b+a;
    a = b-a;
    b = b-a;
    cout<<"The values of a and b post swapping are:"<<a<<" "<<b;
    return 0;
}