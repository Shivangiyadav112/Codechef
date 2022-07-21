#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int P1,P2,P3,P4,week=0;
	cin>>P1>>P2>>P3>>P4;
	if(P1>=10)
	    week++;
if(P2>=10)
	    week++;
if(P3>=10)
	    week++;
if(P4>=10)
    week++;

cout<<week;

	return 0;
}
