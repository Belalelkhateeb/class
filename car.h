#ifndef CAR_H
#define CAR_H

#pragma once
#include <iostream>
#include <string> 
using namespace std;
class car
{
private :
    string maker;
    int model;
    string color;
public:
    void setMaker( string M);
    string getMaker();
    void setColor( string C);
    string getColor();
    void setModel(int Mo);
    int getModel ();
  car();
  ~car();

};

#endif