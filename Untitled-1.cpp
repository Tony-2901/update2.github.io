#include <algorithm>
#include <iostream>
#include<vector>
using namespace std;

int main() {
	
	int num;
	cin>>num;
	vector<int> v;
	vector<int> v1;
	
	for(int i=0;num!=0;i++)
	{
	    v.push_back(num%10);
	    v1.push_back(num%10);
        // cout<<v.at(i);
	    
	    num=num/10;
	}
	reverse(v1.begin(),v1.end());
    

	if(v==v1)
	{
	    cout<<"YES"<<endl;
	}
	else
	{
	    cout<<"NO"<<endl;
	}
	
	
	
	return 0;
}
