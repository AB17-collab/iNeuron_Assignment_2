#include<iostream>
using namespace std;
int firstSetBit(int k){
    int count = 0;
    if(k==0) 
     return count;
    while(k>0){
        if(!(k&1)){
            k=k>>1;
            count++;
        }
        else{
            return count+1;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int k = firstSetBit(n);
    cout<<"The first 1 from LSB is at position:"<<k;
    return 0;
}