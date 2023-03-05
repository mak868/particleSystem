#pragma once
#include "ofMain.h"


class particle
{
public:
	particle();

	void setup();
	void update(float speed, float noise);
	void update();
	void draw(float sizeDot);



	ofVec2f pos;
	ofVec2f	vel;
	ofVec2f frc;

	float drag;

	ofVec2f uniqueVal;
	float size;

};

