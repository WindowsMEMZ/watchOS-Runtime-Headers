//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TISKTimestampEvent_h
#define TISKTimestampEvent_h
@import Foundation;

#include "TISKEvent.h"

@interface TISKTimestampEvent : TISKEvent

@property (nonatomic) double timestamp;

/* instance methods */
- (id)init:(int)init timestamp:(double)timestamp emojiSearchMode:(BOOL)mode order:(long long)order;
- (BOOL)isMissingATouch;
- (double)touchDownTimestamp;
- (double)touchUpTimestamp;
@end

#endif /* TISKTimestampEvent_h */
