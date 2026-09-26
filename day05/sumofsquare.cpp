#include<iostream>
using namespace std;

int main(){
    int n,i,sum;
    cout<<"Enter a number n:";
    cin>>n;
    sum=0;
    for(i=1;i<=n;i++){
        sum=sum+(i*i);

    }
    cout<<"Sum of n numbers is "<<sum;
}