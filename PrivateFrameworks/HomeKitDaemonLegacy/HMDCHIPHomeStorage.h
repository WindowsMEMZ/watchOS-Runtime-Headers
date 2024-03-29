//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCHIPHomeStorage_h
#define HMDCHIPHomeStorage_h
@import Foundation;

#include "HMFObject.h"
#include "HMFLogging-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSDictionary, NSNumber, NSString;

@interface HMDCHIPHomeStorage : HMFObject<HMFLogging, NSCopying, NSSecureCoding>

@property (copy) NSNumber *fabricID;
@property (copy) NSNumber *lastNodeID;
@property (copy) NSData *rootCertificate;
@property (copy) NSData *operationalCertificate;
@property (copy) NSData *intermediateCertificate;
@property (copy) NSDictionary *keyValueStore;
@property (readonly, copy) NSDictionary *debugDictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

/* instance methods */
- (BOOL)updateUsingHomeModel:(id)model;
- (void)updateHomeModel:(id)model;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)logIdentifier;
- (id)attributeDescriptions;
@end

#endif /* HMDCHIPHomeStorage_h */
