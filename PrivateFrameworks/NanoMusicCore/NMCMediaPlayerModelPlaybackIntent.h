//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMCMediaPlayerModelPlaybackIntent_h
#define NMCMediaPlayerModelPlaybackIntent_h
@import Foundation;

#include "NMCPlayerPlaybackIntent-Protocol.h"

@class NSString;

@interface NMCMediaPlayerModelPlaybackIntent : NSObject<NMCPlayerPlaybackIntent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)mediaPlaybackCorePlaybackIntent;
- (id)playbackIntentRepresentation;
@end

#endif /* NMCMediaPlayerModelPlaybackIntent_h */
