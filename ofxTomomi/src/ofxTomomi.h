#pragma once
#include "ofMain.h"

class ofxTomomi {
    
public:
    //ofxTomomi();
    void setup();
    void update();
    void draw();
    
    
    static const int N = 256;
    float spectrum[ N ];
    float Rad = 500;
    float Vel = 0.1;
    int bandRad = 2;
    int bandVel = 100;
    
    static const int n = 300;
    
    float tx[n], ty[n];
    ofPoint p[n];
    float time0 = 0;
    

};

