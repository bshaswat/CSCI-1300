// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 3


#include <iostream>
#include "player.h"
using namespace std;

Player::Player() {
    name = "";
    points = 0;
}

Player::Player(string playername, double playerpoints) {
    name = playername;
    points = playerpoints;
}

void Player::setPoints(double pts) {
    points = pts;
}

void Player::setName(string name_in) {
    name = name_in;
}

double Player::getPoints() {
    return points;
}

string Player::getName() {
    return name;
}
