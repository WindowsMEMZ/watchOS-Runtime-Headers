//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef FMInternalOwnerAccount_h
#define FMInternalOwnerAccount_h
@import Foundation;

#include "FMOwnerAccountIdentity-Protocol.h"

@class NSString;

@interface FMInternalOwnerAccount : NSObject<FMOwnerAccountIdentity>

@property (copy, nonatomic) NSString *personId;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)description;
@end

#endif /* FMInternalOwnerAccount_h */
