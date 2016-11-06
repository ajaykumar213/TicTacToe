#include <math.h>
//#include "player.cpp"
int choice;
int player1_count=0;
int player2_count=0;
bool game_over_con;
bool p1_won =false;
bool p2_won = false;
class TicTacToe{
	public:
		
	Deck deck_list[10];//arary of 10 elements of objects if the Deck class, where current Deck is the last item
	 int game_number;// number of current game, int between 0 and 9
	Player player_1;
	Player player_2;
	
	//default constructor
	TicTacToe(){
		//deck_list[1] = d1;
	}
	
	//validate if the user input is an int between 0-8 and it was not played previously
	bool validate_user_input(int choice, Deck &d){//still to validate it wasmn't played previous
		
		if(d.board[choice] == 'X' || d.board[choice] == 'O'){
			cout<<"Choice already taken. Choose another choice "<<endl;
			return false;
		}
		
	//if(isdigit(choice)){
		if(choice>=0 && choice<=8)//still nrrd to validate for int cell 
			{
			//	cout<<"in validate"<<endl;
		//exit(0);
				return true;
			}
		if(choice<0 || choice > 8){
			//cout<<"in validate choice ex 0-8"<<endl;
		//exit(0);
			cout<<"Invalid move, move should be between 0 and 8"<<endl;
			return false;
			}
		//if(choice == 
		
	//}
		else{
			cout<<"enter numeric";
			exit(0);
			return false;
		}
	
		
		/*
		if(!inputIsNumeric){
			cout<<"Invalid move, move should be an integer"<<endl;
			return false;
		}
		//need to validate
		/*
		if(choice == ){
			cout<<"The cell at index "<<choice<<"is already taken!"<<endl;
		}
		*/

}
	
	
	//
	bool is_game_over(Deck &d){
		//if deck is full or if a player won
		//if true append DeckBoard to TicTacToe.txt (using overloaded ostream)
		int c = player1_count+player2_count;
		/*if(c>=9){
			cout<<"game draw game over";
			deck_list[game_number]=d;
			player1_count=0;
			player2_count=0;
			return true;
		}
		*/
		//player 1 won check
		if(player1_count>=3){
								
					//vertical check
					for(int i = 0 ; i < 3 ; i++){
						if(((d.player_1_choices[i] == 'X') && (d.player_1_choices[i+3] == 'X') && (d.player_1_choices[i+6]) == 'X') ){
							//stats.won = 1;
							cout<<"Player 1 won";//<<stats.won;
							p1_won = true;
							//deck_list[game_number]=d;
						//	player1_count=0;
							//player2_count=0;
							return true;
						}
					
					}
					
					//horizontal check
					for(int i = 0 ; i < 7 ; i++){
						if(((d.player_1_choices[i] == 'X') && (d.player_1_choices[i+1] == 'X') && (d.player_1_choices[i+2]) == 'X') ){
							//p.stats.won = 1;
							//stat.won=1;
							cout<<"Player 1 won";	
							p1_won = true;
							//deck_list[game_number]=d;	
							//player1_count=0;
							//player2_count=0;							
							return true;														
						}
						i = i +2;
						
					}	

	//for diagonal check
			if(((d.player_1_choices[0] == 'X') && (d.player_1_choices[4] == 'X') && (d.player_1_choices[8]) == 'X') || ((d.player_1_choices[2] == 'X') && (d.player_1_choices[4] == 'X') && (d.player_1_choices[6]) == 'X')){
								cout<<"Player 1 won";
								//exit(0);
								//deck_list[game_number]=d;
						//		player1_count=0;
						//	player2_count=0;
						p1_won = true;
								return true;
					}
										
					//return false;
				}
				
			/*	else{
					return false;
				}
			*/	
			
				
				//player 2 won check
		if(player2_count>=3){
						//cout<<"inside player2 check"<<endl;						
					//vertical check
					for(int i = 0 ; i < 3 ; i++){
						//cout<<"inside play2 vert check"<<i<<d.player_2_choices[i]<<endl;
						if(((d.player_2_choices[i] == 'O') && (d.player_2_choices[i+3] == 'O') && (d.player_2_choices[i+6]) == 'O') ){
							//stats.won = 1;
							//cout<<"inside play2 vert check"<<endl; 
							cout<<"Player 2 won";
							p2_won = true;
							//deck_list[game_number]=d;
						//	player1_count=0;
							//player2_count=0;
							return true;
						}
						
					}
					
					//horizontal check
					for(int i = 0 ; i < 7 ; i++){
						//cout<<"inside play2 horz check"<<i<<d.player_2_choices[i]<<endl;
						if(((d.player_2_choices[i] == 'O') && (d.player_2_choices[i+1] == 'O') && (d.player_2_choices[i+2]) == 'O') ){
							//p.stats.won = 1;
							//stat.won=1;
							//cout<<"inside play2 horz check"<<endl;
							cout<<"Player 2 won";
							p2_won = true;
							//deck_list[game_number]=d;
						//	player1_count=0;
							//player2_count=0;
							return true;														
						}
						i = i + 2;
					}
//for diagonal check
			if(((d.player_2_choices[0] == 'O') && (d.player_2_choices[4] == 'O') && (d.player_2_choices[8]) == 'O') || ((d.player_2_choices[2] == 'O') && (d.player_2_choices[4] == 'O') && (d.player_2_choices[6]) == 'O')){
								cout<<"Player 2 won";
								//exit(0);
								//cout<<"inside play2 dia check"<<endl;
								//deck_list[game_number]=d;
					//			player1_count=0;
						//	player2_count=0;
						p2_won = true;
								return true;
					}					
					//return false;
				}
				//return false;
				
				
			
		if(c>=9){
			cout<<"game draw game over";
			deck_list[game_number]=d;
		//	player1_count=0;
			//				player2_count=0;
			return true;
		}
		
		else {
			//cout<<"game not over from(isgameover) tot choices"<<c<<endl;
			return false;
		}
		
	}
	
	//
	void get_user_input(Player &p,Deck &d){
		cout<< "Enter player "<<p.get_name()<<"choice: "<<endl;
		cin>>choice;
		if(validate_user_input(choice,d)){
			if(p.get_name() == "X"){
			d.board[choice] = d.player_1_choices[choice] = 'X';
				player1_count++;
				//cout<<"player1 count "<<player1_count<<endl;
				cout<<d;					
			}
			else if(p.get_name() == "O"){
				d.board[choice] = d.player_2_choices[choice] = 'O';
				player2_count++;
				//cout<<"player2 count "<<player2_count<<endl;
				cout<<d;
				
			}
			//return choice;	
			
			game_over_con = is_game_over(d) ;						
			}
		
		else{
			cout<<"invalid move";
			get_user_input(p,d);
		}
	}
	
	//start the game
	int start_game(Player &player1,Player &player2,Deck &d){
		bool con = is_game_over(d);
		while(!(is_game_over(d))){
				get_user_input(player1,d);	
				if(!game_over_con)
				get_user_input(player2,d);
			else{
				player1_count=0;
				player2_count=0;
				break;
			}
		}
		if(p1_won == true){
			return 1;
		}
		else if(p2_won == true){
			return 2;
		}
		else
			return 3;
		cout<<"game end";
				
				
	
	}
};
