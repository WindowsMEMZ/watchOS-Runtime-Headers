//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPCBPeripheralKeyAddressPair_h
#define SPCBPeripheralKeyAddressPair_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData;

@interface SPCBPeripheralKeyAddressPair : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSData *leMACAddress;
@property (readonly, copy, nonatomic) NSData *longTermKey;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithLEMACAddress:(id)lemacaddress longTermKey:(id)key;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* SPCBPeripheralKeyAddressPair_h */
