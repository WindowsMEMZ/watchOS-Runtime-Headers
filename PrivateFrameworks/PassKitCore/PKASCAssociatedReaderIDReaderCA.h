//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKASCAssociatedReaderIDReaderCA_h
#define PKASCAssociatedReaderIDReaderCA_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData;

@interface PKASCAssociatedReaderIDReaderCA : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSData *attestation;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)asDictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToASCAssociatedReaderIDReaderCA:(id)ca;
@end

#endif /* PKASCAssociatedReaderIDReaderCA_h */
