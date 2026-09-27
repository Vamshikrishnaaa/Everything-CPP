#include <iostream>
using namespace std;

void pr(int n){
    if(n==-1) {
        // cout<<"0";
        // cout<<"\n";
        // cout<<"0 ";
        return;
    };

    cout<<n <<" ";
    pr(n-1);
    
    cout<<n<<" ";

}
int main() {
    int n=7;
    pr(n);
    return 0;
}