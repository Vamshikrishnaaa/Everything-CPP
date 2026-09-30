#include <iostream>
using namespace std;

double xpow(int x,int n){
    if(n==0) return 1;
    if (n < 0) return 1.0 / xpow(x, -n);

    return x*xpow(x,n-1);
}

int main() {
    
    cout<<xpow(2,-2);

    return 0;
}