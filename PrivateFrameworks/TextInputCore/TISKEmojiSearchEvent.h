//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TISKEmojiSearchEvent_h
#define TISKEmojiSearchEvent_h
@import Foundation;

#include "TISKTimestampEvent.h"

@interface TISKEmojiSearchEvent : TISKTimestampEvent

@property (nonatomic) BOOL engaged;

/* instance methods */
- (id)init:(double)init engaged:(BOOL)engaged order:(long long)order;
- (void)reportToSession:(id)session;
- (id)description;
@end

#endif /* TISKEmojiSearchEvent_h */
