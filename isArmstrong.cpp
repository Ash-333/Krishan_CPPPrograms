#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n=400;
    int ans=0;
    int temp=n;

    while (n>0){
        int t=n%10;
        ans+=pow(t,3);   
        n=n/10;     
    }

    if(temp==ans){
        cout<<"is a armstrong number";
    }
    else{
        cout<<"not an armstrong number";
    }
    
}