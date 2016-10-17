/* 
 * File:   TEncCacheSim.h
 * Author: brunno
 *
 * Created on July 12, 2016, 2:15 PM
 */

#ifndef TENCCACHESIM_H
#define	TENCCACHESIM_H

#define EN_CACHE_MANAGEMENT 1

#include <list>
#include <string>
#include <fstream>

using namespace std;

class TEncCacheSim {
public:
    static bool cacheEnabled;
    static unsigned int cacheSize;
    static unsigned int offchipBW;
    static list<string> cacheKeys;
    static fstream fileOut;
    static int poc;
    //static TComMv predMv;
    //static int predX;
    //static int predY;
    static int absX;
    static int absY;
    static string outName;
    
    static void init();
    static void openCacheFile();
    
    

};

#endif	/* TENCCACHESIM_H */

