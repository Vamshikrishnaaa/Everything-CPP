#include <iostream>
using namespace std;


int rec(int n){
    if(n==2) return 2;

    return n*rec(n-1);
}
int main() {
    int n=3;

    cout<< rec(n);
    return 0;
}