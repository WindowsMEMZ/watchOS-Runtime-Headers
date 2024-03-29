//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef NSString_DNDModeAssertionLifetimeTypeHelper_h
#define NSString_DNDModeAssertionLifetimeTypeHelper_h
@import Foundation;

@interface NSString (DNDModeAssertionLifetimeTypeHelper)
/* class methods */
+ (id)dnds_stringForPredicateType:(unsigned long long)type;
+ (id)dnds_stringForInvalidationReasonOverride:(unsigned long long)override;
+ (id)dnds_stringForInvalidationReason:(unsigned long long)reason;
+ (id)dnds_stringForAssertionReason:(unsigned long long)reason;
+ (id)dnds_stringForScheduleLifetimeBehavior:(unsigned long long)behavior;
+ (id)dnds_stringForLifetimeType:(unsigned long long)type;

/* instance methods */
- (unsigned long long)dnds_predicateTypeValue;
- (unsigned long long)dnds_invalidationReasonOverrideValue;
- (unsigned long long)dnds_invalidationReasonValue;
- (unsigned long long)dnds_assertionReasonValue;
- (unsigned long long)dnds_scheduleLifetimeBehaviorValue;
- (unsigned long long)dnds_lifetimeTypeValue;
@end

#endif /* NSString_DNDModeAssertionLifetimeTypeHelper_h */
