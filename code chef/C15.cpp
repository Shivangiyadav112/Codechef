#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int X;
	    char arr[14]; int C=0 ,N=0,D=0;
	    int scoreC , scoreN;
	    cin>>X;
	  
	  cin>>arr;
	    for(int i=0;i<14;i++)
	    {
	        if(arr[i]=='C')
	            C++;
	        else if(arr[i]=='N')
	            N++;
	       else
	             D++;
	    }
	    scoreC=(2*C) +(1*D);
	    scoreN=(2*N)+(1*D);
	    if(scoreC>scoreN)
	        cout<<60*X<<endl;
	   else if(scoreC<scoreN)
	        cout<<40*X<<endl;
	   else
	        cout<<55*X<<endl;
	   
	    
	}
	return 0;
}
