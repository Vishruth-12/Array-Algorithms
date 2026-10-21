#include <iostream>
#include <algorithm>
using namespace std;
int main(){int a[]={1,2,3,4,5,6,7},n=7,k=3;k%=n;reverse(a,a+n);reverse(a,a+k);reverse(a+k,a+n);for(int x:a)cout<<x<<' ';cout<<'\n';}