//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCAssistantCustomDataPlaybackQueue_h
#define MPCAssistantCustomDataPlaybackQueue_h
@import Foundation;

#include "MPCAssistantPlaybackQueue.h"

@class NSData, NSString;

@interface MPCAssistantCustomDataPlaybackQueue : MPCAssistantPlaybackQueue

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *customData;

/* class methods */
+ (id)customDataQueueWithContextID:(id)id identifier:(id)identifier customData:(id)data;

/* instance methods */
- (id)initWithContextID:(id)id identifier:(id)identifier customData:(id)data;
- (id)description;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;
@end

#endif /* MPCAssistantCustomDataPlaybackQueue_h */
