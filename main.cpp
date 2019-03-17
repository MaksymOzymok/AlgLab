#include<iostream>


int main()
{
int i;
int j;
const int n = 5;
const int m  = 5;
char a[n][m];
 for (i=0;i<n;i++)
{
	for(j=0;j<m;j++)
{
	if((i==0 &&j<m)||(i<n && j==0)||(i==n-1 && j<m)||(i<n && j==m-1)){a[i][j]='c';}else
	{a[i][j] = 'a';}
		
}

}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
std::cout<<a[i][j]<<" ";

}
std::cout<<std::endl;


}


}
