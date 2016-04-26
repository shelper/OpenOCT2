//Definitions for some constants
#define EVENT HANDLE
#define PI 3.14159265358979323846 
#define TWO_PI 6.28318530717958647692
#define HALF_PI 1.57079632679489661923
#define SPECTRUMWIDTH 1376
#define FFTNUM 2048
#define IMAGEWIDTH 1024
#define IMAGEHEIGHT 1000
#define IMAGESIZE 1024000
#define IMAGEHALFWIDTH 512
#define IMAGEHALFHEIGHT 500
#define IMAGEQUATERSIZE 256000
#define FRAME2VOLTAGESHIFT 0.001

//scanning directions
#define FORWARD 0
#define BACKWORD 1
#define SPECTRUMGAIN 1/16
#define SPECTRUMSTEP SPECTRUMWIDTH/IMAGEWIDTH
#define CAMGAINFACTOR 4
#define INTTIMEFACTOR 0.4
#define DEFAULTCAMGAIN 100
#define DEFAULTINTTIME 18
#define GAINFACTOR 0.5
#define DEPTHFACTOR 3
//#define CAMGAINFACTOR 8.11
//#define INTTIMEFACTOR 5