
/*
 * Adnatull Al Masum
 * Eastern University of Bangladesh
 * Mail: adnaan.masum@yahoo.com
 * Date: 2017-10-03
 * */
 

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <map>
#include <climits>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <sstream>
#include <stack>
#include <list>
#include <deque>
#include <cmath>
#include <numeric>
#include <iterator>
#include <utility>


using namespace std;

#define sci(a) scanf ("%d",&a)
#define scii(a,b) scanf ("%d %d",&a,&b)
#define sc scanf
#define pr printf 
#define pb push_back
#define mp make_pair
#define sz(a) (int)a.size()
#define LL long long 
#define L long 
#define FOR(i,a,b) for (int i=(a); i<=(b); i++)
#define RFOR(i,a,b) for (int i=(a); i>=(b); i--)
#define rep(i,n) for (int i=(0); i<(n); i++)
#define rrep(i,n) for (int i=(n-1); i>=(0); i--)
#define INF (int)1e9+1
#define EPS (int)1e-9
#define PI 3.1415926535897932384626433832795
#define MOD (int)1000000007
#define nn printf ("\n")
#define fill(a, v) memset(a, v, sizeof a)
#define clr(a) memset(a, 0, sizeof a)
#define ff first
#define ss second
#define all(a) a.begin(),a.end()
#define skip cin.ignore()
#define Global (int)12345678
#define Local (int)1234567
#define test_case(n) FOR(cases,1,n)
#define print_case printf("Case %d: ",cases)

const double pi=acos(-1.0);
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int,int> mpii;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

L dp[110][110];

L nCr (int n, int r)  { 
	if(n==r || r==0) return 1;
	if(r==1) return n;
	if(dp[n][r]) return dp[n][r];
	
	return dp[n][r] =  nCr(n-1,r-1)+nCr(n-1,r);	
}
	

int main() { 
	
	#ifndef ONLINE_JUDGE
		//freopen("in.txt","r",stdin);
		//freopen("out.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);
	
	int x,y;
	while (cin >> x >> y) { 
		if(x==0 && y==0) break;
		
		clr(dp);
		L value  = nCr(x,y);
		
		cout << x << " things taken " << y << " at a time is " << value << " exactly."<< endl;
		
	}
	


	return 0;
}
