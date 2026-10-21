#include <iostream>
#include <unordered_map>
using namespace std;
int main(){int a[]={2,7,11,15},target=9;unordered_map<int,int> seen;for(int i=0;i<4;i++){int need=target-a[i];if(seen.count(need)){cout<<seen[need]<<' '<<i<<'\n';return 0;}seen[a[i]]=i;}cout<<"No pair\n";}