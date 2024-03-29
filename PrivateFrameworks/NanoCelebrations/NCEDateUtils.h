//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 72.0.0.0.0
//
#ifndef NCEDateUtils_h
#define NCEDateUtils_h
@import Foundation;

@interface NCEDateUtils : NSObject
/* class methods */
+ (BOOL)isInternalDevice;
+ (id)_log;
+ (id)gregorianDateString:(id)string;
+ (BOOL)isLeapYear:(id)year;
+ (id)midnightDateWithDayIncrement:(long long)increment;
+ (BOOL)shouldSeeChineseNewYear;
+ (BOOL)isChineseNewYear:(id)year;
+ (BOOL)isGregorianNewYear:(id)year;
+ (id)birthdayString;
+ (BOOL)isBirthday:(id)birthday;
+ (id)birthdayDateComponents;
+ (id)_birthdayComponentsFromContacts;
+ (BOOL)isInternalGregroianNewYear:(id)year;
+ (BOOL)isInternalChineseNewYear:(id)year;
+ (BOOL)isInternalBirthday:(id)birthday;
+ (BOOL)isBirthdaySurvey:(id)survey;
+ (double)midnightDelay;
@end

#endif /* NCEDateUtils_h */
