#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s ;

    s.insert(5);
    s.insert(10);
    s.insert(5);
    s.insert(2);
    s.insert(4);

    s.erase(s.begin());
    s.erase(--s.end());
    cout<<s.size()<<endl;
    for(auto u:s) cout<<u<<" ";
    cout<<endl;

return 0;
}



