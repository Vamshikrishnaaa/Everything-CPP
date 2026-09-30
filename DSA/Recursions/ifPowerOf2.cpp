#include <iostream>
using namespace std;

bool powOfTwo(float num){
    if(num==0) return true;
    if(num<0) return 1.0/powOfTwo(-num);

    return powOfTwo(num/2.0) && 1;
}

// bool powoftwo(int num){
//     return num & (num-1);
// }


int main() {
    float num=5;

    cout<<powOfTwo(num);

    return 0;
}