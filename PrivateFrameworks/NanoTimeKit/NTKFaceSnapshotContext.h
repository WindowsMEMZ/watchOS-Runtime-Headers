//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceSnapshotContext_h
#define NTKFaceSnapshotContext_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class CLLocation, NSCalendar, NSDate, NSNumber, NSString;

@interface NTKFaceSnapshotContext : NSObject<NSSecureCoding>

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSCalendar *calendar;
@property (copy, nonatomic) NSString *monogram;
@property (copy, nonatomic) NSString *locale;
@property (retain, nonatomic) NSNumber *uses24hTime;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *tzVersion;
@property (retain, nonatomic) NSNumber *enhanceTextLegibilityEnabled;
@property (copy, nonatomic) NSString *lunarCalendarLocaleID;

/* class methods */
+ (id)currentContext;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)calendarDateMatchesContext:(id)context;
- (BOOL)timeZoneMatchesContext:(id)context;
- (BOOL)localeMatchesContext:(id)context;
- (BOOL)buildVersionMatchesContext:(id)context;
- (BOOL)enhanceTextLegibilityEnabledMatchesContext:(id)context;
- (double)distanceInKilometersFromContext:(id)context;
- (BOOL)locationSignificantlyDiffersFromContext:(id)context;
- (BOOL)lunarCalendarLocaleIDMatchesContext:(id)context;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)_yearMonthDay;
@end

#endif /* NTKFaceSnapshotContext_h */
