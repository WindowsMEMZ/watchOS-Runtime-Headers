//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLPushSessionUpdate_h
#define CPLPushSessionUpdate_h
@import Foundation;

#include "CPLChangeSessionUpdate.h"
#include "CPLChangeBatch.h"

@class NSArray, NSDictionary, NSSet;

@interface CPLPushSessionUpdate : CPLChangeSessionUpdate

@property (readonly, nonatomic) CPLChangeBatch *diffBatch;
@property (readonly, nonatomic) NSDictionary *pushContexts;
@property (readonly, nonatomic) NSArray *addedRecords;
@property (readonly, nonatomic) NSArray *updatedRecords;
@property (readonly, nonatomic) NSArray *deletedRecordScopedIdentifiers;
@property (readonly, nonatomic) NSSet *unquarantinedRecordScopedIdentifiers;
@property (readonly, nonatomic) NSDictionary *recordWithStatusChangesToNotify;
@property (readonly, nonatomic) NSArray *revertedChanges;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPushSessionTracker:(id)tracker error:(id *)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)applyToStore:(id)store error:(id *)error;
- (BOOL)discardFromStore:(id)store error:(id *)error;
- (id)storageForStatusInStore:(id)store;
- (id)statusDescription;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)identifier;
@end

#endif /* CPLPushSessionUpdate_h */
