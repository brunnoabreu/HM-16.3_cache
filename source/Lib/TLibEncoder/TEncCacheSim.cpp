/* 
 * File:   TEncCacheSim.cpp
 * Author: brunno
 * 
 * Created on July 12, 2016, 2:15 PM
 */

#include <c++/4.8/iosfwd>
#include <iostream>

#include "TEncCacheSim.h"

using namespace std;

bool TEncCacheSim::cacheEnabled = false;
unsigned int TEncCacheSim::cacheSize;
unsigned int TEncCacheSim::offchipBW;
int TEncCacheSim::poc;
list<string> TEncCacheSim::cacheKeys;
fstream TEncCacheSim::fileOut;
//int TEncCacheSim::predX;
//int TEncCacheSim::predY;
//TComMv TEncCacheSim::predMv;
int TEncCacheSim::absX;
int TEncCacheSim::absY;
string TEncCacheSim::outName;

void TEncCacheSim::init(){
    TEncCacheSim::cacheEnabled = true;
    TEncCacheSim::offchipBW = 0;
}

void TEncCacheSim::openCacheFile(){
    TEncCacheSim::fileOut.open(outName.c_str(), fstream::out);
    TEncCacheSim::fileOut << "Frame\tX\tY\tHeight" << endl;
}