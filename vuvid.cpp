#include<iostream>

int main()
{
const int n = 3;
const int m = 4;
int i;
int j;
int a[n][m];
for(i=0;i<n;i++)
   {
     for (j=0;j<m;j++)
	{
	std::cin>>a[i][j];
	}
   }
float d;
int k;
for(i=0;i<n;i++)   
 {     d = (float)a[i][1] / a[i][0];
	bool isGeo = false;
    for (j=0;j<m-1;j++)      
   {       
	if(a[i][j] * d ==a[i][j+1])
          {
		k = i;
		isGeo = true;
         }else{isGeo = false;
break;}
     
   }  
 if (isGeo==true)            
     {                       
  std::cout<<"Is geo progress in"<<k<<std::endl;    
             }
  }
}
