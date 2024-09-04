#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int, greater<int>> s;

    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(3);

    cout<<s.size()<<endl;
    for(auto u:s) cout<<u<<endl;

return 0;
}


