#include <iostream> 
#include <iterator>
#include <algorithm> 
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;
#define MOD 1000000007
#define INF 2147483647
#define LNF 9223372036854775807
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef unsigned long long ull;

int n,t,lsum,dl[1000],dr[1000];
int main () {
	
	scanf("%d%d",&n,&t);
	for(int i=0;i<n;i++){
		scanf("%d%d",dl+i,dr+i);
		lsum += dl[i];
	}
	sort(dl,dl+n);
	sort(dr,dr+n);
	int mid,ret=-1,left=1,right=1000000,idxl,idxr,tsum;
	while(left<=right){
		mid = (left+right)/2;
		idxl = upper_bound(dl,dl+n,mid)-dl; 
		idxr = lower_bound(dr,dr+n,mid)-dr;
		tsum = mid * n;
		for(int i=0;i<idxr;i++) tsum -= mid-dr[i];
		if(idxl<n || tsum<t) left = mid+1;
		else if(lsum>t) right = mid-1;
		else{
			right = mid-1;
			ret = mid;
		}
	}
	printf("%d\n",ret);
	return 0;
}
