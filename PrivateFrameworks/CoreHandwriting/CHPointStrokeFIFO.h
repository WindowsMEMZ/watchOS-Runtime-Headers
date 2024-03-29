//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 445.201.0.0.0
//
#ifndef CHPointStrokeFIFO_h
#define CHPointStrokeFIFO_h
@import Foundation;

#include "CHPointFIFO.h"
#include "CHDrawing.h"

@interface CHPointStrokeFIFO : CHPointFIFO

@property (retain, nonatomic) CHDrawing *strokes;
@property (retain, nonatomic) CHDrawing *drawing;

/* instance methods */
- (id)initWithFIFO:(id)fifo;
- (void)addPoint:;
- (void)flush;
- (void)clear;
@end

#endif /* CHPointStrokeFIFO_h */
