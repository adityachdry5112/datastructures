#include<iostream>
using namespace std;
#define MAX 1000
class queue{
	int front, rear;
	
	public:
		int arr[MAX];
		queue(){
			front =-1;
			rear=-1;
		}
		void push(int s){
			if(rear==MAX-1){
				cout<<"bhar gya ha madarchod"<<endl;
				return;
			}
			if(front==-1){
				front=0;
			}
			rear++;
			arr[rear]=s;
		}
		int pop(){
			if(front==-1||front >rear){
				return -1;
			}
			int a=arr[front];
			front++;
			return a;
		}
		
};
int main()
{
     queue q;

    q.push(69);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "1 element: " << q.pop() << endl;
    cout << "2 element: " << q.pop() << endl;
    cout << "3 element: " << q.pop() << endl;
    cout << "4 element: " << q.pop() << endl;

}

