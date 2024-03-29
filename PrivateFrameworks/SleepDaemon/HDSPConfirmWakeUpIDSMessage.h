//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPConfirmWakeUpIDSMessage_h
#define HDSPConfirmWakeUpIDSMessage_h
@import Foundation;

#include "HDSPEventRecordMessage.h"

@class NSDate;

@interface HDSPConfirmWakeUpIDSMessage : HDSPEventRecordMessage

@property (readonly, nonatomic) NSDate *wakeUpConfirmedDate;
@property (readonly, nonatomic) NSDate *wakeUpConfirmedUntilDate;

/* instance methods */
- (id)initWithWakeUpConfirmedDate:(id)date wakeUpConfirmedUntilDate:(id)date;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)succinctDescriptionBuilder;
@end

#endif /* HDSPConfirmWakeUpIDSMessage_h */
