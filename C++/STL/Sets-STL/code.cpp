#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int n,x,y;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>x;
        cin>>y;
        if(x==1){
            s.insert(y);
        }else if(x==2){
            s.erase(y);
        }else if(x==3){
            if(s.find(y)!=s.end()){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    
    
    return 0;
}



