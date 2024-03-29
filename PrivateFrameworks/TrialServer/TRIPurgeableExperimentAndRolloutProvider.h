//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPurgeableExperimentAndRolloutProvider_h
#define TRIPurgeableExperimentAndRolloutProvider_h
@import Foundation;

#include "TRIExperimentDatabase.h"
#include "TRIPurgeableExperimentAndRolloutProviding-Protocol.h"
#include "TRIRolloutDatabase.h"

@class NSString;
@protocol TRIPaths;

@interface TRIPurgeableExperimentAndRolloutProvider : NSObject<TRIPurgeableExperimentAndRolloutProviding> {
  /* instance variables */
  NSObject<TRIPaths> *_paths;
  TRIExperimentDatabase *_experimentDatabase;
  TRIRolloutDatabase *_rolloutDatabase;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPaths:(id)paths experimentDatabase:(id)database rolloutDatabase:(id)database;
- (id)purgeableExperimentsFromNamespaces:(id)namespaces eagerFactors:(id)factors overriddenFactors:(id)factors;
- (id)purgeableExperimentAssetsFromNamespaces:(id)namespaces eagerFactors:(id)factors overriddenFactors:(id)factors;
- (id)purgeableRolloutsFromNamespaces:(id)namespaces eagerFactors:(id)factors overriddenFactors:(id)factors;
- (id)purgeableRolloutAssetsFromNamespaces:(id)namespaces eagerFactors:(id)factors overriddenFactors:(id)factors;
- (void)_purgeablesForExperimentsFromNamespaces:(id)namespaces eagerFactors:(id)factors overriddenFactors:(id)factors shouldGenerateAssetPaths:(BOOL)paths purgeableExperiments:(id *)experiments purgeableAssets:(id *)assets;
- (void)_purgeablesForRolloutsFromNamespaces:(id)namespaces eagerFactors:(id)factors overriddenFactors:(id)factors shouldGenerateAssetPaths:(BOOL)paths purgeableExperiments:(id *)experiments purgeableAssets:(id *)assets;
@end

#endif /* TRIPurgeableExperimentAndRolloutProvider_h */
