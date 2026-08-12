#include<iostream> // to find the element with the most frequency
using namespace std;

int moore(int *a){
    int ans,freq=0;
    for(int i =0;i<5;i++){

        if(freq==0){
            ans=a[i];
        }
        
        
        if(ans == a[i]){
            freq++;
        }

        else {
            freq--;
        }
        

    }
    return ans;

}

int main(){
    int a[5]={1,1,2,1,2};
    int ans= moore(a);
    cout << ans;
    return 0;
}