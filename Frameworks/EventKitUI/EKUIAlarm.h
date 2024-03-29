//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKUIAlarm_h
#define EKUIAlarm_h
@import Foundation;

@class EKAlarm;

@interface EKUIAlarm : NSObject

@property (readonly, nonatomic) BOOL isLeaveNowAlarm;
@property (readonly, nonatomic) BOOL isDefaultAlarm;
@property (readonly, nonatomic) EKAlarm *alarm;

/* instance methods */
- (id)initWithAlarm:(id)alarm;
- (id)initDefaultAlarm;
- (id)initLeaveNowAlarm;
- (id)description;
- (id)localizedDescriptionAllDay:(BOOL)day;
- (BOOL)isEqualToUIAlarm:(id)uialarm;
@end

#endif /* EKUIAlarm_h */
