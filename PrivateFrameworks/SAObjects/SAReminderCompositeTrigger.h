//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAReminderCompositeTrigger_h
#define SAReminderCompositeTrigger_h
@import Foundation;

#include "SAReminderTrigger.h"
#include "SAReminderDateTimeTrigger.h"
#include "SAReminderLocationTrigger.h"

@interface SAReminderCompositeTrigger : SAReminderTrigger

@property (retain, nonatomic) SAReminderDateTimeTrigger *dateTimeTrigger;
@property (retain, nonatomic) SAReminderLocationTrigger *locationTrigger;

/* class methods */
+ (id)compositeTrigger;
+ (id)compositeTriggerWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAReminderCompositeTrigger_h */
