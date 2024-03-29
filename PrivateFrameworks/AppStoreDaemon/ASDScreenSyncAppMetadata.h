//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef ASDScreenSyncAppMetadata_h
#define ASDScreenSyncAppMetadata_h
@import Foundation;

#include "ASDAppMetadata-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface ASDScreenSyncAppMetadata : NSObject<ASDAppMetadata, NSCopying, NSSecureCoding>

@property (copy) NSString *accountName;
@property (readonly) NSString *bundleID;
@property (copy) NSNumber *externalVersionIdentifier;
@property (copy) NSNumber *itemID;
@property (copy) NSString *itemName;
@property (copy) NSNumber *purchaserDSID;
@property (copy) NSNumber *storeFront;
@property (copy) NSString *vendorName;
@property (readonly) long long metadataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBundleID:(id)id;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* ASDScreenSyncAppMetadata_h */
