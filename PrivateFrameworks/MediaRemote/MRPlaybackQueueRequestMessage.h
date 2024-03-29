//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRPlaybackQueueRequestMessage_h
#define MRPlaybackQueueRequestMessage_h
@import Foundation;

#include "MRProtocolMessage.h"
#include "MRPlaybackQueueRequest.h"
#include "MRPlayerPath.h"

@interface MRPlaybackQueueRequestMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackQueueRequest *request;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

/* instance methods */
- (id)initWithRequest:(id)request forPlayerPath:(id)path;
- (unsigned long long)type;
@end

#endif /* MRPlaybackQueueRequestMessage_h */
