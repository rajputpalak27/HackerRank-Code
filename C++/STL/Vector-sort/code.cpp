#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<int> vec;
    int n,v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v;
        vec.push_back(v);
    }
    
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
     cout<<vec[i]<<" ";
    }
    return 0;
}
