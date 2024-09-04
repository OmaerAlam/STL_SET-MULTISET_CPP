#include<bits/stdc++.h>
using namespace std;

int main(){
    set<pair<int,int>, greater<pair<int,int>>> s;

    s.insert({2,3});
    s.insert({4,1});
    s.insert({2,3});
    s.insert({4,1});
    s.insert({5,1});
    s.insert({1,3});

    cout<<s.size()<<endl;
    for(auto u:s) cout<<u.first<<" "<<u.second<<endl;
    cout<<endl;

return 0;
}


