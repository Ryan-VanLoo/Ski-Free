//
//  Tree.cpp
//  emptyExample
//
//  Created by Ryan Van Loo on 11/19/20.
//
#include "ofApp.h"
#include "Tree.hpp"

void Tree::update(){
    _y -= speed;
}

void Tree::draw(){
    ofSetColor(0, 100, 0);
    ofDrawTriangle(_x, _y, _x+size, _y+size, _x-size, _y+size);
}
