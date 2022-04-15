#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp=n;
    int rev=0;

    while(n>0){
        int t=n%10;
        rev=rev*10+t;
        n=n/10;
    }

    if(rev==temp){
        cout<<"is palindrome number";
    }

    else{
        cout<<"not a palindrome number";
    }
}