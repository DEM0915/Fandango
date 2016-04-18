#include "ofxTomomi.h"

void ofxTomomi::setup(){
    
    for (int i = 0; i < N; i++) {
        spectrum[i] = 0.0f;
    }
    
    for ( int j = 0; j < n; j++ ) {
        tx[j] = ofRandom( 0, 1000 );
        ty[j] = ofRandom( 0, 1000 );
    }
}

void ofxTomomi::update(){
    
    float time = ofGetElapsedTimef();
    float dt = time - time0;
    time0 = time;
    
    for (int j=0; j<n; j++) {
        tx[j] += Vel * dt;
        ty[j] += Vel * dt;
        
        p[j].x = ofSignedNoise( tx[j] ) * Rad;
        p[j].y = ofSignedNoise( ty[j] ) * Rad;
    }
}


void ofxTomomi::draw(){
    
    ofPushStyle();
    
    ofBackground(0);
    
    ofPushMatrix();
    
    ofTranslate( ofGetWidth() / 2, ofGetHeight() / 2 );
    
    ofSetColor(250, 250, 250, 190);
    ofFill();
    for (int i=0; i<n; i++) {
        ofDrawCircle( p[i], 2 );
    }
    
    float dist = 50;
    for (int j=0; j<n; j++) {
        for (int k=j+2; k<n; k++) {
            if ( ofDist( p[j].x, p[j].y, p[k].x, p[k].y )
                < dist ) {
                ofDrawLine( p[j], p[k] );
            } }
    }
    
    ofPopMatrix();
    
    ofPopStyle();
}