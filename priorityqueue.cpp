#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class pq
{
    vector<int> pq;
	public:
	int size()
	{
		return pq.size();
	}
	bool isempty()
	{
		return pq.size()==0;
	}
	int getmin()
	{
		if(isempty())
		{
			cout<<"OOOO yo n h\n";
			return INT_MIN;
		}
		return pq[0];
	}
	void insert(int element)
	{
		pq.push_back(element);
		int childindex=pq[pq.size()-1];
		while(childindex>0)
		{
           int parentindex=(childindex-1)/2;
		   if(pq[parentindex]>pq[childindex])
		   {
			int temp=pq[parentindex];
			pq[parentindex]=pq[childindex];
			pq[childindex]=temp;
		   }
		   else{
			break;
		   }
		   childindex=parentindex;
		}
	}
	int remove()
	{
		if(isempty())
		{
			cout<<"lodala laa"<<endl;
			return INT_MIN;
		}
		int ans=pq[0];
		pq[0]=pq[pq.size()-1];
		pq.pop_back();
		int parentindex=0;
		while(parentindex!=pq.size())
		{
			int child1=2*parentindex+1;
			int child2=2*parentindex+2;
			if(pq[child1]>pq[child2] && pq[child2]<pq[parentindex])
			{
                int temp=pq[child2];
				pq[child2]=pq[parentindex];
				pq[parentindex]=temp;
			}
			else if(pq[child1]<pq[child2] && pq[child1]<pq[parentindex])
			{
                int temp=pq[child1];
				pq[child1]=pq[parentindex];
				pq[parentindex]=temp;
			}
		}
        return ans;
	}
};
int main()
{
	return 0;
}