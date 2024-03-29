//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFLocationTrigger_h
#define WFLocationTrigger_h
@import Foundation;

#include "WFTrigger.h"

@class CLCircularRegion, NSDate;

@interface WFLocationTrigger : WFTrigger

@property (copy, nonatomic) CLCircularRegion *region;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;

/* class methods */
+ (BOOL)isAllowedToRunAutomatically;
+ (BOOL)requiresNotification;
+ (id)timestampDateFormatter;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)configureWithConfiguration:(id)configuration;
- (BOOL)hasValidConfiguration;
- (BOOL)isDateWithinTimeRange:(id)range;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* WFLocationTrigger_h */
