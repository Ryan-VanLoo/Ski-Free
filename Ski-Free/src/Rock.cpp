//
//  Rock.cpp
//  emptyExample
//
//  Created by Ryan Van Loo on 11/19/20.
//
#include "ofApp.h"
#include "Obstacles.hpp"
#include "Rock.hpp"
using namespace std;

void Rock::update(){
    _y -= speed;
}

void Rock::draw(){
    ofSetColor(100);
    ofDrawCircle(_x, _y, size/2);
}
