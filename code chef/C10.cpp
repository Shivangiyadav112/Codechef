#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{   int count=0;
	    int N;
	    cin>>N;
	    int D[N];
	    for(int i=0;i<N;i++)
	        cin>>D[i];
	   for(int i=0;i<N;i++)
	   {
	        if(D[i]>=1000)
	            count++;
	   } 
	    cout<<count<<endl;
	}
	return 0;
}
