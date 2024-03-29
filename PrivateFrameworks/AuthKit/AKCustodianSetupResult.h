//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKCustodianSetupResult_h
#define AKCustodianSetupResult_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSString;

@interface AKCustodianSetupResult : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSData *encryptedPRKC;
@property (copy, nonatomic) NSString *ownerCustodianAltDSID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)debugDescription;
@end

#endif /* AKCustodianSetupResult_h */
