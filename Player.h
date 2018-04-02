//Player.h
//By J.D. Carthel 2018


#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>


class Player 
{
	public:
		Player();
		~Player();
		std::string getName();
		void getInventory();
		int getHp();
			
	private:
		int m_x,m_y,m_hp;
		std::string m_name;
		int m_health;
		vector<int> m_inventory;


};
#endif /*PLAYER_H*/
