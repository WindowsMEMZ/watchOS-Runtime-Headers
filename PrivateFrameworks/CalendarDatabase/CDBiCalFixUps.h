//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1232.2.3.0.0
//
#ifndef CDBiCalFixUps_h
#define CDBiCalFixUps_h
@import Foundation;

@interface CDBiCalFixUps : NSObject
/* class methods */
+ (BOOL)fixEndDates:(id)dates;
+ (BOOL)_fixEndDateForEvent:(id)event withOriginalEvent:(id)event detachments:(id)detachments;
+ (double)_durationForEvent:(id)event;
@end

#endif /* CDBiCalFixUps_h */
