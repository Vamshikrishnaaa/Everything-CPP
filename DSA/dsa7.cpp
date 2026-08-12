#include<iostream> 
using namespace std;

int main(){
    int arr[]={2,1,5,7,2,4,3,1,4,5},arrU[10];
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]!=arr[j]){
                arrU[j]=arr[j];
            }
        }
    }
    

    for(int j=0;j<size;j++){
        cout << arrU[j] << " ";
    }
    return 0;
}