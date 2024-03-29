//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTDateFormatting_h
#define MTDateFormatting_h
@import Foundation;

@class NSDateFormatter, NSString;

@interface MTDateFormatting : NSObject {
  /* instance variables */
  NSDateFormatter *_dateOnlyFormatter;
  NSDateFormatter *_timeOnlyFormatter;
}

@property (readonly, weak, nonatomic) NSString *amString;
@property (readonly, weak, nonatomic) NSString *pmString;
@property (readonly, nonatomic) BOOL use24HourTime;
@property (readonly, nonatomic) BOOL timeDesignatorAppearsBeforeTime;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_clearLocaleDependentState;
- (void)_reloadLocaleInfo;
- (void)_loadLocaleInfo;
- (id)_dateOnlyFormatter;
- (id)_timeOnlyFormatter;
- (id)localizedTimeStringFromDate:(id)date timeDesignator:(out id *)designator;
- (id)localizedTimeStringFromDate:(id)date forTimeZone:(id)zone timeDesignator:(out id *)designator;
- (id)timeDesignatorForDate:(id)date;
- (id)timeDesignatorForDate:(id)date timeZone:(id)zone;
@end

#endif /* MTDateFormatting_h */
