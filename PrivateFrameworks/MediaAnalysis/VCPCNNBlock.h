//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPCNNBlock_h
#define VCPCNNBlock_h
@import Foundation;

#include "VCPCNNData.h"
#include "VCPCNNMetalContext.h"

@class NSMutableArray;

@interface VCPCNNBlock : NSObject {
  /* instance variables */
  BOOL _executedOnGPU;
}

@property (weak) NSMutableArray *inputSize;
@property (retain) NSMutableArray *outputSize;
@property (weak) VCPCNNData *input;
@property (retain) VCPCNNData *output;
@property (readonly) VCPCNNMetalContext *context;
@property BOOL generateOutput;

/* instance methods */
- (int)constructBlock:(id)block context:(id)context;
- (int)forward;
- (int)readFromDisk:(struct __sFILE { char * x0; int x1; int x2; short x3; short x4; struct __sbuf { char * x0; int x1; } x5; int x6; void * x7; undefined * x8; undefined * x9; undefined * x10; undefined * x11; struct __sbuf { char * x0; int x1; } x12; struct __sFILEX * x13; int x14; unsigned char x15[3] unsigned char x16[1] struct __sbuf { char * x0; int x1; } x17; int x18; long long x19; } *)disk quantFactor:(short)factor;
- (BOOL)supportGPU;
- (BOOL)useGPU;
@end

#endif /* VCPCNNBlock_h */
