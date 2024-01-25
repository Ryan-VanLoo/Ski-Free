//
//  Obstacles.cpp
//  emptyExample
//
//  Created by Ryan Van Loo on 11/19/20.
//
#include "ofApp.h"
#include "Obstacles.hpp"

using namespace std;

Obstacles::Obstacles(){
    
}

void Obstacles::resetXY(){
    _x = rand() % ofGetWidth();
    _y = ofGetHeight();
}



void Obstacles::setup(){
    _x = rand() % ofGetWidth();
    _y = ofGetHeight() + size;
    size = 25;
    speed = 2;
}

void Obstacles::update(){
    
}

void Obstacles::draw(){
    
}
