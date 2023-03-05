#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	p.assign(100, particle());

	for (int i = 0; i < p.size(); i++) {
		p[i].setup();
	}

}

//--------------------------------------------------------------
void ofApp::update(){

	for (int i = 0; i < p.size(); i++) {
		p[i].update();
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	for (int i = 0; i < p.size(); i++) {
		p[i].draw(2);
	}

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
