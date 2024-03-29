//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLEngineOutgoingResources_h
#define CPLEngineOutgoingResources_h
@import Foundation;

#include "CPLEngineStorage.h"
#include "CPLAbstractObject-Protocol.h"
#include "CPLPlatformObject.h"

@class NSString;

@interface CPLEngineOutgoingResources : CPLEngineStorage<CPLAbstractObject>

@property (readonly, nonatomic) unsigned long long countOfOriginalImages;
@property (readonly, nonatomic) unsigned long long countOfOriginalVideos;
@property (readonly, nonatomic) unsigned long long countOfOriginalOthers;
@property (readonly, nonatomic) unsigned long long sizeOfResourcesToUpload;
@property (readonly, nonatomic) unsigned long long sizeOfOriginalResourcesToUpload;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (unsigned long long)scopeType;
- (BOOL)deleteRecordsForScopeIndex:(long long)index maxCount:(long long)count deletedCount:(long long *)count error:(id *)error;
- (BOOL)storeResourcesToUpload:(id)upload withUploadIdentifier:(id)identifier shouldCheckResources:(BOOL)resources error:(id *)error;
- (BOOL)deleteResourcesToUploadWithUploadIdentifier:(id)identifier error:(id *)error;
- (id)resourceTypesToUploadForChange:(id)change;
- (unsigned long long)availableResourceSizeForUploadIdentifier:(id)identifier;
- (BOOL)shouldUploadResource:(id)resource;
- (BOOL)openWithError:(id *)error;
@end

#endif /* CPLEngineOutgoingResources_h */
