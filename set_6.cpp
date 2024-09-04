#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s ;

    s.insert(5);
    s.insert(10);
    s.insert(5);
    s.insert(2);
    s.insert(4);

    cout<<*s.begin()<<endl;
    cout<<*(--s.end())<<endl;
    cout<<*(s.rbegin())<<endl;

return 0;
}



