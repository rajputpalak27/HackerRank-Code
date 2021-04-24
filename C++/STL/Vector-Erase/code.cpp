#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,ele;
    cin>>n;
    vector <int> v;
     for(int i=0;i<n;i++)
    {
        cin>>ele;
      v.push_back(ele);
    }
    int pos;
    cin>>pos;
    v.erase(v.begin()+pos-1);
    int st,end;
    cin>>st>>end;
    v.erase(v.begin()+st-1,v.begin()+end-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
    return 0;
}
