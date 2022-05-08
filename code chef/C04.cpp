#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int T,N;
    cin>>T;
    while(T--)
    {   int profit;
        cin>>N; 
        profit=(N*50)-(2*(0.2*(N*50))+(0.3*(N*50)));
        cout<<profit<<endl;
    }
    return 0;
}
