#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n==1 or n==0){
        return false;
    }

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int s=5,e=21;
    
    for(int i=s;i<=e;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}