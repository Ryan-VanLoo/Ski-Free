//
//  Rock.hpp
//  emptyExample
//
//  Created by Ryan Van Loo on 11/19/20.
//

#ifndef Rock_hpp
#define Rock_hpp
#include "ofApp.h"
#include "Obstacles.hpp"
#include <stdio.h>
using namespace std;
class Rock : public Obstacles{
public:
    void update();
    void draw();
};
#endif /* Rock_hpp */
