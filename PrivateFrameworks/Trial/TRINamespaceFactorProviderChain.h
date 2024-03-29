//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRINamespaceFactorProviderChain_h
#define TRINamespaceFactorProviderChain_h
@import Foundation;

#include "TRINamespaceFactorProviding-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface TRINamespaceFactorProviderChain : NSObject<TRINamespaceFactorProviding> {
  /* instance variables */
  NSString *_namespaceName;
  NSArray *_providerChain;
  NSObject<TRINamespaceFactorProviding> *_installedProvider;
  NSObject<TRINamespaceFactorProviding> *_rolloutProvider;
  NSObject<TRINamespaceFactorProviding> *_experimentProvider;
  NSObject<TRINamespaceFactorProviding> *_devOverrideProvider;
  NSObject<TRINamespaceFactorProviding> *_bmltProvider;
  NSDictionary *_aliasMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)factorProviderWithPaths:(id)paths namespaceName:(id)name;
+ (id)factorProviderWithPaths:(id)paths namespaceName:(id)name excludingTreatmentLayers:(unsigned long long)layers;
+ (id)factorProviderWithPaths:(id)paths namespaceName:(id)name resolver:(id)resolver;

/* instance methods */
- (id)initWithNamespaceName:(id)name typedProviderChain:(id)chain paths:(id)paths;
- (id)initWithNamespaceName:(id)name typedProviderChain:(id)chain paths:(id)paths excludingTreatmentLayers:(unsigned long long)layers;
- (id)namespaceName;
- (id)experimentId;
- (int)deploymentId;
- (id)treatmentId;
- (id)rolloutId;
- (id)providerForTreatmentLayer:(unsigned long long)layer;
- (unsigned int)namespaceCompatibilityVersion;
- (BOOL)isRegistered;
- (BOOL)hasAnyTreatmentInLayers:(unsigned long long)layers;
- (id)levelForFactor:(id)factor;
- (id)levelForFactor:(id)factor outProvider:(id *)provider;
- (void)cacheFactorLevels;
- (void)computeTreatmentAssetIndexes:(id *)indexes withAssociatedExperimentIds:(id *)ids andFactorPackAssetIds:(id *)ids withAssociatedRolloutDeployments:(id *)deployments withExperimentFactorNames:(id *)names andRolloutFactorNames:(id *)names forFactors:(id)factors usingFilter:(id /* block */)filter;
- (id)promotableFactorPackId;
- (id)_dealiasedFactorLevelForFactorLevel:(id)level unaliasedName:(id)name;
- (id)factorLevels;
- (id)factorNamesWithObfuscation:(id)obfuscation;
- (void)dispose;
- (unsigned int)namespaceId;
@end

#endif /* TRINamespaceFactorProviderChain_h */
