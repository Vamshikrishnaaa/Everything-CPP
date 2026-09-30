#include <iostream>
#include<string>

using namespace std;

void rev(string &str ,string &ans,int n){
    if(n==str.size()-1) {
        ans.push_back(str[n]);
        return;
    }
    rev(str,ans,n+1);
    ans.push_back(str[n]);
}

int main() {
    string str="Vamshi";
    string ans;
    rev(str,ans,0);

    cout << ans;;
    return 0;
}