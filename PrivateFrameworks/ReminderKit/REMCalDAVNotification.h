//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMCalDAVNotification_h
#define REMCalDAVNotification_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "REMDAChangeTrackableModel-Protocol.h"
#include "REMExternalSyncMetadataProviding-Protocol.h"
#include "REMExternalSyncMetadataWritableProviding-Protocol.h"
#include "REMObjectID.h"
#include "REMObjectIDProviding-Protocol.h"
#include "_REMDAChangeTrackableModel-Protocol.h"

@class NSString, NSURL;

@interface REMCalDAVNotification : NSObject<REMDAChangeTrackableModel, _REMDAChangeTrackableModel, REMExternalSyncMetadataWritableProviding, NSSecureCoding, NSCopying, REMObjectIDProviding, REMExternalSyncMetadataProviding>

@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSURL *hostURL;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *listID;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;
@property (readonly, nonatomic) REMObjectID *remObjectID;

/* class methods */
+ (BOOL)rem_DA_supportsFetching;
+ (BOOL)rem_DA_supportsConcealedObjects;
+ (id)rem_DA_propertiesAffectingIsConcealed;
+ (id /* block */)rem_DA_fetchByObjectIDBlock;
+ (id /* block */)rem_DA_fetchByObjectIDsBlock;
+ (id /* block */)rem_DA_deletedKeyFromTombstoneBlock;
+ (id /* block */)rem_DA_deletedKeyFromConcealedModelObjectBlock;
+ (BOOL)isChangeTrackableModel;
+ (BOOL)supportsSecureCoding;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)uuid;
+ (id)cdEntityName;

/* instance methods */
- (id)initCalDAVNotificationWithObjectID:(id)id accountID:(id)id listID:(id)id uuidString:(id)string hostURL:(id)url externalIdentifier:(id)identifier externalModificationTag:(id)tag;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)shouldUseExternalIdentifierAsDeletionKey;
@end

#endif /* REMCalDAVNotification_h */
