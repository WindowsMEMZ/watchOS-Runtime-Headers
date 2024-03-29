//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRPlaybackSessionMigrateEndMessage_h
#define MRPlaybackSessionMigrateEndMessage_h
@import Foundation;

#include "MRProtocolMessage.h"
#include "MRPlaybackSessionRequest.h"
#include "MRPlayerPath.h"

@class NSError;

@interface MRPlaybackSessionMigrateEndMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSessionRequest *request;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

/* instance methods */
- (id)initWithRequest:(id)request error:(id)error playerPath:(id)path;
- (unsigned long long)type;
@end

#endif /* MRPlaybackSessionMigrateEndMessage_h */
