//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4416.36.0.0.0
//
#ifndef SBSMutableUserNotificationTextFieldDefinition_h
#define SBSMutableUserNotificationTextFieldDefinition_h
@import Foundation;

#include "SBSUserNotificationTextFieldDefinition.h"

@class NSString;

@interface SBSMutableUserNotificationTextFieldDefinition : SBSUserNotificationTextFieldDefinition

@property (copy, @dynamic, nonatomic) NSString *title;
@property (copy, @dynamic, nonatomic) NSString *value;
@property (@dynamic, nonatomic) BOOL secure;
@property (@dynamic, nonatomic) unsigned long long maxLength;
@property (@dynamic, nonatomic) long long keyboardType;
@property (@dynamic, nonatomic) long long autocapitalizationType;
@property (@dynamic, nonatomic) long long autocorrectionType;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SBSMutableUserNotificationTextFieldDefinition_h */
