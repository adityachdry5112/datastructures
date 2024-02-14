#include<iostream>
using namespace std;
int board[11][11];
bool issafe(int n,int row ,int column){
    int i=0,j=0;
    // checking column
    for(i=row-1;i>=0;i--){
        if(board[i][column]==1){
            return false;
        }
    }
    //checking rows
    for(i=column-1;i>=0;i--){
        if(board[row][i]==1){
            return false;
        }
    }
    // checking right diagonal
    for(int j=column+1,i=row-1;j<n,i>=0;j++,i--){
        if(board[i][j]==1){
            return false;
        }
    }
    // checking left diagonal
    for(j=column-1,i=row-1;i>=0,j>=0;j--,i--){
        if(board[i][j]==1){
            return false;
        }
    }
    return true;
}
void nqueens(int n,int row)
{
    if(n==row){
        //we reached solution 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    for(int k=0;k<n;k++){
        if(issafe(n,row,k)){
            board[row][k]=1;
            nqueens(n,row+1);
            board[row][k]=0;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of board"<<endl;
    cin>>n;
    board[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            board[i][j]=0;
        }
    }
    nqueens(n,0);
}