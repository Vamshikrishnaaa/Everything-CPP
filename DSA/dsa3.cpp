#include<iostream> // functions Q)calculate sum of digits of a number 
using namespace std;

int sum(int num){ //Algorithm written in notes 
     int rem,sum=0;

    while(num>0){
    rem = num % 1; 
    sum+=rem;
    num = num /10; 
    }

    return sum;
}

int main(){
    
    int num = 1707;

    cout << sum(num);

    return 0;
}
