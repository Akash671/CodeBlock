/* author : @akash */
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
//----------------------------------------------------------
#define ll long long int
#define mod 1000000007
#define pb push_back
//----------------------------------------------------------
int main()
{
    //-----------------------------------------------------
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //----------------------------------------------------
	int t;
	cin>>t;
	while(t--)
	{
		int c1,c2,c3,c4;
		cin>>c1>>c2>>c3>>c4;
		int n,m;
		cin>>n>>m;
		vector<int>rk(n);
		for(int i=0;i<n;++i)
		{
			cin>>rk[i];
		}
		vector<int>cb(m);
		for(int i=0;i<m;++i)
		{
			cin>>cb[i];
		}
		int total_cost_rk;
		int min_sum_rk=0;
		for(int i=0;i<n;++i)
		{
			min_sum_rk+=min(rk[i]*c1,c2);
		}
		total_cost_rk=min(min_sum_rk,c3);
		//cout<<total_cost_rk<<"\n";
		int min_sum_cb=0;
		for(int i=0;i<m;++i)
		{
			min_sum_cb+=min(cb[i]*c1,c2);
		}
		//cout<<min_sum_cb<<"\n";
		int total_cost_cb;
		total_cost_cb=min(min_sum_cb,c3);
		//cout<<total_cost_cb<<"\n";
		int total_final_cost=min(total_cost_rk+total_cost_cb,c4);
		cout<<total_final_cost<<"\n";
	}
	return 0;
}
