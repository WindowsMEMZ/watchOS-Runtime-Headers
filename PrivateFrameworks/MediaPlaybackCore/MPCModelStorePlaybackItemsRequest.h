//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCModelStorePlaybackItemsRequest_h
#define MPCModelStorePlaybackItemsRequest_h
@import Foundation;

#include "MPModelRequest.h"
#include "MPCModelPlaybackRequest-Protocol.h"
#include "MPCModelPlaybackRequestEnvironmentConsuming-Protocol.h"
#include "MPCModelRequestRTCReporting-Protocol.h"
#include "MPCModelStorePreviousRequestStoring-Protocol.h"
#include "MPCPlaybackRequestEnvironment.h"

@class MPIdentifierSet, MPModelResponse, MPSectionedCollection, NSArray, NSDictionary, NSString, NSUUID;
@protocol MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest<MPCModelPlaybackRequest, MPCModelPlaybackRequestEnvironmentConsuming, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring> {
  /* instance variables */
  NSUUID *_storeIDsAnonymousGroupUUID;
}

@property (nonatomic) BOOL useUniversalAccumulator;
@property (copy, nonatomic) NSArray *playbackPrioritizedIndexPaths;
@property (copy, nonatomic) NSString *abc_siriAssetInfo;
@property (retain, nonatomic) MPIdentifierSet *abc_preferredShuffleStartIdentifiers;
@property (retain, nonatomic) MPModelResponse *previousResponse;
@property (nonatomic) BOOL shouldBatchResultsWithPlaceholderObjects;
@property (nonatomic) BOOL allowLocalEquivalencies;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) MPSectionedCollection *sectionedModelObjects;
@property (copy, nonatomic) NSArray *storeIDs;
@property (copy, nonatomic) MPSectionedCollection *identifiers;
@property (readonly, nonatomic) BOOL valid;
@property (copy, nonatomic) NSDictionary *storeIDsToPlaybackAuthorizationTokensMap;
@property (copy, nonatomic) NSObject<MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> *trustProvider;
@property (nonatomic) BOOL inGroupSession;
@property (nonatomic) BOOL disableImplicitSectioning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;

/* class methods */
+ (void)MPC_consumeSiriAssetInfo:(id)info playActivityFeatureName:(id)name userIdentity:(id)identity completion:(id /* block */)completion;
+ (BOOL)requiresNetwork;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)newOperationWithResponseHandler:(id /* block */)handler;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isValid;
- (BOOL)isInGroupSession;
@end

#endif /* MPCModelStorePlaybackItemsRequest_h */
