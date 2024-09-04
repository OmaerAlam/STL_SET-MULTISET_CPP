#include<bits/stdc++.h>
using namespace std;
int main(){

    multiset<int> s;

    s.insert(1);//log2(n)
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(1);


    auto it = s.find(1);
    s.erase(it);

    for(auto u:s) cout<<u<<" ";
    cout<<endl;

return 0;
}


