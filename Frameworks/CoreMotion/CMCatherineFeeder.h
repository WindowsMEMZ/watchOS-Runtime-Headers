//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMCatherineFeeder_h
#define CMCatherineFeeder_h
@import Foundation;

#include "CMCatherineFeederInternal.h"

@interface CMCatherineFeeder : NSObject

@property (readonly, nonatomic) CMCatherineFeederInternal *internal;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)feedCatherine:(double)catherine confidence:(double)confidence;
@end

#endif /* CMCatherineFeeder_h */
