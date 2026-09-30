#include <iostream>
#include<vector>

using namespace std;

int ans(vector<int> &arr,int n){
    if(n==0) return arr[0];

    return arr[n] + ans(arr,n-1);
}
int main() {
    vector<int> arr={1,7,5};
    int n=arr.size();
   
    cout<< ans(arr,n-1);
    return 0;
}