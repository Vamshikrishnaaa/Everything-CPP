#include <iostream>
#include<vector>
using namespace std;

bool ifsort(vector<int> &arr,int n){
    if(n==arr.size()){
        return true;
    }
    return arr[n]>=arr[n-1] && ifsort(arr, n+1);
}

int main() {
    vector<int> arr={1,2,3,5};

    cout<<ifsort(arr,1);

    return 0;
}