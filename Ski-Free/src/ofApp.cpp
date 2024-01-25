#include "ofApp.h"
#include "Obstacles.hpp"
#include "Tree.hpp"
#include "Rock.hpp"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    loadObstType();
    skier.setup();
    time_start = ofGetElapsedTimeMillis();
    delay_millis = 500;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    choice = floor(rand() % 2);
    time_now = ofGetElapsedTimeMillis() - time_start;
    
        
    generateObstType();
    
    
    for(int i = 0; i < obstacles.size(); i++){
        
        if(
           obstacles[i]->_x < skier.x_coord + skier.size &&
           obstacles[i]->_x + obstacles[i]->size > skier.x_coord &&
           obstacles[i]->_y < skier.y_coord + skier.size &&
           obstacles[i]->_y + obstacles[i]->size > skier.y_coord
           ){

                wipeOut();
            
            }
        }


skier.update();

updateObstType();
    
}
        
    
        


//--------------------------------------------------------------
void ofApp::draw(){
    skier.draw();
    drawObstType();
}






//--------------------------------------------------------------

void ofApp::loadObstType(){
obstacleTypes.push_back("tree");
obstacleTypes.push_back("rock");
};

void ofApp::loadObstVect(string type){
    if(type == "tree"){
        Obstacles * tree = new Tree;
        tree->setup();
        obstacles.push_back(tree);
    }
    if(type == "rock"){
        Obstacles * rock = new Rock;
        rock->setup();
        obstacles.push_back(rock);
    }
}


void ofApp::generateObstType(){
 if(time_now >= delay_millis){
        dustOff();
        time_start = ofGetElapsedTimeMillis();
        
        if(obstacleTypes[choice] == "rock"){
            loadObstVect("rock");
        }
        
        else if(obstacleTypes[choice] == "tree"){
            loadObstVect("tree");
        }
    }
}

void ofApp::stopGenerate(){
    for(int i = 0; i < obstacles.size(); i++){
        if(obstacles[i]->_y == ofGetHeight()){
            obstacles.erase(obstacles.begin() + i);
        }
    }
}

void ofApp::updateObstType(){
    
    if(obstacles.size() > 0){
        for(int i = 0; i < obstacles.size(); i++){
            obstacles[i]->update();
        }
    }
}

void ofApp::drawObstType(){
    for(int i = 0; i < obstacles.size(); i++){
        obstacles[i]->draw();
    }
}

void ofApp::wipeOut(){
    time_start = ofGetElapsedTimeMillis();
    
    for(int i = 0; i < obstacles.size(); i++){
        obstacles[i]->speed = 0;
        delay_millis = 1000;
        stopGenerate();
    }
    if(time_now >= delay_millis){
        dustOff();
    }
}



void ofApp::dustOff(){
    for(int i = 0; i < obstacles.size(); i++){
        obstacles[i]->speed = 2;
        delay_millis = 500;
    }
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == OF_KEY_RIGHT){
        for(int i = 0; i < obstacles.size(); i++){
            obstacles[i]->_x -= skier.ski_speed;
        }
       
    }
    if(key == OF_KEY_LEFT){
        for(int i = 0; i < obstacles.size(); i++){
            obstacles[i]->_x += skier.ski_speed;
        }
        
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
