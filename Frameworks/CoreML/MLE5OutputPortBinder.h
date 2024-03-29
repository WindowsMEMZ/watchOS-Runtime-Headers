//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLE5OutputPortBinder_h
#define MLE5OutputPortBinder_h
@import Foundation;

#include "MLE5PortBinder-Protocol.h"
#include "MLFeatureDescription.h"
#include "MLFeatureValue.h"
#include "MLPixelBufferPool.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface MLE5OutputPortBinder : NSObject<MLE5PortBinder> {
  /* instance variables */
  struct __CVBuffer * _temporarilyBoundPixelBuffer;
}

@property (readonly) struct e5rt_io_port * portHandle;
@property (readonly) MLFeatureDescription *featureDescription;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) BOOL outputBackingWasDirectlyBound;
@property (retain) id outputBacking;
@property (readonly) MLFeatureValue *featureValue;
@property (retain, nonatomic) MLPixelBufferPool *pixelBufferPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPort:(struct e5rt_io_port *)port featureDescription:(id)description;
- (long long)_tryToBindOutputBackingDirectlyAndReturnError:(id *)error;
- (BOOL)bindAndReturnError:(id *)error;
- (id)_makeFeatureValueAndReturnError:(id *)error;
- (id)_makeFeatureValueFromOutputBacking:(id)backing error:(id *)error;
- (BOOL)_copyOutputFromPort:(struct e5rt_io_port *)port toOutputBacking:(id)backing featureDescription:(id)description error:(id *)error;
- (id)_makeFeatureValueFromPort:(struct e5rt_io_port *)port featureDescription:(id)description error:(id *)error;
- (void)reset;
@end

#endif /* MLE5OutputPortBinder_h */
