//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBModelCloudReference_h
#define HMBModelCloudReference_h
@import Foundation;

#include "HMBModelReference.h"
#include "HMBCloudZone.h"
#include "HMBModelNativeCKWrapper-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class CKReference, NSString;

@interface HMBModelCloudReference : HMBModelReference<HMBModelNativeCKWrapper, NSSecureCoding>

@property (weak, nonatomic) HMBCloudZone *cloudZone;
@property (nonatomic) unsigned long long action;
@property (retain, nonatomic) CKReference *reference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (BOOL)includeInModelEncoding;
+ (void)applyNativeCKValue:(id)ckvalue fromSource:(unsigned long long)source associatingWith:(id)with toModel:(id)model propertyNamed:(id)named;
+ (id)hmbDecodeData:(id)data fromStorageLocation:(unsigned long long)location error:(id *)error;

/* instance methods */
- (id)initWithModelID:(id)id action:(unsigned long long)action;
- (void)associateWithContainer:(id)container;
- (id)referencedModelFromCloudZone:(id)zone allowExternalFetch:(BOOL)fetch;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)attributeDescriptions;
- (id)nativeCKValueWithEncodingContext:(id)context error:(id *)error;
- (id)hmbEncodeForStorageLocation:(unsigned long long)location error:(id *)error;
@end

#endif /* HMBModelCloudReference_h */
