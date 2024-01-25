//
//  Skier.cpp
//  emptyExample
//
//  Created by Ryan Van Loo on 11/19/20.
//
#include "ofApp.h"
#include "Skier.hpp"

using namespace std;

Skier::Skier(){}

void Skier::setup(){
    x_coord = ofGetWidth()/2;
    y_coord = ofGetHeight()/2;
    size = 25;
    ski_speed = 4;
}

void Skier::update(){
    
}

void Skier::draw(){
    ofSetColor(100,0,0);
    ofDrawRectangle(x_coord, y_coord, size, size);
}
