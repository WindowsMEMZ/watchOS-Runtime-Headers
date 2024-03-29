//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPRankableSocialHighlight_h
#define PPRankableSocialHighlight_h
@import Foundation;

#include "PBCodable.h"
#include "BMStoreData-Protocol.h"
#include "MLFeatureProvider-Protocol.h"
#include "NSCopying-Protocol.h"
#include "PPSocialHighlightContact.h"

@class NSData, NSMutableArray, NSSet, NSString;

@interface PPRankableSocialHighlight : PBCodable<MLFeatureProvider, BMStoreData, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 contentCreationSecondsSinceReferenceDate; unsigned int x :1 firstPassScore; unsigned int x :1 rankingSecondsSinceReferenceDate; unsigned int x :1 score; unsigned int x :1 syndicationSecondsSinceReferenceDate; unsigned int x :1 topKScore; unsigned int x :1 highlightType; unsigned int x :1 rank; unsigned int x :1 fromMeEntitlementOverrideIsPresent; unsigned int x :1 isCollaboration; unsigned int x :1 isConversationAutoDonating; unsigned int x :1 isPrimary; unsigned int x :1 isTopKResult; } _has;
}

@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasHighlightIdentifier;
@property (retain, nonatomic) NSString *highlightIdentifier;
@property (nonatomic) BOOL hasHighlightType;
@property (nonatomic) int highlightType;
@property (nonatomic) BOOL hasSyndicationSecondsSinceReferenceDate;
@property (nonatomic) double syndicationSecondsSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasSourceBundleId;
@property (retain, nonatomic) NSString *sourceBundleId;
@property (retain, nonatomic) NSMutableArray *applicationIdentifiers;
@property (readonly, nonatomic) BOOL hasResourceUrl;
@property (retain, nonatomic) NSString *resourceUrl;
@property (readonly, nonatomic) BOOL hasSender;
@property (retain, nonatomic) PPSocialHighlightContact *sender;
@property (readonly, nonatomic) BOOL hasDomainIdentifier;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) BOOL hasBatchIdentifier;
@property (retain, nonatomic) NSString *batchIdentifier;
@property (retain, nonatomic) NSMutableArray *calculatedFeatures;
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) BOOL hasContentCreationSecondsSinceReferenceDate;
@property (nonatomic) double contentCreationSecondsSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasGroupPhotoPathDigest;
@property (retain, nonatomic) NSString *groupPhotoPathDigest;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL hasIsPrimary;
@property (nonatomic) BOOL isPrimary;
@property (readonly, nonatomic) BOOL hasAttributionIdentifier;
@property (retain, nonatomic) NSString *attributionIdentifier;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) unsigned int rank;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasIsConversationAutoDonating;
@property (nonatomic) BOOL isConversationAutoDonating;
@property (readonly, nonatomic) BOOL hasOriginatingDeviceId;
@property (retain, nonatomic) NSString *originatingDeviceId;
@property (nonatomic) BOOL hasRankingSecondsSinceReferenceDate;
@property (nonatomic) double rankingSecondsSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasResolvedUrl;
@property (retain, nonatomic) NSString *resolvedUrl;
@property (readonly, nonatomic) BOOL hasVariant;
@property (retain, nonatomic) NSString *variant;
@property (nonatomic) BOOL hasIsTopKResult;
@property (nonatomic) BOOL isTopKResult;
@property (nonatomic) BOOL hasTopKScore;
@property (nonatomic) double topKScore;
@property (nonatomic) BOOL hasFirstPassScore;
@property (nonatomic) double firstPassScore;
@property (nonatomic) BOOL hasIsCollaboration;
@property (nonatomic) BOOL isCollaboration;
@property (readonly, nonatomic) BOOL hasCollaborationIdentifier;
@property (retain, nonatomic) NSString *collaborationIdentifier;
@property (readonly, nonatomic) BOOL hasContentType;
@property (retain, nonatomic) NSString *contentType;
@property (readonly, nonatomic) BOOL hasContentDisplayName;
@property (retain, nonatomic) NSString *contentDisplayName;
@property (readonly, nonatomic) BOOL hasFileProviderId;
@property (retain, nonatomic) NSString *fileProviderId;
@property (readonly, nonatomic) BOOL hasLocalIdentity;
@property (retain, nonatomic) NSData *localIdentity;
@property (readonly, nonatomic) BOOL hasLocalIdentityProof;
@property (retain, nonatomic) NSData *localIdentityProof;
@property (readonly, nonatomic) BOOL hasHandleToIdentityMap;
@property (retain, nonatomic) NSData *handleToIdentityMap;
@property (nonatomic) BOOL hasFromMeEntitlementOverrideIsPresent;
@property (nonatomic) BOOL fromMeEntitlementOverrideIsPresent;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (Class)applicationIdentifiersType;
+ (Class)calculatedFeaturesType;

/* instance methods */
- (id)serialize;
- (id)json;
- (id)calculatedFeatureValueForKey:(id)key;
- (void)setCalculatedFeaturesFromDictionary:(id)dictionary;
- (id)featureValueForName:(id)name;
- (id)features;
- (id)highlightTypeAsString:(int)string;
- (int)StringAsHighlightType:(id)type;
- (void)clearApplicationIdentifiers;
- (void)addApplicationIdentifiers:(id)identifiers;
- (unsigned long long)applicationIdentifiersCount;
- (id)applicationIdentifiersAtIndex:(unsigned long long)index;
- (void)clearCalculatedFeatures;
- (void)addCalculatedFeatures:(id)features;
- (unsigned long long)calculatedFeaturesCount;
- (id)calculatedFeaturesAtIndex:(unsigned long long)index;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)mergeFrom:(id)from;
@end

#endif /* PPRankableSocialHighlight_h */
