//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef NSDate_HMFoundation_h
#define NSDate_HMFoundation_h
@import Foundation;

@interface NSDate (HMFoundation) <HMFObject>
/* class methods */
+ (id)timeIntervalDescription:(double)description;
+ (id)shortDescription;

/* instance methods */
- (id)localTimeDescription;
- (id)dateComponents;
- (id)shortDescription;
- (id)privateDescription;
- (id)hmf_localTimeDescription;
- (id)hmf_dateComponents;
- (id)hmf_dateComponentsUsingTimeZone:(id)zone;
@end

#endif /* NSDate_HMFoundation_h */
