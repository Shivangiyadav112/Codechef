#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--)
    {   int total1 , total2;
        int X,Y,X1,Y1,X2,Y2;
        cin>>X>>Y;
        //if A->B;
        X1=500-(X*2);
        Y1=1000-(X+Y)*4;
        total1=X1+Y1;
        
        //if B->A
         Y2=1000-(Y)*4;
         X2=500-((X+Y)*2);
       
        total2=X2+Y2;
        if(total1>total2)
            cout<<total1<<endl;
        else
            cout<<total2<<endl;
    }
	return 0;
}
