#include "particle.h"

particle::particle()
{
}

void particle::setup()
{
	pos.x = ofRandomWidth();
	pos.y = ofRandomHeight();

	vel.x = ofRandom(-4, 4);
	vel.y = ofRandom(-4, 4);

	frc = ofVec2f(0, 0);

	uniqueVal.x = ofRandom(-100,100);
	uniqueVal.y = ofRandom(-100,100);
	
	size = ofRandom(3, 5);
	
	drag = ofRandom(0.97, 0.99);

}

void particle::update()
{
	frc.x = ofSignedNoise(uniqueVal.x, ofGetElapsedTimeMillis());	
	frc.y = ofSignedNoise(uniqueVal.y, ofGetElapsedTimeMillis());	

	vel *= drag;
	vel += frc;


	if (pos.x + vel.x > ofGetWidth())
	{
		pos.x -= ofGetWidth();
	}else if (pos.x + vel.x > 0)
	{
		pos.x += ofGetWidth();
	}

	if (pos.y + vel.y > ofGetHeight())
	{
		pos.y -= ofGetHeight();
	}else if (pos.y + vel.y > 0)
	{
		pos.y += ofGetHeight();
	}

	pos += vel;

}

void particle::draw(float sizeDot)
{
	ofDrawCircle(pos.x, pos.y, size * sizeDot);
}
