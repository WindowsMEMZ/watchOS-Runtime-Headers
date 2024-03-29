//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICUserCredentialRequest_h
#define ICUserCredentialRequest_h
@import Foundation;

#include "ICClientInfo.h"
#include "ICUserIdentity.h"
#include "ICUserIdentityStore.h"
#include "NSCopying-Protocol.h"

@interface ICUserCredentialRequest : NSObject<NSCopying>

@property (readonly, copy, nonatomic) ICUserIdentity *identity;
@property (readonly, nonatomic) ICUserIdentityStore *identityStore;
@property (readonly, copy, nonatomic) ICClientInfo *clientInfo;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) double timeoutInterval;

/* instance methods */
- (id)initWithIdentity:(id)identity identityStore:(id)store clientInfo:(id)info;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* ICUserCredentialRequest_h */
