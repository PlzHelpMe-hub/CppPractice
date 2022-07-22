#include<iostream>
using namespace std;

class Monster
{
public:
	Monster()
	{
		cout << "积己" << endl;
	}

	Monster(const Monster& monster)
	{
		cout << "汗荤 积己" << endl;
	}

	~Monster()
	{
		cout << "家戈" << endl;
	}
public:
	int m_MonHP;
	int m_MonAttack;
};

class Player
{
public:
	Player()
	{

	}

	Player(const Player& player)
	{

	}

	~Player()
	{

	}

	//Player(const Monster& player)
	//{
	//	m_PlayerAttack = player.m_MonAttack;
	//	m_PlayerHP = player.m_MonHP;
	//}

public:
	int m_PlayerHP = 30;
	int m_PlayerAttack = 10;
};

int main()
{
	//Monster* monster= new Monster;
	Monster* monster = new Monster;
	//cout << monster->m_MonAttack << endl;
	//cout << monster->m_MonHP << endl;

	Player* player = new Player;
	cout << player->m_PlayerAttack << endl;
	cout << player->m_PlayerHP << endl;

	player = (Player*)monster;
	//player->m_PlayerAttack = 100;
	//player->m_PlayerHP = 200;
	cout << player->m_PlayerHP << endl;
	cout << player->m_PlayerAttack << endl;


	return 0;

}