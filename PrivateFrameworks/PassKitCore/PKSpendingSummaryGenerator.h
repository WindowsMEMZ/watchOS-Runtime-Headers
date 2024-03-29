//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSpendingSummaryGenerator_h
#define PKSpendingSummaryGenerator_h
@import Foundation;

@interface PKSpendingSummaryGenerator : NSObject
/* class methods */
+ (id)generateSummaryOfType:(unsigned long long)type startingAt:(id)at withSegmentLimit:(unsigned long long)limit;
+ (id)generateSummaryOfType:(unsigned long long)type startingAt:(id)at withSegmentLimit:(unsigned long long)limit generateBeyondCurrentDay:(BOOL)day;
@end

#endif /* PKSpendingSummaryGenerator_h */
