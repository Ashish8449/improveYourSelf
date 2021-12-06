
#include <iostream>
using namespace std;
// #include<boost/multiprecision/cpp_int.hpp>
// using namespace
// boost::multiprecision;

int main() {
	// your code goes here
	int i,n,t;
	cin>>t;
	while(t--)
	{
	  int  f=1;
	    cin>>n;
	    for(i=n;i>0;i--)
	    {
	        f=f*i;
	       
	    }
	   cout<<f<<endl;
	}

	return 0;
}