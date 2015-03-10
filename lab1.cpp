#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<n;
    if(n==1)
    else 
    {
	if(n%2==1)
	{
	    n=3*n+1;
	}
	else
	{
	    n=n/2;
	}
    }
    goto 7;
    return 0;
} 
