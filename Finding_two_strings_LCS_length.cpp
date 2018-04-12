#include<bits/stdc++.h>
using namespace std;
#define MAXC 1000
char A[MAXC],B[MAXC];
int lenA,lenB;
int dp[MAXC][MAXC];
bool visited[MAXC][MAXC];
int calcLCS(int i,int j)
{
	if(A[i]=='\0' || B[j]=='\0') return 0;
	if(visited[i][j])return dp[i][j];

	int ans=0;
	if(A[i]==B[j]) ans=1+calcLCS(i+1,j+1);
	else
	{
		int val1=calcLCS(i+1,j);
		int val2=calcLCS(i,j+1);
		ans=max(val1,val2);
	}
	visited[i][j]=1;
	dp[i][j]=ans;
	return dp[i][j];
}
int main() {
	scanf("%s%s",A,B);
	lenA=strlen(A);
	lenB=strlen(B);
	printf("%d\n",calcLCS(0,0));
	return 0;

}
/*
 stdin  copy
abcdgh
aedfhr
  stdout  copy
3
*/
/* jeheto aita DP problem tai memory CLR kore nite hobe bar bar na hole WA khabo*/

