//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAAutoAssetSetStatus_h
#define MAAutoAssetSetStatus_h
@import Foundation;

#include "MAAutoAssetSetNotifications.h"
#include "MAAutoAssetSetPolicy.h"
#include "MAAutoAssetSetProgress.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSError, NSString, NSURL;

@interface MAAutoAssetSetStatus : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSArray *configuredAssetEntries;
@property (retain, nonatomic) NSArray *atomicInstancesDownloaded;
@property (retain, nonatomic) NSString *catalogCachedAssetSetID;
@property (retain, nonatomic) NSURL *catalogDownloadedFromLive;
@property (retain, nonatomic) NSDate *catalogLastTimeChecked;
@property (retain, nonatomic) NSDate *catalogPostedDate;
@property (retain, nonatomic) NSString *newerAtomicInstanceDiscovered;
@property (retain, nonatomic) NSArray *newerDiscoveredAtomicEntries;
@property (retain, nonatomic) NSString *latestDownloadedAtomicInstance;
@property (retain, nonatomic) NSArray *latestDowloadedAtomicInstanceEntries;
@property (retain, nonatomic) NSDictionary *allDownloadedAtomicInstanceEntries;
@property (retain, nonatomic) NSString *downloadedCatalogCachedAssetSetID;
@property (retain, nonatomic) NSURL *downloadedCatalogDownloadedFromLive;
@property (retain, nonatomic) NSDate *downloadedCatalogLastTimeChecked;
@property (retain, nonatomic) NSDate *downloadedCatalogPostedDate;
@property (retain, nonatomic) MAAutoAssetSetNotifications *currentNotifications;
@property (retain, nonatomic) MAAutoAssetSetPolicy *currentNeedPolicy;
@property (retain, nonatomic) MAAutoAssetSetPolicy *schedulerPolicy;
@property (retain, nonatomic) MAAutoAssetSetPolicy *stagerPolicy;
@property (nonatomic) BOOL downloadUserInitiated;
@property (retain, nonatomic) MAAutoAssetSetProgress *downloadProgress;
@property (nonatomic) long long downloadedNetworkBytes;
@property (nonatomic) long long downloadedFilesystemBytes;
@property (retain, nonatomic) NSDictionary *currentLockUsage;
@property (retain, nonatomic) NSDictionary *selectorsForStaging;
@property (retain, nonatomic) NSError *availableForUseError;
@property (retain, nonatomic) NSError *newerVersionError;
@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)newCurrentLockUsageSummary:(id)summary;
+ (id)newCurrentLockUsageDetailed:(id)detailed;
+ (id)newSelectorsForStagingSummary:(id)summary;

/* instance methods */
- (id)initStatusForClientDomain:(id)domain forAssetSetIdentifier:(id)identifier withAtomicInstancesDownloaded:(id)downloaded withNewerAtomicInstanceDiscovered:(id)discovered withNewerDiscoveredAtomicEntries:(id)entries withLatestDownloadedAtomicInstance:(id)instance withLatestDowloadedAtomicInstanceEntries:(id)entries withAllDownloadedAtomicInstanceEntries:(id)entries withCurrentNotifications:(id)notifications withCurrentNeedPolicy:(id)policy withSchedulerPolicy:(id)policy withStagerPolicy:(id)policy withDownloadUserInitiated:(BOOL)initiated withDownloadProgress:(id)progress withDownloadedNetworkBytes:(long long)bytes withDownloadedFilesystemBytes:(long long)bytes withCurrentLockUsage:(id)usage withSelectorsForStaging:(id)staging withAvailableForUseError:(id)error withNewerVersionError:(id)error;
- (id)initStatusForClientDomain:(id)domain forAssetSetIdentifier:(id)identifier withConfiguredAssetEntries:(id)entries withAtomicInstancesDownloaded:(id)downloaded withNewerAtomicInstanceDiscovered:(id)discovered withNewerDiscoveredAtomicEntries:(id)entries withLatestDownloadedAtomicInstance:(id)instance withLatestDowloadedAtomicInstanceEntries:(id)entries withAllDownloadedAtomicInstanceEntries:(id)entries withCurrentNotifications:(id)notifications withCurrentNeedPolicy:(id)policy withSchedulerPolicy:(id)policy withStagerPolicy:(id)policy withDownloadUserInitiated:(BOOL)initiated withDownloadProgress:(id)progress withDownloadedNetworkBytes:(long long)bytes withDownloadedFilesystemBytes:(long long)bytes withCurrentLockUsage:(id)usage withSelectorsForStaging:(id)staging withAvailableForUseError:(id)error withNewerVersionError:(id)error;
- (id)initStatusForClientDomain:(id)domain forAssetSetIdentifier:(id)identifier withConfiguredAssetEntries:(id)entries withAtomicInstancesDownloaded:(id)downloaded withCatalogCachedAssetSetID:(id)id withCatalogDownloadedFromLive:(id)live withCatalogLastTimeChecked:(id)checked withCatalogPostedDate:(id)date withNewerAtomicInstanceDiscovered:(id)discovered withNewerDiscoveredAtomicEntries:(id)entries withLatestDownloadedAtomicInstance:(id)instance withLatestDowloadedAtomicInstanceEntries:(id)entries withCurrentNotifications:(id)notifications withCurrentNeedPolicy:(id)policy withSchedulerPolicy:(id)policy withStagerPolicy:(id)policy withDownloadUserInitiated:(BOOL)initiated withDownloadProgress:(id)progress withDownloadedNetworkBytes:(long long)bytes withDownloadedFilesystemBytes:(long long)bytes withCurrentLockUsage:(id)usage withSelectorsForStaging:(id)staging withAvailableForUseError:(id)error withNewerVersionError:(id)error;
- (id)initStatusForClientDomain:(id)domain forAssetSetIdentifier:(id)identifier withConfiguredAssetEntries:(id)entries withAtomicInstancesDownloaded:(id)downloaded withCatalogCachedAssetSetID:(id)id withCatalogDownloadedFromLive:(id)live withCatalogLastTimeChecked:(id)checked withCatalogPostedDate:(id)date withNewerAtomicInstanceDiscovered:(id)discovered withNewerDiscoveredAtomicEntries:(id)entries withLatestDownloadedAtomicInstance:(id)instance withLatestDowloadedAtomicInstanceEntries:(id)entries withDownloadedCatalogCachedAssetSetID:(id)id withDownloadedCatalogDownloadedFromLive:(id)live withDownloadedCatalogLastTimeChecked:(id)checked withDownloadedCatalogPostedDate:(id)date withCurrentNotifications:(id)notifications withCurrentNeedPolicy:(id)policy withSchedulerPolicy:(id)policy withStagerPolicy:(id)policy withDownloadUserInitiated:(BOOL)initiated withDownloadProgress:(id)progress withDownloadedNetworkBytes:(long long)bytes withDownloadedFilesystemBytes:(long long)bytes withCurrentLockUsage:(id)usage withSelectorsForStaging:(id)staging withAvailableForUseError:(id)error withNewerVersionError:(id)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copy;
- (id)description;
- (id)summary;
@end

#endif /* MAAutoAssetSetStatus_h */
