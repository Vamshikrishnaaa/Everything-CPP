#include <iostream>
using namespace std;

int countZeros(int num,int count ){
    if(num==0) return count;
    if(num%10==0){
        count++;
    }
    return countZeros(num/10,count);

}
int main() {
    
    int num=10202304;
    cout<<"Zeros in the number is: " << countZeros(num,0);

    return 0;
}