//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef _NSSwiftTimeZone_h
#define _NSSwiftTimeZone_h
@import Foundation;

#include "_NSTimeZoneBridge.h"
#include "NSString.h"

@class NSData, NSDate;

@interface _NSSwiftTimeZone : _NSTimeZoneBridge { // (Swift)
  /* instance variables */
   timeZone;
}

@property (nonatomic, readonly) Class classForCoder;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long secondsFromGMT;
@property (nonatomic, readonly) NSString *abbreviation;
@property (nonatomic, readonly) BOOL daylightSavingTime;
@property (nonatomic, readonly) double daylightSavingTimeOffset;
@property (nonatomic, readonly) NSDate *nextDaylightSavingTimeTransition;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)replacementObjectForKeyedArchiver:(id)archiver;
- (void)encodeWithCoder:(id)coder;
- (long long)secondsFromGMTForDate:(id)date;
- (id)abbreviationForDate:(id)date;
- (BOOL)isDaylightSavingTimeForDate:(id)date;
- (double)daylightSavingTimeOffsetForDate:(id)date;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;
- (BOOL)isDaylightSavingTime;
- (id)localizedName:(long long)name locale:(id)locale;
- (id)init;
- (id)initWithName:(id)name;
- (id)initWithName:(id)name data:(id)data;
@end

#endif /* _NSSwiftTimeZone_h */
