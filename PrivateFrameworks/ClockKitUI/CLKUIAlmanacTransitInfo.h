//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKUIAlmanacTransitInfo_h
#define CLKUIAlmanacTransitInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate;

@interface CLKUIAlmanacTransitInfo : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSDate *day;
@property (retain, nonatomic) NSDate *tomorrow;
@property (nonatomic) struct { double x0; double x1; } location;
@property (nonatomic) long long constantSun;
@property (retain, nonatomic) NSDate *rise;
@property (retain, nonatomic) NSDate *solarNoon;
@property (retain, nonatomic) NSDate *set;
@property (retain, nonatomic) NSDate *solarMidnight;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)transitInfoForDate:(id)date;
+ (id)transitInfoForDate:(id)date location:(struct { double x0; double x1; })location;
+ (id)transitInfoForDate:(id)date city:(id)city;
+ (id)transitInfoForDate:(id)date location:(struct { double x0; double x1; })location sunAltitude:(double)altitude;
+ (id)transitInfoForDate:(id)date city:(id)city sunAltitude:(double)altitude;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithDate:(id)date;
- (id)initWithDate:(id)date location:(struct { double x0; double x1; })location;
- (id)initWithDate:(id)date city:(id)city;
- (id)initWithDate:(id)date location:(struct { double x0; double x1; })location sunAltitude:(double)altitude;
- (id)_dateOrNil:(double)nil;
- (id)initWithDate:(id)date city:(id)city sunAltitude:(double)altitude;
- (id)description;
- (BOOL)isDateWithinTransitInfo:(id)info;
@end

#endif /* CLKUIAlmanacTransitInfo_h */
