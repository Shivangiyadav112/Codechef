#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y;
	cin>>T;
	while(T--)
	{   int s;
	    cin>>X>>Y;
	    s=1.07*X;
	    if(Y<=s)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
