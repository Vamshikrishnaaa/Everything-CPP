#include<iostream>
#include<string>
using namespace std;
int main(){
    char c;
    cout << "Enter a lower case letter" << endl;
    cin >> c;
    int asc=0;
    asc+=c;
    asc-=32;

    cout << static_cast<char>(asc);



}