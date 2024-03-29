//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDialogAttribution_h
#define WFDialogAttribution_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "WFIcon.h"
#include "WFWorkflowIcon.h"

@class NSString;

@interface WFDialogAttribution : NSObject<NSCopying, NSSecureCoding>

@property (retain, nonatomic) WFWorkflowIcon *workflowIcon;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) WFIcon *icon;
@property (readonly, nonatomic) NSString *appBundleIdentifier;

/* class methods */
+ (id)attributionWithTitle:(id)title icon:(id)icon;
+ (id)attributionWithAppBundleIdentifier:(id)identifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTitle:(id)title icon:(id)icon;
- (id)initWithTitle:(id)title icon:(id)icon workflowIcon:(id)icon;
- (id)initWithTitle:(id)title icon:(id)icon workflowIcon:(id)icon appBundleIdentifier:(id)identifier;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFDialogAttribution_h */
