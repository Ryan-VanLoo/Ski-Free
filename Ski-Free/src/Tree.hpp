//
//  Tree.hpp
//  emptyExample
//
//  Created by Ryan Van Loo on 11/19/20.
//

#ifndef Tree_hpp
#define Tree_hpp
#include "ofApp.h"
#include "Obstacles.hpp"

#include <stdio.h>
class Tree : public Obstacles{
public:
    void update();
    void draw();
    
};
#endif /* Tree_hpp */
