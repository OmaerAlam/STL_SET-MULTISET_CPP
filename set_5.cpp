#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s ;

    s.insert(5);//TC = log2(n)
    s.insert(10);
    s.insert(5);
    s.insert(2);
    s.insert(5);
    s.insert(4);
    s.insert(4);

    cout<<s.count(5)<<endl;//TC = log2(n)

return 0;
}



