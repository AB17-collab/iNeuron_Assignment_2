#include<iostream>
using namespace std;
double rupeeToDollarConversion(int k){
    return k/76.23;
}
int main(){
    double INR;
    cout<<"Enter the amount in Indian rupees:";
    cin>>INR;
    double dollar = rupeeToDollarConversion(INR);
    cout<<"INR "<<INR<<" = "<<"$"<<dollar;
    return 0;
}