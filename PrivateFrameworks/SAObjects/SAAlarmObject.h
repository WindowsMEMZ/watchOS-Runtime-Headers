//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAAlarmObject_h
#define SAAlarmObject_h
@import Foundation;

#include "SADomainObject.h"
#include "SADataSourceInfo.h"

@class NSArray, NSNumber, NSString;

@interface SAAlarmObject : SADomainObject

@property (retain, nonatomic) SADataSourceInfo *dataSourceInfo;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSNumber *firing;
@property (copy, nonatomic) NSArray *frequency;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *minute;
@property (copy, nonatomic) NSNumber *relativeOffsetMinutes;

/* class methods */
+ (id)object;
+ (id)objectWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAAlarmObject_h */
