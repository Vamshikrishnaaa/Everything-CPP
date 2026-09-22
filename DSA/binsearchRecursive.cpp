#include<iostream>
#include<vector>
using namespace std;

int bin(vector<int> &nums,int target,int st,int end){
    int mid=st+(end-st)/2;

    if(nums[mid] == target) return mid;
    else if(target > nums[mid]) return bin(nums,target,mid+1,end);
    else return bin(nums,target,st,mid-1);
    return -1;
}

int main(){
    vector<int> num={1,3,4,5,8,9,10,11};
    int target=2;
    int n=num.size();
    int index=bin(num,target,0,n-1);

    cout << index << endl;
}
