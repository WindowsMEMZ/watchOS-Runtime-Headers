//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountHistoricalBalance_h
#define PKAccountHistoricalBalance_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSDecimalNumber;

@interface PKAccountHistoricalBalance : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long type;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBalance:(id)balance date:(id)date;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* PKAccountHistoricalBalance_h */
