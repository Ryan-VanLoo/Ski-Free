//
//  Obstacles.hpp
//  emptyExample
//
//  Created by Ryan Van Loo on 11/19/20.
//

#ifndef Obstacles_hpp
#define Obstacles_hpp

#include <stdio.h>

using namespace std;

class Obstacles{
public:
    void setup();
    virtual void update() = 0;
    virtual void draw() = 0;
    void resetXY();
    
    

    float _x;
    float _y;
    int size; // This will eventually become a virtual string for the Image file name/address
    float speed;
    
    Obstacles();
};





#endif /* Obstacles_hpp */
