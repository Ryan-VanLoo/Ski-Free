//
//  Skier.hpp
//  emptyExample
//
//  Created by Ryan Van Loo on 11/19/20.
//

#ifndef Skier_hpp
#define Skier_hpp

#include "ofApp.h"
#include <stdio.h>
using namespace std;

class Skier{
public:
    Skier();
    
    void setup();
    void update();
    void draw();
    
    float x_coord;
    float y_coord;
    float size;   // This will be a string with the file name of the Skier Image
    int ski_speed;
};

#endif /* Skier_hpp */
