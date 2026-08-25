#include<iostream> 
using namespace std;

int main(){
    float far;
    float cel;
    cout << "Enter Temp in celsius:" << endl;
    cin >> cel;

    far=(9/5)*cel + 32;

    cout << "Farenheit :" << far << endl;

    return 0;
}