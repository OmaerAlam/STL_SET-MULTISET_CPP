#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s ;

    s.insert(5);
    s.insert(10);
    s.insert(5);
    s.insert(2);
    s.insert(4);

    s.erase(5);
    cout<<s.size()<<endl;
    for(auto u:s) cout<<u<<" ";
    cout<<endl;

return 0;
}



