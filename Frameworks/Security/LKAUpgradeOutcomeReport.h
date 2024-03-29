//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef LKAUpgradeOutcomeReport_h
#define LKAUpgradeOutcomeReport_h
@import Foundation;

@class NSDictionary;

@interface LKAUpgradeOutcomeReport : NSObject

@property int outcome;
@property (retain) NSDictionary *attributes;

/* instance methods */
- (id)initWithOutcome:(int)outcome attributes:(id)attributes;
@end

#endif /* LKAUpgradeOutcomeReport_h */
