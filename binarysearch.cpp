#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
	int left = 0;
	int right = size-1;
	while (left<=right)
	{
	  int mid = left+(right-left) /2;
	  if(key==arr[mid])
	  {
	  	return mid;
	  }
	  else if(key<arr[mid])
	  {
	  	right=mid - 1;
	  }
	  else{
	  	left=mid+1;
	  }
	}
}
int main()
{
  int A[]={1,2,3,4,5,6,7,8,9};
  int r=binarysearch(A,9,6);
  cout<<r<<endl;
}

