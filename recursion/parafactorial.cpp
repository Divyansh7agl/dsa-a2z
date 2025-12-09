#include <iostream>
using namespace std;

void f(int n, int fact){
if(n==0 || n==1){
    cout<<fact;
    return;
}
f(n-1,n*fact);
}


int main() {
int n;
cin>>n;
f(n,1);
    return 0;
}