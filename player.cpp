#include<iostream>
using namespace std;
	
struct Statistics{
	int won;
	int drawn;
	int lost;
};

class Player{
	private:
		string name;//name of the player
		char playing_mark;//player's mark 'X' or 'O'
		public:
		struct Statistics stats;//instance of Structure Statistics
	
	public:
		
		Player()//default constructor
		{
			name = "";
			playing_mark = ' ';
		}
		
		Player(string nam, char mark)//overloaded constructor with parameters as player name and player mark
		{
			name = nam;
			playing_mark = mark;
			
		}
		
		void print(){
			cout<< name;
		}
		
		Statistics get_statistics(){
			return stats;
		}
		
		string get_name(){
			return name;
		}
					
		int get_score()//returns ((won * 2) + draw - lost)
		{
			cout<<"In get score stats.won "<<stats.won<<endl;
			return ((stats.won * 2) + stats.drawn - stats.lost);	
		}
		
		
		//ostream oveloading <<
/*		friend ostream &operator<<(ostream &output, const Player &P)
		{
			output << "Player: " << P.name << "Mark: " << P.playing_mark << "Score: " <<P.get_score();
			return output;
		}
	/*	
		friend operator <(const Player& P){
			if()
		}
		
		friend operator >(const Player& P){
			
		}
		
		friend operator ==(const Player& P){
			
		}
		
		*/
};
	
