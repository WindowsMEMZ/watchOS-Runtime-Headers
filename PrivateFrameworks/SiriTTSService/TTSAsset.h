//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.19.1.2.1
//
#ifndef TTSAsset_h
#define TTSAsset_h
@import Foundation;

#include "TTSAssetQuality.h"
#include "TTSAssetSource.h"
#include "TTSAssetTechnology.h"
#include "TTSAssetType.h"

@class NSArray, NSBundle, NSDictionary, NSNumber, NSString;

@interface TTSAsset : NSObject

@property (nonatomic, readonly) long long purgeCondition;
@property (nonatomic, readonly) NSString *primaryLanguage;
@property (nonatomic, readonly) BOOL locallyAvailable;
@property (nonatomic, readonly) BOOL downloading;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) NSString *description;
@property (readonly, nonatomic) TTSAssetType *assetType;
@property (readonly, nonatomic) TTSAssetSource *assetSource;
@property (readonly, nonatomic) TTSAssetTechnology *technology;
@property (readonly, nonatomic) TTSAssetQuality *quality;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long versionNumber;
@property (readonly, nonatomic) NSString *versionDescription;
@property (readonly, nonatomic) NSArray *supportedLanguages;
@property (readonly, nonatomic) NSString *primaryLanguage;
@property (readonly, nonatomic) long long gender;
@property (readonly, nonatomic) NSNumber *age;
@property (readonly, nonatomic) NSNumber *downloadSize;
@property (readonly, nonatomic) NSNumber *diskSize;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSBundle *bundle;

/* class methods */
+ (id)listAssetsOfTypes:(id)types matching:(id)matching;
+ (id)bestAssetOfTypes:(id)types matching:(id)matching;
+ (id)assistantVoiceMaps;
+ (BOOL)setServer:(id)server forType:(id)type;
+ (BOOL)setServer:(id)server forType:(id)type source:(id)source;
+ (id)getServerForType:(id)type;
+ (id)getServerForType:(id)type source:(id)source;
+ (id)describeServer:(id)server forType:(id)type;
+ (id)describeServer:(id)server source:(id)source;
+ (void)waitForCatalogUpdates;
+ (BOOL)handleProxyEvent:(id)event reply:(id)reply connection:(id)connection;
+ (id)NewAssetNotification;
+ (void)_postNewAssetNotification;
+ (BOOL)_hasTrialEntitlements;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_gryphonVoiceCompatibility;

/* instance methods */
- (id)relatedAssetsWithOnlyAvailable:(BOOL)available;
- (BOOL)isOlder:(id)older;
- (BOOL)isNewer:(id)newer;
- (void)downloadWithReservation:(id)reservation useBattery:(BOOL)battery progress:(id /* block */)progress then:(id /* block */)then;
- (void)cancelDownloadingThen:(id /* block */)then;
- (void)purge;
- (void)purgeImmediately:(BOOL)immediately;
- (id)legacyAssetWithBundle:(id)bundle;
- (id)init;
@end

#endif /* TTSAsset_h */
