//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKRemoteFeatureAvailabilityRule_Protocol_h
#define HKRemoteFeatureAvailabilityRule_Protocol_h
@import Foundation;

@protocol HKRemoteFeatureAvailabilityRule <NSObject>
/* class methods */
+ (id)ruleIdentifier;
/* instance methods */
- (id)initWithRawValue:(id)value dataSource:(id)source;
- (BOOL)evaluate;
@end

#endif /* HKRemoteFeatureAvailabilityRule_Protocol_h */
