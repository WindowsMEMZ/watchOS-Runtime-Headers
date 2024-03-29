//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFClockAlarm_h
#define AFClockAlarm_h
@import Foundation;

#include "AFClockItem-Protocol.h"
#include "AFDictionaryConvertible-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString, NSURL, NSUUID;

@interface AFClockAlarm : NSObject<AFClockItem, NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (readonly, nonatomic) NSUUID *itemID;
@property (readonly, nonatomic) NSURL *itemURL;
@property (readonly, nonatomic) BOOL isFiring;
@property (readonly, copy, nonatomic) NSDate *firedDate;
@property (readonly, copy, nonatomic) NSDate *dismissedDate;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSUUID *alarmID;
@property (readonly, copy, nonatomic) NSURL *alarmURL;
@property (readonly, nonatomic) BOOL isFiring;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long hour;
@property (readonly, nonatomic) unsigned long long minute;
@property (readonly, nonatomic) unsigned long long repeatOptions;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isSnoozed;
@property (readonly, copy, nonatomic) NSDate *firedDate;
@property (readonly, copy, nonatomic) NSDate *dismissedDate;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithBuilder:(id /* block */)builder;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)mutatedCopyWithMutator:(id /* block */)mutator;
- (id)initWithBuilder:(id /* block */)builder;
- (id)init;
- (id)initWithAlarmID:(id)id alarmURL:(id)url isFiring:(BOOL)firing title:(id)title type:(unsigned long long)type hour:(unsigned long long)hour minute:(unsigned long long)minute repeatOptions:(unsigned long long)options isEnabled:(BOOL)enabled isSnoozed:(BOOL)snoozed firedDate:(id)date dismissedDate:(id)date lastModifiedDate:(id)date;
- (id)_descriptionWithIndent:(unsigned long long)indent;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)buildDictionaryRepresentation;
@end

#endif /* AFClockAlarm_h */
