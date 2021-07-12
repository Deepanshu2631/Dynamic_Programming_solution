///////////////   DYNAMIC PROGRAMMING ////////////
////  KNAPSACK   USING RECUSION ////////
///////   FIND MAX PROFIT  /////////
//////////////////////////////////////////     this is solution of deepanshu kushwaha   /////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
int knapsack(int w[] , int v[] , int W , int n){
	if (n== 0 || W==0)
	{
		return 0;

	}
	if (w[n-1] <= W)
	{
		return v[n-1] + knapsack(w , v, (W-w[n-1]) , (n-1));
	}else{
		return knapsack(w,v,W,n-1);
	}
	if (w[n-1]>W)
	{
			return knapsack(w,v,W,n-1);
	}


}
int main(){
int n;
cin>>n;
int w[n] ,v[n] , W;
for (int i = 0; i < n; ++i)
	{
		cin>>w[i];
	}	
	for (int i = 0; i < n; ++i)
	{
	cin>>v[i];
	}
	cin>>W;
	cout<< knapsack(w , v, W , n)<<endl;

}
