#include<iostream>
using namespace std;

 class XO
{
	char board[3][3] { {'1','2','3'}, 
                                  {'4','5','6'}, 
                                  {'7','8','9'} };
	int r1,c1,n,a=1,win=0,t=1;
	
	public:
	int display();
	int work();
};

int XO::display()
{
	cout<<endl;
	cout<<"\t\t"<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"\n";
	cout<<"\t      -----|-----|-----\n";
	cout<<"\t\t"<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"\n";
	cout<<"\t      -----|-----|-----\n";
	cout<<"\t\t"<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"\n";
	cout<<endl;
return 0;
}

int XO::work()
{
	while(win==0 && t<10)
{
	if(a%2==1)
	{
	cout<<"Player X turn\n";
	cout<<"Enter the number: ";
	cin>>n;
	r1=(n-1)/3;
	c1=(n-1)%3;
	if(board[r1][c1]!='O')
 	{
	board[r1][c1] = 'X' ;
	display();
	if((board[0][0] == board[0][1] && board[0][1] == board[0][2]) || (board[1][0] == board[1][1] && board[1][1] == board[1][2] ) || (board[2][0] == board[2][1] && board[2][1] == board[2][2]) || (board[0][0] == board[1][0] && board[1][0] == board[2][0]) || (board[0][1] == board[1][1] && board[1][1] == board[2][1]) || (board[0][2] == board[1][2] && board[1][2] == board[2][2]) || (board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
	{
		win=1;
		cout<<"Player X wins!";
	}
  }	
	else
	{
		cout<<"\nPlace is already Occupied\n\n";
		continue;
	}
}
	else
	{
	cout<<"Player O turn\n";
	cout<<"Enter the number: ";
	cin>>n;
	r1=(n-1)/3;
	c1=(n-1)%3;
	if(board[r1][c1]!='X')
	{
	 board[r1][c1] = 'O' ;
	 display();
	 if((board[0][0] == board[0][1] && board[0][1] == board[0][2]) || (board[1][0] == board[1][1] && board[1][1] == board[1][2] ) || (board[2][0] == board[2][1] && board[2][1] == board[2][2]) || (board[0][0] == board[1][0] && board[1][0] == board[2][0]) || (board[0][1] == board[1][1] && board[1][1] == board[2][1]) || (board[0][2] == board[1][2] && board[1][2] == board[2][2]) || (board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
	 {
	 	win=1;
	 	cout<<"Player O wins!";
	}
  }
	else
	{
		cout<<"\nPlace is already Occupied\n\n";
		continue;
	}
 }
	a=a+1;
	t=t+1;
}
if(t==9 && win==0)
{
cout<<"\n\nIts a draw!";
}
return 0;
}

int main()
{
 XO aa;
 aa.display();
 aa.work();
return 0;	
}