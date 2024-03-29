//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAccessoryRetrievalCompletionTuple_h
#define HMDAccessoryRetrievalCompletionTuple_h
@import Foundation;

#include "HMFObject.h"
#include "HMDAccessory.h"
#include "HMDHome.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFTimer, NSMutableArray, NSString;

@interface HMDAccessoryRetrievalCompletionTuple : HMFObject<HMFTimerDelegate>

@property (weak, nonatomic) HMDHome *home;
@property (weak, nonatomic) HMDAccessory *accessory;
@property (retain, nonatomic) NSMutableArray *completions;
@property (nonatomic) long long linkType;
@property (nonatomic) double retrievalTimeout;
@property (retain, nonatomic) HMFTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHome:(id)home accessory:(id)accessory linkType:(long long)type;
- (void)addCompletion:(id /* block */)completion;
- (void)start;
- (void)stop;
- (void)timerDidFire:(id)fire;
@end

#endif /* HMDAccessoryRetrievalCompletionTuple_h */
