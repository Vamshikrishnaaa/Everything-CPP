#include<iostream> 
#include<string>
#include<algorithm>
using namespace std;

bool palindrome(string s1,string s2){
    if(s1==s2) return 1;
    else return 0;
}
int main(){
    string s1= "racecar";
    string s2= s1;
    reverse(s1.begin(),s1.end());

bool ans=palindrome(s1,s2);
cout << ans << " ";
    return 0;
}