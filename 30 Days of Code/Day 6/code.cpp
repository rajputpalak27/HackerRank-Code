#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    string s;
    for (int k=0;k<t;k++){
      cin>>s;
      for(int j=0;j<s.length();j=j+2){
                cout<<s[j];
            }
            cout<<" ";
      for(int i=1;i<s.length();i=i+2){
               cout<<s[i];
            }
cout<<endl;
        } 

    return 0;
}

