#pragma once

#include "ofMain.h"
#include <vector>

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		float x = 1;
		float y = 1;
		float z = 1;

		float a = 10;
		float b = 28;
		float c = 8/3;

		float dt = 0.01;
		float dx = 0;
		float dy = 0;
		float dz = 0;

		vector<ofPoint> points;

		ofEasyCam cam;

		ofPolyline line;

};
