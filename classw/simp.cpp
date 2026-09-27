#include<iostream> 
using namespace std;

int main(){
    float rate, years,simp,prin;
    cout << "Enter Rate and no of years and principle amount: "<< endl;
    cin >> rate >> years >> prin;
    simp= rate*years*prin;

    cout << "simple interest is: "<< simp << endl;
    return 0;
}