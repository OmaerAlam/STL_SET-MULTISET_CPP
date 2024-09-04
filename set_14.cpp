#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;

    s.insert(2);//big O(n)
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(3);

    cout<<s.size()<<endl;
    for(auto u:s) cout<<u<<endl;

return 0;
}



