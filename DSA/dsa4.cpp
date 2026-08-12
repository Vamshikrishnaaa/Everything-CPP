#include<iostream> //Code to convert Decimal to binary number 
using namespace std;

int bin(int dec){

    int ans=0, pow=1,rem;

    while(dec>0){
        rem=dec%2;
        dec=dec/2;
        ans+=rem*pow;
        pow = pow*10;
    }
    return ans;
}

int main(){
    int dec=50;
    cout << bin(dec);

    return 0;
}