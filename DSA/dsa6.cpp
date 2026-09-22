#include<iostream> //code to check if a given number is a power of two using loop
using namespace std;

int main(){
    int n=128,ans,i=2;

    while(i<=n){
        if(i==n){
            ans=n;
            cout << n << " is a power of 2";
            break;
        }
        i*=2;
        
    }
    if(ans!=n) cout << n << " isnt a power of two";
    return 0;
}