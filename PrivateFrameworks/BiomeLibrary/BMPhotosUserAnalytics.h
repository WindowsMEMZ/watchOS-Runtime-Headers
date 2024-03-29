//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMPhotosUserAnalytics_h
#define BMPhotosUserAnalytics_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSString;

@interface BMPhotosUserAnalytics : BMEventBase<BMStoreData>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *userEvent;
@property (readonly, nonatomic) BOOL containsVIP;
@property (nonatomic) BOOL hasContainsVIP;
@property (readonly, nonatomic) int faceCount;
@property (nonatomic) BOOL hasFaceCount;
@property (readonly, nonatomic) BOOL containsPets;
@property (nonatomic) BOOL hasContainsPets;
@property (readonly, nonatomic) BOOL capturedAtHome;
@property (nonatomic) BOOL hasCapturedAtHome;
@property (readonly, nonatomic) BOOL capturedAtWork;
@property (nonatomic) BOOL hasCapturedAtWork;
@property (readonly, nonatomic) BOOL capturedAtFrequentLocation;
@property (nonatomic) BOOL hasCapturedAtFrequentLocation;
@property (readonly, nonatomic) BOOL capturedOnTrip;
@property (nonatomic) BOOL hasCapturedOnTrip;
@property (readonly, nonatomic) BOOL capturedOnShortTrip;
@property (nonatomic) BOOL hasCapturedOnShortTrip;
@property (readonly, nonatomic) BOOL isDocument;
@property (nonatomic) BOOL hasIsDocument;
@property (readonly, nonatomic) BOOL isMeme;
@property (nonatomic) BOOL hasIsMeme;
@property (readonly, nonatomic) BOOL isScreenshot;
@property (nonatomic) BOOL hasIsScreenshot;
@property (readonly, nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL hasIsFavorite;
@property (readonly, nonatomic) BOOL isCapturedOnWeekend;
@property (nonatomic) BOOL hasIsCapturedOnWeekend;
@property (readonly, nonatomic) BOOL isCapturedAtPrivateEvent;
@property (nonatomic) BOOL hasIsCapturedAtPrivateEvent;
@property (readonly, nonatomic) BOOL isCapturedOnHoliday;
@property (nonatomic) BOOL hasIsCapturedOnHoliday;
@property (readonly, nonatomic) int mediaType;
@property (readonly, nonatomic) int importSource;
@property (readonly, nonatomic) int assetAge;
@property (readonly, nonatomic) int userLibrarySize;
@property (readonly, nonatomic) int userNumTrips;
@property (nonatomic) BOOL hasUserNumTrips;
@property (readonly, nonatomic) int userNumVIPPeople;
@property (nonatomic) BOOL hasUserNumVIPPeople;
@property (readonly, nonatomic) int userNumFavorites;
@property (nonatomic) BOOL hasUserNumFavorites;
@property (readonly, nonatomic) BOOL userHasVIP;
@property (nonatomic) BOOL hasUserHasVIP;
@property (readonly, nonatomic) BOOL userHasHome;
@property (nonatomic) BOOL hasUserHasHome;
@property (readonly, nonatomic) BOOL userHasPet;
@property (nonatomic) BOOL hasUserHasPet;
@property (readonly, nonatomic) BOOL containsBaby;
@property (nonatomic) BOOL hasContainsBaby;
@property (readonly, nonatomic) BOOL containsSocialGroup;
@property (nonatomic) BOOL hasContainsSocialGroup;
@property (readonly, nonatomic) BOOL containsMyPet;
@property (nonatomic) BOOL hasContainsMyPet;
@property (readonly, nonatomic) BOOL containsCoWorker;
@property (nonatomic) BOOL hasContainsCoWorker;
@property (readonly, nonatomic) BOOL containsFamily;
@property (nonatomic) BOOL hasContainsFamily;
@property (readonly, nonatomic) BOOL containsFriends;
@property (nonatomic) BOOL hasContainsFriends;
@property (readonly, nonatomic) BOOL containsPartner;
@property (nonatomic) BOOL hasContainsPartner;
@property (readonly, nonatomic) BOOL containsParent;
@property (nonatomic) BOOL hasContainsParent;
@property (readonly, nonatomic) BOOL containsSibling;
@property (nonatomic) BOOL hasContainsSibling;
@property (readonly, nonatomic) BOOL containsChild;
@property (nonatomic) BOOL hasContainsChild;
@property (readonly, nonatomic) BOOL isCoupon;
@property (nonatomic) BOOL hasIsCoupon;
@property (readonly, nonatomic) BOOL isRecipe;
@property (nonatomic) BOOL hasIsRecipe;
@property (readonly, nonatomic) BOOL isReceipt;
@property (nonatomic) BOOL hasIsReceipt;
@property (readonly, nonatomic) BOOL isRecentView;
@property (nonatomic) BOOL hasIsRecentView;
@property (readonly, nonatomic) BOOL isRecentEdit;
@property (nonatomic) BOOL hasIsRecentEdit;
@property (readonly, nonatomic) BOOL isRecentShare;
@property (nonatomic) BOOL hasIsRecentShare;
@property (readonly, nonatomic) BOOL isRecentFavorite;
@property (nonatomic) BOOL hasIsRecentFavorite;
@property (readonly, nonatomic) BOOL isContainedInSharedAlbum;
@property (nonatomic) BOOL hasIsContainedInSharedAlbum;
@property (readonly, nonatomic) BOOL isContainedInOnThisDay;
@property (nonatomic) BOOL hasIsContainedInOnThisDay;
@property (readonly, nonatomic) BOOL capturedAtAOI;
@property (nonatomic) BOOL hasCapturedAtAOI;
@property (readonly, nonatomic) BOOL capturedAtPOI;
@property (nonatomic) BOOL hasCapturedAtPOI;
@property (readonly, nonatomic) BOOL capturedAtROI;
@property (nonatomic) BOOL hasCapturedAtROI;
@property (readonly, nonatomic) BOOL capturedAtBusiness;
@property (nonatomic) BOOL hasCapturedAtBusiness;
@property (readonly, nonatomic) BOOL isCapturedAtPublicEvent;
@property (nonatomic) BOOL hasIsCapturedAtPublicEvent;
@property (readonly, nonatomic) BOOL isContainedInVisualTrend;
@property (nonatomic) BOOL hasIsContainedInVisualTrend;
@property (readonly, nonatomic) BOOL isContainedInActivity;
@property (nonatomic) BOOL hasIsContainedInActivity;
@property (readonly, nonatomic) BOOL isContainedInChildActivity;
@property (nonatomic) BOOL hasIsContainedInChildActivity;
@property (readonly, nonatomic) int userLibraryAgeInDays;
@property (readonly, nonatomic) double userisDAU;
@property (nonatomic) BOOL hasUserisDAU;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithIdentifier:(id)identifier userEvent:(id)event containsVIP:(id)vip faceCount:(id)count containsPets:(id)pets capturedAtHome:(id)home capturedAtWork:(id)work capturedAtFrequentLocation:(id)location capturedOnTrip:(id)trip capturedOnShortTrip:(id)trip isDocument:(id)document isMeme:(id)meme isScreenshot:(id)screenshot isFavorite:(id)favorite isCapturedOnWeekend:(id)weekend isCapturedAtPrivateEvent:(id)event isCapturedOnHoliday:(id)holiday mediaType:(int)type importSource:(int)source assetAge:(int)age userLibrarySize:(int)size userNumTrips:(id)trips userNumVIPPeople:(id)vippeople userNumFavorites:(id)favorites userHasVIP:(id)vip userHasHome:(id)home userHasPet:(id)pet containsBaby:(id)baby containsSocialGroup:(id)group containsMyPet:(id)pet containsCoWorker:(id)worker containsFamily:(id)family containsFriends:(id)friends containsPartner:(id)partner containsParent:(id)parent containsSibling:(id)sibling containsChild:(id)child isCoupon:(id)coupon isRecipe:(id)recipe isReceipt:(id)receipt isRecentView:(id)view isRecentEdit:(id)edit isRecentShare:(id)share isRecentFavorite:(id)favorite isContainedInSharedAlbum:(id)album isContainedInOnThisDay:(id)day capturedAtAOI:(id)aoi capturedAtPOI:(id)poi capturedAtROI:(id)roi capturedAtBusiness:(id)business isCapturedAtPublicEvent:(id)event isContainedInVisualTrend:(id)trend isContainedInActivity:(id)activity isContainedInChildActivity:(id)activity userLibraryAgeInDays:(int)days userisDAU:(id)dau;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMPhotosUserAnalytics_h */
