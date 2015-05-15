#pragma once

#include "ofMain.h"

#include "defs.h"

class Serial : public ofThread {
// class Serial {

	ofSerial serial;

	vector<ofxTB::Electrode> data;
	vector<ofxTB::Electrode> normalizedData;

	int deviceNb;
	int baudRate;
	bool bConnected;

	public:
		void setup();
		void setup(int deviceId);
		void threadedFunction();
		// void update();
		// void flush(){ serial.flush(); serial.drain(); }
		int available(){ return serial.available(); }
		
		// void normalizeData();
		void logData();

		vector<ofxTB::Electrode> getData();
		vector<ofxTB::Electrode> getNormalizedData();
		
	private:
		void connect();
		void init();
		// void readData();
		void readLine();
};