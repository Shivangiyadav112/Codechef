#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{   int prize;
	    int X,Y;
	    cin>>X>>Y;
	    prize=(10*X)+(90*Y);
	    cout<<prize<<endl;
	}
	return 0;
}
