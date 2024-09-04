#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s={1,2,3,1,4,1,2,4,5,245,63,245,245,2,125,234};

    set<int>:: iterator it;
        for(it= s.begin(); it != s.end(); it++) cout<< *it <<" ";
        cout<<endl;

return 0;
}

