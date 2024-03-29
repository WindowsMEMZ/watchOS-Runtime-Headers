//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMCertificateStatusItem_h
#define RMCertificateStatusItem_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData;

@interface RMCertificateStatusItem : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSData *persistentRef;
@property (readonly, nonatomic) BOOL isIdentity;

/* class methods */
+ (id)certificateStatusItemWithPersistentRef:(id)ref isIdentity:(BOOL)identity;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithWithPersistentRef:(id)ref isIdentity:(BOOL)identity;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToCertificateStatus:(id)status;
@end

#endif /* RMCertificateStatusItem_h */
