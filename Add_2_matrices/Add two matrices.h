
// BY hg398 

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define FOR(i,a,b) for(int i=a;i<=b;i++)

int main() {
	boost;
	int n,m;
	cout<<"Enter size of matrices:";
	cin>>n>>m;
	int A[n][m],B[n][m],C[n][m];
	FOR(i,0,n-1)
	{
		FOR(j,0,m-1)
		cin>>A[i][j];
	}
	FOR(i,0,n-1)
	{
		FOR(j,0,m-1)
		cin>>B[i][j];
	}
	FOR(i,0,n-1)
	{
		FOR(j,0,m-1)
		C[i][j]=A[i][j]+B[i][j];
	}
	FOR(i,0,n-1)
	{
		FOR(j,0,m-1)
		cout<<C[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}