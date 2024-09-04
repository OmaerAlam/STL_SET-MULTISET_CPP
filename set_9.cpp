#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;

    s.insert("omaer");
    s.insert("md");
    s.insert("omaer");
    s.insert("alam");
    s.insert("md");
    s.insert("alam");

    cout<<s.size()<<endl;
    for(auto u:s) cout<<u<<endl;

return 0;
}

