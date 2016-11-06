#include<iostream>
#include<ostream>
#include<string>
class Deck{
	public:
	//static char *board[] = new char[8];//{'0','0','0','0','0','0','0','0'};
	char board[9];
	int player_1_choices [8];
	int player_2_choices [8];
	
	//default constructor
	Deck(){
		//cout<<"this is deck constructor";
	
		
		board[0] = '0';board[1] = '1';board[2] = '2';
		board[3] = '3';board[4] = '4';board[5] = '5';
		board[6] = '6';board[7] = '7';board[8] = '8';
		/*for(int i = 0 ; i < 9 ; i++){
			cout<<board[i];
		}
		*/
	}
	
	
		friend ostream &operator<<(ostream &current_board, const Deck &D)
		{
			current_board<<	"	|	|\n"<<
							"    " <<D.board[0]<<"   |    "<<D.board[1]<<"  |    "<<D.board[2]<<"    \n"<<
							"________|_______|________\n"<<
							"	|	|\n"<<
							"    "<<D.board[3]<<"   |    "<<D.board[4]<<"  |    "<<D.board[5]<<"    \n"<<
							"________|_______|________\n"<<
							"	|	|\n"<<
							"    "<<D.board[6]<<"   |    "<<D.board[7]<<"  |    "<<D.board[8]<<"    \n"<<
							"	|	|	\n";
							
			return current_board;
		}
		
		
	
};
