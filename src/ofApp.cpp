#include "ofApp.h"
#include <cmath>
#include <vector>

//--------------------------------------------------------------
void ofApp::setup(){
//	ofSetFrameRate(2000);
	ofSetVerticalSync(false);
}

//--------------------------------------------------------------
void ofApp::update(){
	dx = (a * (y - x)) * dt;
	dy = (x * (b - z) - y) * dt;
	dz = ((x * y) - (c * z)) * dt;

	x += dx;
	y += dy;
	z += dz;

	points.push_back(ofPoint(x*5,y*5,z*5));
}

//--------------------------------------------------------------
void ofApp::draw(){
	cam.begin();
	ofSetBackgroundColor(245, 245, 220);

	for (float i=0; i<points.size() - 1; i++)
	{
		line.begin();
		line.clear();

		line.addVertex(points[i]);
		line.addVertex(points[i+1]);

		float tempDX = abs(points[i].x - points[i+1].x);
		float tempDY = abs(points[i].y - points[i+1].y);
		float tempDZ = abs(points[i].z - points[i+1].z);

		float tempDxyz = ceil(abs(tempDX*tempDY*tempDZ));
		if (tempDxyz < 0)
		{
			tempDxyz = 0;
		}
		if (tempDxyz > 255)
		{
			tempDxyz = 255;
		}

		float tempPerc = (tempDxyz / 255);

		ofSetLineWidth(ceil(5*tempPerc));
		ofSetColor(ceil(abs(points[i].x))*3, ceil(abs(points[i].y))*2, ceil(abs(points[i].z)));

		line.draw();

		line.end();
	}

	cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
