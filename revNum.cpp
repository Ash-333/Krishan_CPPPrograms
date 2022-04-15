#include<iostream>
using namespace std;

int main(){
    int n=2567;
    int ans=0;
    while(n>0){
        int temp=n%10;
        ans=ans*10+temp;
        n=n/10;
    }
    cout<<ans;
}