#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,W,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>W>>X>>Y>>Z;
	    int t;
	    t=(Y*Z)+W;
	    if(t>X)
	        cout<<"OVERFLOW"<<endl;
	   else if(t<X)
	        cout<<"UNFILLED"<<endl;
	       else
	        cout<<"FILLED"<<endl;
	}
	return 0;
}
