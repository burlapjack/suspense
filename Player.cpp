//Player.cpp 
//by J.D. Carthel 2018

#include <string>
#include <vector>
#include "Player.h"

Player::Player(){};
Player::~Player(){};

Player::getName()
{
	return m_name;
};

Player::getHp()
{
	return m_hp;
};
Player::setLocation(int px,int py)
{
	m_x = px;
	m_y = py;
};




