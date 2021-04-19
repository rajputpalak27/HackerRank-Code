#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,i=0;
    cin>>a;
    cin>>b;
    string c[]={" ","one","two","three","four","five","six","seven","eight","nine"};
    
    for(i=a;i<=b;i++)
    {
        if(i>=1 && i<=9)
        {
           cout<<c[i]<<endl;
        }else if(i>9)
        {
            if(i%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
    }
    return 0;
}
