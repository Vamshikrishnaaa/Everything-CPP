#include<iostream> //printing butterfly pattern 
using namespace std;

int main(){
//upper half 
    int n=3,num1=4;

    for(int i=0;i<n;i++){

        for(int j=0;j<i+1;j++){
            cout << "*";
        }
        for(int j=0;j<num1;j++){
            cout << " ";
        }
        num1-=2;
         for(int j=0;j<i+1;j++){
            cout << "*";
        }

        cout << endl;
        
    }

    //lower half
    n=3; int star=3,num2=2;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<star;j++){
            cout << "*";
        }
        

        if(i>0){
            for(int j=0;j<num2;j++){
                cout << " ";
            }
            num2+=2;
        }
        
        for(int j=0;j<star;j++){
            cout << "*";
        }
        star-=1;
        cout << endl;

    }


}