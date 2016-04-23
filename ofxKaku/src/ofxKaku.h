#pragma once

class ofxKaku {
public:
    // Draw kaku tomomi
    static void draw(float x, float y, float radius) {
        ofPushStyle();
        ofHideCursor();
        ofSetCircleResolution(100);
        ofSetColor(40, 42, 54);
        ofDrawCircle(x, y, radius);
        ofPopStyle();
    }
};