//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNSnoozeCategory_h
#define CALNSnoozeCategory_h
@import Foundation;

@class NSArray, NSString;

@interface CALNSnoozeCategory : NSObject {
  /* instance variables */
  double _timedExpirationInterval;
  BOOL _relativeToEnd;
  BOOL _validForAllDay;
}

@property (readonly, nonatomic) NSString *suffix;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) double leeway;

/* class methods */
+ (id)snoozeCategoryForEventWithStartDate:(id)date endDate:(id)date now:(id)now isAllDay:(BOOL)day;
+ (id)snoozeCategories;

/* instance methods */
- (id)initWithSuffix:(id)suffix timedExpirationInterval:(double)interval leeway:(double)leeway relativeToEnd:(BOOL)end validForAllDay:(BOOL)day actions:(id)actions;
- (id)expirationDateForEventWithStartDate:(id)date endDate:(id)date isAllDay:(BOOL)day;
@end

#endif /* CALNSnoozeCategory_h */
