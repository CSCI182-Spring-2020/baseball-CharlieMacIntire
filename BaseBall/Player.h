#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#define MAX_PLAYER_COUNT 15
using namespace std;

class Player
{
public:
	//Player(string name, int hit, int walk, int out, float battingAvg);

	string _name;
	int _hit;
	int _walk;
	int _out;
	float _battingAvg = _hit / (_walk + _hit);

};

