//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFToggleFocusModeContextualAction_h
#define WFToggleFocusModeContextualAction_h
@import Foundation;

#include "WFContextualAction.h"
#include "WFContextualActionCalendarEventDescriptor.h"
#include "WFToggleFocusModeContextualActionFocusMode.h"

@interface WFToggleFocusModeContextualAction : WFContextualAction

@property (readonly, nonatomic) WFToggleFocusModeContextualActionFocusMode *focusMode;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) WFContextualActionCalendarEventDescriptor *eventDescriptor;

/* class methods */
+ (id)spotlightDomainIdentifier;
+ (BOOL)supportsSecureCoding;
+ (id)turnOn:(id)on;
+ (id)turnOn:(id)on untilEventEnds:(id)ends;
+ (id)turnOff:(id)off;
+ (id)toggle:(id)toggle;

/* instance methods */
- (id)initWithFocusMode:(id)mode operation:(unsigned long long)operation event:(id)event;
- (id)uniqueIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)settingBiomeStreamIdentifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFToggleFocusModeContextualAction_h */
