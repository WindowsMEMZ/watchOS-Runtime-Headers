//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUThumperCTCapabilitiesState_h
#define TUThumperCTCapabilitiesState_h
@import Foundation;

#include "TUCTCapabilitiesState.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TUPubliclyAccessibleCopying-Protocol.h"

@class NSSet, NSString;

@interface TUThumperCTCapabilitiesState : TUCTCapabilitiesState<NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>

@property (nonatomic) BOOL approved;
@property (copy, nonatomic) NSSet *approvedSecondaryDeviceIDs;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) BOOL associated;
@property (copy, nonatomic) NSString *localDeviceID;
@property (nonatomic) BOOL supportsDefaultPairedDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)unarchivedObjectClasses;

/* instance methods */
- (id)init;
- (id)initWithCapabilityInfo:(id)info;
- (BOOL)isEqualToCapabilitiesState:(id)state;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)publiclyAccessibleCopy;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)zone;
- (BOOL)isApproved;
- (BOOL)isAssociated;
@end

#endif /* TUThumperCTCapabilitiesState_h */
