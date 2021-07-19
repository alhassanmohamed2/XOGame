//Written By Alhassan Mohamed 09/05/2020
#include <iostream>
using namespace std;


class game{
	private:
		char board[4][4];
		bool win =false;
		public:
			game(){
				int x,y;
				for(x=0;x<4;x++){
					for(y=0;y<4;y++){
						board[x][y]='-';}
				}
			}
			
			void play(){
	
			 int x,y=0;
			 int i ;
			 
for(i=1;i<=16;i++){
   lab:
		for(int v=1;v>0;v++){
            
			 if(i%2==0){
            	cout<<"O player Turn"<<endl;
			 }
			 else{
			 	cout<<"X player Turn"<<endl;
			 }
			 	
			 cout<<"Enter the no. of the row"<<endl;
		     cin>>x;
		     cout<<"Enter the no. of the column"<<endl;
		     cin>>y;
		     x=x-1;
		     y=y-1;
		     if(x>=0&&x<4&&y>=0&&y<4){break;}
			 else{cout<<"Wrong index"<<endl;
			 goto lab;}
			 }
		 
if(board[x][y]=='-'){
	if(i%2==0){
					
	 board[x][y]='O';}
	    else{board[x][y]='X';}
	}
		else{
			   cout<<"Filled"<<endl;
				goto lab;	
				}
				printboard();
		        rules(x,y);
				if(win){break;}
						
		}
		cout<<"Game Over!!"<<endl;
		cout<<endl;
		
		    }
		void printboard(){
			cout<<endl;
			cout<<board[0][0]<<"|"<<board[0][1]<<"|"<<board[0][2]<<"|"<<board[0][3]<<endl;
			cout<<board[1][0]<<"|"<<board[1][1]<<"|"<<board[1][2]<<"|"<<board[1][3]<<endl;
			cout<<board[2][0]<<"|"<<board[2][1]<<"|"<<board[2][2]<<"|"<<board[2][3]<<endl;
           cout<<board[3][0]<<"|"<<board[3][1]<<"|"<<board[3][2]<<"|"<<board[3][3]<<endl;
           cout<<endl;
		}
	
	void rules(int x,int y){
		   bool rowsx = board[x][0]=='X'&&board[x][1]=='X'&&board[x][2]=='X'&&board[x][3]=='X';
		   bool rowso = board[x][0]=='O'&&board[x][1]=='O'&&board[x][2]=='O'&&board[x][3]=='O';
		   bool colx = board[0][y]=='X'&&board[1][y]=='X'&&board[2][y]=='X'&&board[3][y]=='X';
		   bool colo = board[0][y]=='O'&&board[1][y]=='O'&&board[2][y]=='O'&&board[3][y]=='O';
		   bool digo = board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O'&&board[3][3]=='O';
		   bool digx = board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X'&&board[3][3]=='X';
		   bool digx1 = board[0][3]=='X'&&board[1][2]=='X'&&board[2][1]=='X'&&board[3][0]=='X';
		   bool digo1 = board[0][3]=='X'&&board[1][2]=='X'&&board[2][1]=='O'&&board[3][0]=='O';
		   

if(rowsx||colx){cout<<"The X Player Wins!!!"<<endl;win=true;}
if(rowso||colo){cout<<"The O Player Wins!!!"<<endl;win=true;}
if(digx||digx1){cout<<"The X Player Wins!!!"<<endl;win=true;}
if(digo||digo1){cout<<"The O Player Wins!!!"<<endl;win=true;}
}
};
int main(){
game obj;
cout<<"X O Game, Enjoy your Time."<<endl;
cout<<endl;
	obj.printboard();
	cout<<endl;
	obj.play();
		system("pause");
	
}


