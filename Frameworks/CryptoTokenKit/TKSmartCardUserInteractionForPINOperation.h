//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 685.60.2.0.0
//
#ifndef TKSmartCardUserInteractionForPINOperation_h
#define TKSmartCardUserInteractionForPINOperation_h
@import Foundation;

#include "TKSmartCardUserInteraction.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSLocale;

@interface TKSmartCardUserInteractionForPINOperation : TKSmartCardUserInteraction<NSSecureCoding>

@property unsigned long long PINCompletion;
@property (retain) NSArray *PINMessageIndices;
@property (retain) NSLocale *locale;
@property unsigned short resultSW;
@property (retain) NSData *resultData;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TKSmartCardUserInteractionForPINOperation_h */
