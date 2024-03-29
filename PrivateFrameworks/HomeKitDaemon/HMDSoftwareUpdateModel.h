//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDSoftwareUpdateModel_h
#define HMDSoftwareUpdateModel_h
@import Foundation;

#include "HMDBackingStoreModelObject.h"
#include "HMDBackingStoreModelObjectCDRepresentable-Protocol.h"

@class HMFSoftwareVersion, HMSoftwareUpdateDocumentationMetadata, NSDate, NSNumber, NSString;

@interface HMDSoftwareUpdateModel : HMDBackingStoreModelObject<HMDBackingStoreModelObjectCDRepresentable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, @dynamic, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (copy, @dynamic, nonatomic) NSNumber *state;
@property (copy, @dynamic, nonatomic) NSNumber *downloadSize;
@property (copy, @dynamic, nonatomic) NSNumber *installDuration;
@property (copy, @dynamic, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (copy, nonatomic) NSDate *releaseDate;

/* class methods */
+ (id)cd_parentReferenceName;
+ (Class)cd_entityClass;
+ (id)properties;

/* instance methods */
- (id)cd_fetchManagedObjectWithError:(id *)error;
@end

#endif /* HMDSoftwareUpdateModel_h */
