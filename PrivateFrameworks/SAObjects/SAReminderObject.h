//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAReminderObject_h
#define SAReminderObject_h
@import Foundation;

#include "SADomainObject.h"
#include "SAReminderListObject.h"
#include "SAReminderPayload-Protocol.h"
#include "SAReminderRecurrence.h"
#include "SAReminderTrigger.h"

@class NSArray, NSDate, NSString;

@interface SAReminderObject : SADomainObject

@property (copy, nonatomic) NSString *alternateSubject;
@property (nonatomic) BOOL completed;
@property (copy, nonatomic) NSDate *dueDate;
@property (copy, nonatomic) NSString *dueDateTimeZoneId;
@property (nonatomic) BOOL important;
@property (copy, nonatomic) NSArray *lists;
@property (retain, nonatomic) NSObject<SAReminderPayload> *payload;
@property (retain, nonatomic) SAReminderRecurrence *recurrence;
@property (copy, nonatomic) NSString *subject;
@property (retain, nonatomic) SAReminderListObject *toList;
@property (retain, nonatomic) SAReminderTrigger *trigger;

/* class methods */
+ (id)object;
+ (id)objectWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAReminderObject_h */
