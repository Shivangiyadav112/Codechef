#include <iostream>

using namespace std;

int main()
{
    int N ,H,X;
    int status = 0;
    cin>>N>>H>>X;
    int zone[N];
    for(int i=0;i<N;i++)
    {
        cin>>zone[i];
    }
    for(int i=0;i<N;i++)
    {
        if(X+zone[i]==H)
        {
        
            status=1;
            break;
        }
        else 
        status= 0 ;
    }
    if(status==1)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}