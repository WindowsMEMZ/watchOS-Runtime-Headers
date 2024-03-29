//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPurgeableNamespacesProvider_h
#define TRIPurgeableNamespacesProvider_h
@import Foundation;

#include "TRIPurgeableNamespacesProviding-Protocol.h"

@class NSString;
@protocol TRIClientNamespaceMetadataStoring, TRIPaths;

@interface TRIPurgeableNamespacesProvider : NSObject<TRIPurgeableNamespacesProviding> {
  /* instance variables */
  NSObject<TRIPaths> *_paths;
  NSObject<TRIClientNamespaceMetadataStoring> *_clientNamespaceMetadataStorage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPaths:(id)paths clientNamespaceMetadataStorage:(id)storage;
- (void)partitionPurgeableNamespacesForPurgeabilityLevel:(int)level namespaceNamesPurgeableAtNamespaceLevel:(id *)level eagerPurgeableFactorsByNamespaceName:(id *)name cacheDeleteableFactorsByNamespaceName:(id *)name;
@end

#endif /* TRIPurgeableNamespacesProvider_h */
