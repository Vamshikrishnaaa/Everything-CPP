#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> tsum(vector<int> &arr){
    vector<vector<int>> trips;
    sort(arr.begin(), arr.end());
    int n=arr.size();
    int k=n-1;
    
    for(int i=0;i<n;i++){
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        int first=arr[i];
        
        int j=i+1, k=n-1;
        while(j<k){
            while (j<k && arr[j] ==arr[j+ 1]) j++;
            while(j < k && arr[k] == arr[k+1]) k--;
            int sum=first+arr[j]+arr[k];

            if(sum==0){
                trips.push_back({first,arr[j],arr[k]});
                j++;
                k--;
                
            }
            else if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            
            
        }

    }
    return trips; 
   
}

int main(){
    vector<int> arr={-1,0,1,2,-1,-4};

    vector<vector<int>> ans=tsum(arr);
    
    for (size_t i = 0; i < ans.size(); i++) {
        for (size_t j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
