#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
//precompute
map<int,int>mpp;           // map<char,int> for character hashing
for(int i=0; i<n; i++){
    mpp[arr[i]]++ ;
}

// for(auto it : mpp){                           //map always store in sorted order
//     cout<<it.first<<"-->"<<it.second<<endl;   
// }
int n;
cin>>n;
while(n--){
    int a;
    cin>>a;
    //fetch
    cout<<mpp[arr[a]]<<endl;
}

    return 0;
}