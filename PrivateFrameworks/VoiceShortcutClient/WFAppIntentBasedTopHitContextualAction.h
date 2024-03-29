//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFAppIntentBasedTopHitContextualAction_h
#define WFAppIntentBasedTopHitContextualAction_h
@import Foundation;

#include "WFTopHitItemContextualAction.h"

@class LNAction, LNProperty, NSString;

@interface WFAppIntentBasedTopHitContextualAction : WFTopHitItemContextualAction

@property (readonly, nonatomic) LNAction *linkAction;
@property (readonly, nonatomic) LNProperty *parameterValue;
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) long long authenticationPolicy;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)uniqueIdentifier;
- (id)initWithAction:(id)action appBundleIdentifier:(id)identifier extensionBundleIdentifier:(id)identifier authenticationPolicy:(long long)policy associatedAppBundleIdentifier:(id)identifier parameterValue:(id)value displayFormatString:(id)string title:(id)title subtitleFormatString:(id)string primaryColor:(unsigned long long)color icon:(id)icon accessoryIcon:(id)icon namedQueryInfo:(id)info;
- (BOOL)showsUserInterfaceWhenRunning;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFAppIntentBasedTopHitContextualAction_h */
