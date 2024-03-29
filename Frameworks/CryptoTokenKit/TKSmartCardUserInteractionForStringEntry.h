//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 685.60.2.0.0
//
#ifndef TKSmartCardUserInteractionForStringEntry_h
#define TKSmartCardUserInteractionForStringEntry_h
@import Foundation;

#include "TKSmartCardUserInteraction.h"
#include "NSSecureCoding-Protocol.h"
#include "TKSmartCardSlot.h"

@class NSString;

@interface TKSmartCardUserInteractionForStringEntry : TKSmartCardUserInteraction<NSSecureCoding>

@property (weak) TKSmartCardSlot *slot;
@property (retain) NSString *result;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)runWithReply:(id /* block */)reply;
@end

#endif /* TKSmartCardUserInteractionForStringEntry_h */
