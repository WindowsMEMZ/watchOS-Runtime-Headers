//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKMatchEvent_h
#define GKMatchEvent_h
@import Foundation;

#include "GKPlayer.h"

@class NSData;

@interface GKMatchEvent : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) GKPlayer *recipientPlayer;

/* instance methods */
@end

#endif /* GKMatchEvent_h */
