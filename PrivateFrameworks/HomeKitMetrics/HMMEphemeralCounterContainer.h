//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMEphemeralCounterContainer_h
#define HMMEphemeralCounterContainer_h
@import Foundation;

@class NSDictionary, NSMutableDictionary;

@interface HMMEphemeralCounterContainer : NSObject

@property (nonatomic) BOOL active;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSDictionary *counters;

/* instance methods */
- (id)init;
- (void)incrementCounter:(id)counter by:(long long)by;
- (id)valueForCounter:(id)counter;
- (BOOL)isActive;
@end

#endif /* HMMEphemeralCounterContainer_h */
