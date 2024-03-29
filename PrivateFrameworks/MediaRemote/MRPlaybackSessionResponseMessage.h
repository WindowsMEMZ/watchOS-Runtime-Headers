//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRPlaybackSessionResponseMessage_h
#define MRPlaybackSessionResponseMessage_h
@import Foundation;

#include "MRProtocolMessage.h"
#include "MRPlaybackSession.h"

@interface MRPlaybackSessionResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSession *playbackSession;

/* instance methods */
- (id)initWithPlaybackSession:(id)session;
- (unsigned long long)type;
@end

#endif /* MRPlaybackSessionResponseMessage_h */
