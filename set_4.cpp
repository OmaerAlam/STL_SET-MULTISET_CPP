#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s ={1,2,3,1,4,1,2,4,5,245,63,245,245,2,125,234};
    s.clear();

    s.insert(5);//TC = log2(n)
    s.insert(10);
    s.insert(5);
    s.insert(2);
    s.insert(5);
    s.insert(4);
    s.insert(4);

    cout<<s.size()<<endl;
    for(auto u:s) cout<<u<<" ";
    cout<<endl;

return 0;
}


