//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraSignificantEventFaceClassification_h
#define HMDCameraSignificantEventFaceClassification_h
@import Foundation;

#include "HMFObject.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSString, NSUUID;

@interface HMDCameraSignificantEventFaceClassification : HMFObject<NSCopying, NSMutableCopying>

@property (copy) NSUUID *personUUID;
@property (copy) NSString *personName;
@property (copy) NSUUID *unassociatedFaceCropUUID;
@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSUUID *personManagerUUID;

/* instance methods */
- (id)initWithUUID:(id)uuid personManagerUUID:(id)uuid;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)attributeDescriptions;
@end

#endif /* HMDCameraSignificantEventFaceClassification_h */
