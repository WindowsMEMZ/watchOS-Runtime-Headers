//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLSharedRemapFixUpTask_h
#define CPLSharedRemapFixUpTask_h
@import Foundation;

#include "CPLScopedIdentifier.h"

@interface CPLSharedRemapFixUpTask : NSObject

@property (readonly, nonatomic) CPLScopedIdentifier *sharedCloudScopedIdentifier;
@property (readonly, nonatomic) CPLScopedIdentifier *realCloudScopedIdentifier;
@property (readonly, nonatomic) CPLScopedIdentifier *privateCloudScopedIdentifier;
@property (readonly, nonatomic) CPLScopedIdentifier *proposedPrivateScopedIdentifier;
@property (readonly, nonatomic) Class recordClass;

/* instance methods */
- (id)initWithSharedCloudScopedIdentifier:(id)identifier realCloudScopedIdentifier:(id)identifier privateCloudScopedIdentifier:(id)identifier proposedPrivateScopedIdentifier:(id)identifier recordClass:(Class)class;
- (id)description;
- (id)redactedDescription;
@end

#endif /* CPLSharedRemapFixUpTask_h */
