//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKMultiValueMergeableDeltaRegisterState_h
#define CKMultiValueMergeableDeltaRegisterState_h
@import Foundation;

#include "CKDistributedTimestampStateVector.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSUUID;

@interface CKMultiValueMergeableDeltaRegisterState : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) CKDistributedTimestampStateVector *vector;
@property (readonly, nonatomic) NSData *salt;

/* class methods */
+ (id)newSalt;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier vector:(id)vector salt:(id)salt;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* CKMultiValueMergeableDeltaRegisterState_h */
