//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef ASDAppEvent_h
#define ASDAppEvent_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSNumber, NSString;

@interface ASDAppEvent : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *accountID;
@property (copy, nonatomic) NSString *appPlatform;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *cohort;
@property (copy, nonatomic) NSString *deviceVendorID;
@property (nonatomic) long long duration;
@property (nonatomic) long long foregroundUsage;
@property (copy, nonatomic) NSArray *foregroundUsageEvents;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) long long eventSubtype;
@property (copy, nonatomic) NSNumber *eventTime;
@property (nonatomic) long long eventType;
@property (copy, nonatomic) NSNumber *evid;
@property (nonatomic) BOOL hasBeenPosted;
@property (nonatomic) BOOL isBeta;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *shortVersion;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *storefront;
@property (copy, nonatomic) NSString *weekStartDate;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* ASDAppEvent_h */
