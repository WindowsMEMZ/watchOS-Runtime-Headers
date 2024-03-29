//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1232.2.3.0.0
//
#ifndef CalEventOccurrenceCacheRange_h
#define CalEventOccurrenceCacheRange_h
@import Foundation;

@class NSDate, NSTimeZone;

@interface CalEventOccurrenceCacheRange : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSTimeZone *timeZone;

/* instance methods */
- (id)initWithStartDate:(id)date endDate:(id)date timeZone:(id)zone;
@end

#endif /* CalEventOccurrenceCacheRange_h */
