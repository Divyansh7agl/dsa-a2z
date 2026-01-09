#include <iostream>
using namespace std;

int main() {
string s;
cin>>s;
//precompute
int hash[256]={0};  //hash [36] if lower or upper case only
for(int i=0; i<s.size();i++){
hash[s[i]]++ ;  // s[i]- 'a' if lower case only and s[i] - 'A' if upper case only
}
int n;
cin>>n;
while(n--){
    char c;
    cin>>c;
    //fetch
    cout<<hash[c]<<endl; // hash[c-'a'] 
}
    return 0;
}