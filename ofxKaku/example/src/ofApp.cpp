#include "ofMain.h"
#include "ofxKaku.h"

class ofApp : public ofBaseApp
{
public:
    void draw() {
        ofBackground(234, 244, 252);
        ofxKaku::draw(ofGetMouseX(), ofGetMouseY(), 100);
    }
};

int main(){
    ofSetupOpenGL(809, 602, OF_WINDOW);
    ofRunApp(new ofApp());
}