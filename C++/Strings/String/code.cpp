#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  
  string a,b;
  cin>>a;
  cin>>b;
  
  cout<<a.size()<<" "<<b.length();
  cout<<endl<<a+b;
  
  swap(a[0],b[0])  ;
  cout<<endl<<a<<" "<<b;
    return 0;
}
