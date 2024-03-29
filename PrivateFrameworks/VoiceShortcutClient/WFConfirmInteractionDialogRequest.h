//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFConfirmInteractionDialogRequest_h
#define WFConfirmInteractionDialogRequest_h
@import Foundation;

#include "WFDialogRequest.h"
#include "NSSecureCoding-Protocol.h"
#include "WFDialogButton.h"

@class INInteraction;

@interface WFConfirmInteractionDialogRequest : WFDialogRequest<NSSecureCoding>

@property (readonly, copy, nonatomic) INInteraction *interaction;
@property (readonly, copy, nonatomic) WFDialogButton *confirmButton;
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithInteraction:(id)interaction prompt:(id)prompt;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFConfirmInteractionDialogRequest_h */
