//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSSingleCreditCardData_h
#define WBSSingleCreditCardData_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface WBSSingleCreditCardData : NSObject<NSSecureCoding>

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) long long type;
@property (nonatomic) BOOL isCardFromWallet;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithValue:(id)value type:(long long)type;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* WBSSingleCreditCardData_h */
