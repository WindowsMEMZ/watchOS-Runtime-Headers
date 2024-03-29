//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBBulletinUpdateTransaction_h
#define BBBulletinUpdateTransaction_h
@import Foundation;

#include "BBBulletinUpdate.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface BBBulletinUpdateTransaction : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) BBBulletinUpdate *bulletinUpdate;
@property (readonly, nonatomic) unsigned long long transactionID;

/* class methods */
+ (id)transactionWithBulletinUpdate:(id)update transactionID:(unsigned long long)id;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithBulletinUpdate:(id)update transactionID:(unsigned long long)id;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* BBBulletinUpdateTransaction_h */
