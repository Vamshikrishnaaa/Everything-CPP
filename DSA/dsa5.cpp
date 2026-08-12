#include<iostream> //binary to decimal
using namespace std;

int dec(int bin){
    int ans=0,pow=1,rem;

    while(bin>=1){
    rem=bin%10;
    bin=bin/10;
    ans+=rem*pow;
    pow*=2;
    }
    return ans;
}
int main(){
    int bin=110010;

    cout << dec(bin);

    return 0;
}