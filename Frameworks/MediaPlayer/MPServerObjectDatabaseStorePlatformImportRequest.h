//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPServerObjectDatabaseStorePlatformImportRequest_h
#define MPServerObjectDatabaseStorePlatformImportRequest_h
@import Foundation;

#include "MPServerObjectDatabaseMetadataImportRequest.h"

@interface MPServerObjectDatabaseStorePlatformImportRequest : MPServerObjectDatabaseMetadataImportRequest
/* class methods */
+ (id)_unsupportedParentChildRelationships;
+ (id)_unsupportedStorePlatformKinds;
+ (id)_childKeyForParentType:(id)type type:(id)type;
+ (id)_entityTypeForObject:(id)object;

/* instance methods */
- (id)initWithPayload:(id)payload;
- (id)performWithDatabaseOperations:(id)operations augmentingPayload:(id *)payload trustID:(id)id playActivityFeatureName:(id)name;
@end

#endif /* MPServerObjectDatabaseStorePlatformImportRequest_h */
