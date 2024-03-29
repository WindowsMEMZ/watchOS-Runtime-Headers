//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.300.2.0.0
//
#ifndef HSConnectionConfiguration_h
#define HSConnectionConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class ICUserIdentity, ICUserIdentityStore, NSNumber, NSString, NSURL;

@interface HSConnectionConfiguration : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (readonly, nonatomic) ICUserIdentityStore *userIdentityStore;
@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *libraryBagKey;
@property (copy, nonatomic) NSString *buildIdentifier;
@property (copy, nonatomic) NSString *purchaseClientIdentifier;
@property (nonatomic) long long requestReason;
@property (copy, nonatomic) NSNumber *familyMemberStoreID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HSConnectionConfiguration_h */
