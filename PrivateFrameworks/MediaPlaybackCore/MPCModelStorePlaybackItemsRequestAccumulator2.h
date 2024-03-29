//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCModelStorePlaybackItemsRequestAccumulator2_h
#define MPCModelStorePlaybackItemsRequestAccumulator2_h
@import Foundation;

#include "MPCModelStorePlaybackItemsRequest.h"
#include "MPCModelStorePlaybackItemsRequestAccumulation.h"

@class ICURLAggregatedPerformanceMetrics, MPLibraryObjectDatabase, MPMutableSectionedCollection, MPPropertySet, MPServerObjectDatabase, NSDictionary, NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;

@interface MPCModelStorePlaybackItemsRequestAccumulator2 : NSObject {
  /* instance variables */
  MPCModelStorePlaybackItemsRequest *_request;
  MPServerObjectDatabase *_sod;
  MPLibraryObjectDatabase *_lod;
  NSString *_personID;
  MPPropertySet *_requestPropertySet;
  NSMutableArray *_importResults;
  BOOL _allowsExplicitContent;
  long long _defaultLibraryPersonalizationStyle;
  long long _unknownEndpointLibraryPersonalizationStyle;
  NSMutableOrderedSet *_pendingStoreIDs;
  NSMutableDictionary *_sectionIndexToCollectionItemMetadataRequestMap;
  NSMutableDictionary *_sectionIndexToCollectionItemAuthTokenRequestMap;
  NSMutableDictionary *_sectionIndexToTokenRenewalRequestMap;
  NSMutableDictionary *_storeIDToCollectionMetadataRequestMap;
  NSMutableArray *_pendingCollectionMetadataRequests;
  NSMutableArray *_pendingCollectionItemMetadataRequests;
  NSMutableArray *_pendingCollectionItemTokenRenewalRequests;
  NSMutableArray *_pendingCollectionItemAuthorizationTokenRequests;
  NSObject<MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> *_trustProvider;
  MPMutableSectionedCollection *_progressiveContentDescriptors;
  NSHashTable *_failedIdentifiers;
}

@property (readonly, copy, nonatomic) NSDictionary *equivalencyMapping;
@property (readonly, nonatomic) MPCModelStorePlaybackItemsRequestAccumulation *accumulatedResults;
@property (readonly, nonatomic) NSError *accumulationError;
@property (readonly, nonatomic) struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; BOOL x2; BOOL x3; } accumulatorResult;
@property (readonly, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (readonly, copy, nonatomic) NSDictionary *abc_stateDump;

/* instance methods */
- (id)initWithRequest:(id)request;
- (id)initWithRequest:(id)request serverObjectDatabase:(id)database;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })handleResponse:(id)response error:(id)error;
- (id)handleMediaAPIResponse:(id)apiresponse trustID:(id)id isFinalResponse:(BOOL)response;
- (id)newStoreItemMetadataRequest;
- (id)newMediaAPICollectionItemMetadataRequestInfo;
- (void)_addEquivalencyForMetadata:(id)metadata requestStoreIdentifier:(id)identifier;
- (id)_identifiersForTokens:(id)tokens;
- (void)_resolveContentDescriptorsUsingObjectDatabases;
- (void)_addPendingChildItem:(id)item identifiers:(id)identifiers atSectionIndex:(id)index collectionPlaybackAuthorizationToken:(id)token requestType:(long long)type;
- (id)_tokenFromLookupIdentifiers:(id)identifiers propertySet:(id)set indexPath:(id)path error:(id *)error;
- (id)_userIdentityWithRequest:(id)request;
- (BOOL)_isFatalError:(id)error;
@end

#endif /* MPCModelStorePlaybackItemsRequestAccumulator2_h */
