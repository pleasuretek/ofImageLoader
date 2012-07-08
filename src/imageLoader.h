#pragma once

#include "ofMain.h"


class imageLoader : public ofBaseApp{

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
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		void showHelp();
		void loadDir();
		void chooseDir();
		void fScreen();
		void setAlpha();

		ofDirectory dir;
		string path;
		vector<ofImage> images;

		bool help;

		int img01;
		int img02;
		int alpha01;
		int alpha02;
		bool anim;
		bool goingUp;   // bool used to keep track of 2 states of up and down
        bool reload;
        unsigned int timeline;
};

