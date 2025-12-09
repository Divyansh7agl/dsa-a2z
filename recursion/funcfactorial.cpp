#include <iostream>
using namespace std;

int f(int n, int fact){
if(n==0 || n==1) return 1;
return n * f(n-1,n*fact) ;
}

int main() {
int n;
cin>>n;
f(n,1);
cout<<f(n,1);
    return 0;
}