//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNCoreMotionContextProvider_h
#define MNCoreMotionContextProvider_h
@import Foundation;

#include "GEOMotionContextProvider-Protocol.h"
#include "MNTraceRecorder.h"

@class CMActivityManager, NSString;
@protocol GEOMotionContextProviderDelegate;

@interface MNCoreMotionContextProvider : NSObject<GEOMotionContextProvider> {
  /* instance variables */
  CMActivityManager *_activityManager;
  NSObject<GEOMotionContextProviderDelegate> *_delegate;
  MNTraceRecorder *_traceRecorder;
}

@property (weak, nonatomic) NSObject<GEOMotionContextProviderDelegate> *motionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTraceRecorder:(id)recorder;
- (void)dealloc;
- (void)startMotionUpdates;
- (void)stopMotionUpdates;
@end

#endif /* MNCoreMotionContextProvider_h */
