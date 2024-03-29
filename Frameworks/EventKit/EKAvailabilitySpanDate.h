//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKAvailabilitySpanDate_h
#define EKAvailabilitySpanDate_h
@import Foundation;

@class NSDate;

@interface EKAvailabilitySpanDate : NSObject

@property (retain, nonatomic) NSDate *spanDate;
@property long long dateType;
@property long long spanType;

/* class methods */
+ (unsigned int)valueForSpanType:(long long)type;

/* instance methods */
- (id)initWithDate:(id)date dateType:(long long)type spanType:(long long)type;
- (long long)compare:(id)compare;
- (id)description;
@end

#endif /* EKAvailabilitySpanDate_h */
