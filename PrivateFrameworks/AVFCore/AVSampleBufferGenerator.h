//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVSampleBufferGenerator_h
#define AVSampleBufferGenerator_h
@import Foundation;

#include "AVSampleBufferGeneratorInternal.h"

@interface AVSampleBufferGenerator : NSObject {
  /* instance variables */
  AVSampleBufferGeneratorInternal *_generator;
}

/* class methods */
+ (void)initialize;
+ (void)notifyOfDataReadyForSampleBuffer:(struct opaqueCMSampleBuffer *)buffer completionHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithAsset:(id)asset timebase:(struct OpaqueCMTimebase *)timebase;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (struct OpaqueFigSampleGenerator *)_figSampleGenerator;
- (id)makeBatch;
- (struct opaqueCMSampleBuffer *)createSampleBufferForRequest:(id)request error:(id *)error;
- (struct opaqueCMSampleBuffer *)createSampleBufferForRequest:(id)request;
- (struct opaqueCMSampleBuffer *)createSampleBufferForRequest:(id)request addingToBatch:(id)batch error:(id *)error;
@end

#endif /* AVSampleBufferGenerator_h */
