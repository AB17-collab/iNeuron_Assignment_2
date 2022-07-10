#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 15;
    cout<<"The values of a and b prior to swapping are:"<<a<<" "<<b<<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"The values of a and b post swapping are:"<<a<<" "<<b;
    return 0;
}