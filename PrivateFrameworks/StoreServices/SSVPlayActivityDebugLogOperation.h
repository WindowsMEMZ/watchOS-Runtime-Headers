//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVPlayActivityDebugLogOperation_h
#define SSVPlayActivityDebugLogOperation_h
@import Foundation;

#include "NSOperation.h"

@class NSArray;

@interface SSVPlayActivityDebugLogOperation : NSOperation

@property (copy, nonatomic) NSArray *playActivityEvents;

/* instance methods */
- (void)main;
@end

#endif /* SSVPlayActivityDebugLogOperation_h */
