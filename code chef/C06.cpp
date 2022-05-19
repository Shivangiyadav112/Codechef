#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--)
    {   int count=0;
        int X,Y;
        cin>>X>>Y;
        if(X==Y)
            cout<<"0"<<endl;
        else{
            for(int i=0;i<Y;i++)
            {
                X=X+8;
                count++;
                if(X>=Y)
                    break;
            }
            cout<<count<<endl;
        }
       
    }
	return 0;
}
