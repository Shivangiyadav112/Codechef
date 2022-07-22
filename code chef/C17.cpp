#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N,A,B;
	    cin>>N>>A>>B;
	    char S[N];
	    for(int i=1;i<=N;i++)
	        cin>>S[i];
	        
	   int count1=0,count0=0,sum=0;
	   for(int i=1;i<=N;i++)
	   {
	       if(S[i]=='1')
	        count1++;
	       
	       else
	        count0++;
	   }
	  // cout<<"one "<<count1;
	  // cout<<"zero "<<count0<<endl;
	   sum=(count1*B)+(count0*A);
	   cout<<sum<<endl;
	}
	return 0;
}
