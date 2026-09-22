#include<iostream> 
#include<vector>
using namespace std;

int main(){
    vector<int> sort={5,2,1,4};
    int n=sort.size(),min=sort[0];

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sort[j]<min;
            swap(sort[j],min);
            min=sort[j];
        }
    }
    for(int i=0;i<n;i++){
        cout << sort[i] << " ";
    }

    return 0;
}