//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUSenderIdentityCapabilitiesState_h
#define TUSenderIdentityCapabilitiesState_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TUCTCapabilitiesState.h"
#include "TUPubliclyAccessibleCopying-Protocol.h"
#include "TUThumperCTCapabilitiesState.h"

@class NSString, NSUUID;

@interface TUSenderIdentityCapabilitiesState : NSObject<NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>

@property (readonly, copy, nonatomic) NSUUID *senderIdentityUUID;
@property (nonatomic) BOOL supportsSimultaneousVoiceAndData;
@property (copy, nonatomic) TUCTCapabilitiesState *csCallingCapabilitiesState;
@property (copy, nonatomic) TUCTCapabilitiesState *voLTECallingCapabilitiesState;
@property (copy, nonatomic) TUCTCapabilitiesState *wiFiCallingCapabilitiesState;
@property (copy, nonatomic) TUThumperCTCapabilitiesState *thumperCallingCapabilitiesState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSenderIdentityUUID:(id)uuid;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)publiclyAccessibleCopy;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* TUSenderIdentityCapabilitiesState_h */
