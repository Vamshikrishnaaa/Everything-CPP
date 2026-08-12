#include<iostream>
#include<vector>

using namespace std;

int basic(vector<int> &example);
int main(){
    vector<int> example;
    example.push_back(5);

    basic(example);
    return 0;

}

int basic(vector<int> &example){
    cout << example[0];
    
}