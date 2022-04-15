#include<iostream>
using namespace std;

// int fibbo(int n){
//     if(n<=1){
//         return n;
//     }

//     return fibbo(n-1)+fibbo(n-2);
// }

void fibbo2(int n){
    int f1=0,f2=1;

    cout<<f1<<" ";
    for(int i=1;i<n;i++){
        cout<<f2<<" ";
        int nxt=f1+f2;
        f1=f2;
        f2=nxt;
    }
}

int main(){
    int n=9;
    cout<<fibbo(n);
}