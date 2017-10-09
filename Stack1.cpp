#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxi(long int n,long int m)
{
    if(n>m)
        return n;
    else
        return m;
}

int main() {
    int n;
    cin>>n;
    int arr[100000];
    int tp=-1;
    int max=0;
    for (int i = 0; i < n; ++i)
    {
    	int t,v;
    	cin>>t;
    	if(t==1)                             //inserting
    	{
    		cin>>v;
        arr[tp+1]=maxi(arr[tp],v);         //now this statement stores only the maximum element at any instant in the stack.
    		tp+=1;
    	}
    	else if (t==2)                       //just decreasing top pointer. 
    	{
    		if(tp!=-1)
    		{
    			tp-=1;
    		}
    	}
    	else                                 //Max is always at top. Therefore, we are printing the top.
    	{
    		cout<<arr[tp]<<endl;
    	}
    }
    return 0;
}
