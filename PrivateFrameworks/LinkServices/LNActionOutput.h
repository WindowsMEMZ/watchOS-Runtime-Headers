//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNActionOutput_h
#define LNActionOutput_h
@import Foundation;

#include "LNConfirmationActionName.h"
#include "LNViewSnippet.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class LNAction, LNDialog, LNValue, NSUUID;

@interface LNActionOutput : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) LNAction *showOutputAction;
@property (readonly, nonatomic) long long showOutputActionHint;
@property (readonly, nonatomic) LNDialog *dialog;
@property (readonly, nonatomic) LNViewSnippet *viewSnippet;
@property (readonly, nonatomic) LNValue *value;
@property (readonly, nonatomic) BOOL deferred;
@property (readonly, nonatomic) LNAction *nextAction;
@property (readonly, nonatomic) LNConfirmationActionName *confirmationActionName;
@property (readonly, nonatomic) BOOL showPrompt;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier dialog:(id)dialog viewSnippet:(id)snippet value:(id)value showOutputAction:(id)action deferred:(BOOL)deferred nextAction:(id)action confirmationActionName:(id)name;
- (id)initWithIdentifier:(id)identifier dialog:(id)dialog viewSnippet:(id)snippet value:(id)value showOutputAction:(id)action deferred:(BOOL)deferred nextAction:(id)action confirmationActionName:(id)name showPrompt:(BOOL)prompt;
- (id)initWithIdentifier:(id)identifier dialog:(id)dialog viewSnippet:(id)snippet value:(id)value showOutputAction:(id)action showOutputActionHint:(long long)hint deferred:(BOOL)deferred nextAction:(id)action confirmationActionName:(id)name showPrompt:(BOOL)prompt;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isDeferred;
- (BOOL)shouldShowPrompt;
@end

#endif /* LNActionOutput_h */
