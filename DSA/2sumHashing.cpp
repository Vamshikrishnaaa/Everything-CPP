#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){
    vector<int> arr={1,2,3,4,5};
    int tar=5;
    unordered_map<int,int> m;
    pair<int,int> ans={-1,-1};

    for(int i=0;i<arr.size();i++){
        int first=arr[i];
        int sec=tar-first;

        if(m.find(sec) != m.end()){
           ans={m[sec],i};
           break;
        }
    
        m[first]=i;

    }

    cout << ans.first <<" " << ans.second <<endl;
}