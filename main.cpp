#include "player.cpp"
#include "deck.cpp"
#include "tictactoe.cpp"

int  main(){

	//cout<<"hello";
	TicTacToe tic;
	Player player1("X",'X');
	Player player2("O",'O');
	tic.game_number=1;
	
	Deck d;
	cout<<d;
	Deck deck_list[10];
	struct Statistics stat1 = player1.get_statistics();
	struct Statistics stat2 = player2.get_statistics();
	int score = tic.start_game(player1,player2,deck_list[0]);
	/*
	if(score == 1){
		cout<<"success"<<endl;
		stat1[0].lost = 0;
		stat1[0].drawn =0;
		stat1[0].won = 1;	
		stat2[0].lost = 1;
		cout<<"X score ";
	}
	else if(score == 2){
		stat2[0].lost = 0;
		stat2[0].drawn =0;
		stat2[0].won = 1;	
		stat1[0].lost = 1;
	}
	cout<<(stat1[0].won*2) + stat1[0].drawn - stat1[0].lost;
	cout<<player1.get_score()<<endl;
	*/
	
			//if(tic.game_number<10){						
				for(int i= 1 ; i<= 9 ; i++){
						tic.game_number = i+1;
						cout<<"Do u want to play again? (Y/N)"<<endl;
						char in;
						cin>>in;
					if(in == 'Y' || in == 'y'){
						cout<<"Game: "<<tic.game_number<<endl;
						cout<<d;
						int sc = tic.start_game(player1,player2,deck_list[i]);
						/*
						if(score == 1){
		cout<<"success"<<endl;
		stat1[0].lost = 0;
		stat1[0].drawn =0;
		stat1[0].won = 1;	
		stat2[0].lost = 1;
		cout<<"X score ";
	}
	else if(score == 2){
		stat2[0].lost = 0;
		stat2[0].drawn =0;
		stat2[0].won = 1;	
		stat1[0].lost = 1;
	}
	*/
						}
						else if(in == 'N' || in == 'n'){
							cout<<"exiting";
							exit(0);
						}
						else{
							cout<<"Enter correct option";
						}
					}
			//	}
		
		/*		else{
					cout<<"from exit zero "<<endl;
					exit(0);
				}
				*/
	getchar();
	return 0;
	
}
