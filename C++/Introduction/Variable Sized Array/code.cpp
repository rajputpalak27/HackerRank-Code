#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n,q;
    cin>>n>>q;
    
    int *A[n];
    for(int i=0;i<n;i++)
    {
          int arrsize;
          cin>>arrsize;  
        A[i]=new int[arrsize];
        
        for(int j=0;j<arrsize;j++)
        {
             cin>>A[i][j];
        }
      
    }
    
    int q1,q2;
    for(int i=0;i<q;i++)
    {  
       
        cin>>q1>>q2;
        cout<<A[q1][q2]<<endl;
    }
   
 
    return 0;
}
