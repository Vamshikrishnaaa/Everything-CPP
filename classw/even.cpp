#include<iostream> 
using namespace std;

int main(){
    int no;

    cout << "Enter a number: "<<endl;
    cin >> no;

    if(no%2==0){
        cout << "Even number it is "<< endl;
    }
    else cout << "Not a even number"<< endl;
    
    return 0;
}