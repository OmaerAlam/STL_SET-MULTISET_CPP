#include<bits/stdc++.h>
using namespace std;
int main(){

    multiset<int> s;

    s.insert(1);
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(1);

    cout<<s.size()<<endl;
    for(auto u:s) cout<<u<<" ";
    cout<<endl;

return 0;
}
