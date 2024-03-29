//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMTimerTrigger_h
#define HMTimerTrigger_h
@import Foundation;

#include "HMTrigger.h"
#include "HMTimerTriggerConfiguration-Protocol.h"
#include "HMTriggerPolicy.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSCalendar, NSDate, NSDateComponents, NSString, NSTimeZone;

@interface HMTimerTrigger : HMTrigger<HMTimerTriggerConfiguration, NSSecureCoding>

@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSDateComponents *recurrence;
@property (readonly, copy, nonatomic) NSString *significantEvent;
@property (readonly, copy, nonatomic) NSDateComponents *significantEventOffset;
@property (readonly, copy, nonatomic) NSArray *recurrences;
@property (readonly, copy, nonatomic) NSCalendar *recurrenceCalendar;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, copy, nonatomic) NSArray *actionSets;
@property (readonly, copy, nonatomic) NSString *configuredName;
@property (readonly, nonatomic) HMTriggerPolicy *policy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithName:(id)name fireDate:(id)date recurrence:(id)recurrence;
- (id)initWithName:(id)name fireDate:(id)date timeZone:(id)zone recurrence:(id)recurrence recurrenceCalendar:(id)calendar;
- (id)initWithName:(id)name fireDate:(id)date timeZone:(id)zone recurrence:(id)recurrence;
- (id)initWithName:(id)name fireDate:(id)date timeZone:(id)zone recurrences:(id)recurrences;
- (id)initWithName:(id)name significantEvent:(id)event significantEventOffset:(id)offset recurrences:(id)recurrences;
- (id)initWithDictionary:(id)dictionary home:(id)home;
- (void)updateFireDate:(id)date completionHandler:(id /* block */)handler;
- (void)_updateFireDate:(id)date completionHandler:(id /* block */)handler;
- (void)updateTimeZone:(id)zone completionHandler:(id /* block */)handler;
- (void)_updateTimeZone:(id)zone completionHandler:(id /* block */)handler;
- (void)updateSignificantEvent:(id)event completionHandler:(id /* block */)handler;
- (void)_updateSignificantEvent:(id)event completionHandler:(id /* block */)handler;
- (void)updateSignificantEventOffset:(id)offset completionHandler:(id /* block */)handler;
- (void)_updateSignificantEventOffset:(id)offset completionHandler:(id /* block */)handler;
- (void)updateRecurrence:(id)recurrence completionHandler:(id /* block */)handler;
- (void)_updateRecurrence:(id)recurrence completionHandler:(id /* block */)handler;
- (void)updateRecurrences:(id)recurrences completionHandler:(id /* block */)handler;
- (void)_updateRecurrences:(id)recurrences completionHandler:(id /* block */)handler;
- (void)_updateTimerTriggerWithResponse:(id /* block */)response payloadToSend:(id)send;
- (id)_serializeForAdd;
- (void)_updateTimerTriggerPropertiesFromResponse:(id)response;
- (void)_handleTriggerFired:(id)fired;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)mergeFromNewObject:(id)object;
@end

#endif /* HMTimerTrigger_h */
