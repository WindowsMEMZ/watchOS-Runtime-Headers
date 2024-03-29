//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPCNNFullConnectionBlock_h
#define VCPCNNFullConnectionBlock_h
@import Foundation;

#include "VCPCNNBlock.h"

@interface VCPCNNFullConnectionBlock : VCPCNNBlock {
  /* instance variables */
  float * _weight;
  float * _bias;
  int _numNeurons;
  int _neuronType;
}

/* class methods */
+ (id)fcBlockWithNumNeurons:(int)neurons NeuronType:(int)type;

/* instance methods */
- (id)initWithParameters:(int)parameters NeuronType:(int)type;
- (void)dealloc;
- (int)constructBlock:(id)block context:(id)context;
- (int)readWeightsBias:(struct __sFILE { char * x0; int x1; int x2; short x3; short x4; struct __sbuf { char * x0; int x1; } x5; int x6; void * x7; undefined * x8; undefined * x9; undefined * x10; undefined * x11; struct __sbuf { char * x0; int x1; } x12; struct __sFILEX * x13; int x14; unsigned char x15[3] unsigned char x16[1] struct __sbuf { char * x0; int x1; } x17; int x18; long long x19; } *)bias weights:(float *)weights bias:(float *)bias inputDim:(int)dim outputDim:(int)dim quantFactor:(int)factor;
- (int)loadWeights:(struct __sFILE { char * x0; int x1; int x2; short x3; short x4; struct __sbuf { char * x0; int x1; } x5; int x6; void * x7; undefined * x8; undefined * x9; undefined * x10; undefined * x11; struct __sbuf { char * x0; int x1; } x12; struct __sFILEX * x13; int x14; unsigned char x15[3] unsigned char x16[1] struct __sbuf { char * x0; int x1; } x17; int x18; long long x19; } *)weights inputDim:(int)dim outputDim:(int)dim quantFactor:(int)factor;
- (int)readFromDisk:(struct __sFILE { char * x0; int x1; int x2; short x3; short x4; struct __sbuf { char * x0; int x1; } x5; int x6; void * x7; undefined * x8; undefined * x9; undefined * x10; undefined * x11; struct __sbuf { char * x0; int x1; } x12; struct __sFILEX * x13; int x14; unsigned char x15[3] unsigned char x16[1] struct __sbuf { char * x0; int x1; } x17; int x18; long long x19; } *)disk quantFactor:(short)factor;
- (BOOL)supportGPU;
- (BOOL)useGPU;
@end

#endif /* VCPCNNFullConnectionBlock_h */
