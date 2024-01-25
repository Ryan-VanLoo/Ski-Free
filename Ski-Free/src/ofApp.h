#pragma once

#include "ofMain.h"
#include "Obstacles.hpp"
#include "Tree.hpp"
#include "Rock.hpp"
#include "Skier.hpp"


class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
    
        void loadObstType();
        void loadObstVect(string type);
        void generateObstType();
        void stopGenerate();
        void updateObstType();
        void drawObstType();
        vector <Obstacles *> obstacles;
        vector <string> obstacleTypes;
    
        Skier skier;
        float delay_start;
        float time_start;
        float time_now;
        int choice;
        void wipeOut();
        void dustOff();
        int delay_millis;
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button); 
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
};
