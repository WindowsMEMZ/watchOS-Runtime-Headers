//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPChangePlaybackRateCommandEvent_h
#define MPChangePlaybackRateCommandEvent_h
@import Foundation;

#include "MPRemoteCommandEvent.h"

@interface MPChangePlaybackRateCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) float playbackRate;

/* instance methods */
- (id)initWithCommand:(id)command mediaRemoteType:(unsigned int)type options:(id)options;
@end

#endif /* MPChangePlaybackRateCommandEvent_h */
