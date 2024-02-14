#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
   int a[3][4]={{2,1,5,4},{4,5,6,6},{7,8,8,4}};
   int *b[3];
   int **c;
   int i,j;
   b[0]=new int[4];
   b[1]=new int[4];
   b[2]=new int[4];
   
   c=new int*[3];
   c[0]=new int[4];
   c[1]=new int[4];
   c[2]=new int[4];
   for(i=0;i<3;i++)
   {
   	 for(j=0;j<4;j++)
   	 {
   	 	cout<<a[i][j]<<"  ";
   	
		}
		cout<<endl;
   }
   cout<<endl;
   cout<<endl;
   for(i=0;i<3;i++)
   {
   	 for(j=0;j<4;j++)
   	 {
   	 	cout<<b[i][j]<<"  ";
   	
		}
		cout<<endl;
   }
   cout<<endl;
   cout<<endl;
   for(i=0;i<3;i++)
   {
   	 for(j=0;j<4;j++)
   	 {
   	 	cout<<c[i][j]<<"  ";
   	
		}
		cout<<endl;
   }
}

