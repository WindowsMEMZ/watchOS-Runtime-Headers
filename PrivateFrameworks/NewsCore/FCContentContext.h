//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCContentContext_h
#define FCContentContext_h
@import Foundation;

#include "FCAVAssetCacheType-Protocol.h"
#include "FCAVAssetDownloadManager.h"
#include "FCAVAssetFactoryType-Protocol.h"
#include "FCAVAssetKeyCacheType-Protocol.h"
#include "FCAVAssetKeyManagerType-Protocol.h"
#include "FCAVAssetKeyServiceType-Protocol.h"
#include "FCAVAssetPrewarming-Protocol.h"
#include "FCAVAssetResourceLoaderType-Protocol.h"
#include "FCArticleController.h"
#include "FCAssetKeyCacheType-Protocol.h"
#include "FCAssetKeyManagerType-Protocol.h"
#include "FCAssetKeyServiceType-Protocol.h"
#include "FCAssetManager.h"
#include "FCContentContext-Protocol.h"
#include "FCContentContextInternal.h"
#include "FCContextConfiguration.h"
#include "FCCoreConfigurationManager-Protocol.h"
#include "FCCoreConfigurationObserving-Protocol.h"
#include "FCFeedDatabaseProtocol-Protocol.h"
#include "FCFlintResourceManager.h"
#include "FCNetworkBehaviorMonitor.h"
#include "FCNetworkReachabilityRequirement-Protocol.h"
#include "FCNetworkReachabilityRequirementObserving-Protocol.h"
#include "FCNewsAppConfigurationManager-Protocol.h"
#include "FCPuzzleController.h"
#include "FCPuzzleTypeController.h"
#include "FCSportsEventController.h"
#include "FCTagController.h"

@class NSString, NSURL;
@protocol FCBackgroundTaskable, FCPPTContext;

@interface FCContentContext : NSObject<FCNetworkReachabilityRequirementObserving, FCCoreConfigurationObserving, FCContentContext>

@property (copy, nonatomic) FCContextConfiguration *contextConfiguration;
@property (copy, nonatomic) NSString *contentDirectory;
@property (retain, nonatomic) NSURL *assetCacheDirectoryURL;
@property (copy, nonatomic) NSString *tabiResourcesContentDirectory;
@property (copy, nonatomic) NSString *tabiModelsContentDirectory;
@property (retain, nonatomic) FCContentContextInternal *internalContentContext;
@property (retain, nonatomic) NSObject<FCAssetKeyServiceType> *assetKeyService;
@property (retain, nonatomic) NSObject<FCAssetKeyCacheType> *assetKeyCache;
@property (retain, nonatomic) NSObject<FCAssetKeyManagerType> *assetKeyManager;
@property (retain, nonatomic) NSObject<FCAVAssetFactoryType> *avAssetFactory;
@property (retain, nonatomic) NSObject<FCAVAssetCacheType> *avAssetCache;
@property (retain, nonatomic) FCAVAssetDownloadManager *avAssetDownloadManager;
@property (retain, nonatomic) NSObject<FCAVAssetKeyServiceType> *avAssetKeyService;
@property (retain, nonatomic) NSObject<FCAVAssetKeyCacheType> *avAssetKeyCache;
@property (retain, nonatomic) NSObject<FCAVAssetKeyManagerType> *avAssetKeyManager;
@property (retain, nonatomic) NSObject<FCAVAssetResourceLoaderType> *avAssetResourceLoader;
@property (retain, nonatomic) NSObject<FCNetworkReachabilityRequirement> *supportedCountryNetworkReachabilityRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *contentStoreFrontID;
@property (readonly, copy, nonatomic) NSString *supportedContentStoreFrontID;
@property (readonly, copy, nonatomic) NSString *contentEnvironment;
@property (readonly, nonatomic) NSObject<FCCoreConfigurationManager> *configurationManager;
@property (readonly, nonatomic) NSObject<FCNewsAppConfigurationManager> *appConfigurationManager;
@property (readonly, nonatomic) FCAssetManager *assetManager;
@property (readonly, nonatomic) NSObject<FCAVAssetPrewarming> *avAssetPrewarmer;
@property (readonly, nonatomic) FCArticleController *articleController;
@property (readonly, nonatomic) FCTagController *tagController;
@property (readonly, nonatomic) FCSportsEventController *sportsEventController;
@property (readonly, nonatomic) FCPuzzleController *puzzleController;
@property (readonly, nonatomic) FCPuzzleTypeController *puzzleTypeController;
@property (readonly, nonatomic) FCFlintResourceManager *flintResourceManager;
@property (readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (readonly, weak, nonatomic) NSObject<FCBackgroundTaskable> *backgroundTaskable;
@property (readonly, nonatomic) NSObject<FCPPTContext> *pptContext;
@property (readonly, nonatomic) NSObject<FCFeedDatabaseProtocol> *feedDatabase;
@property (readonly, copy, nonatomic) NSString *contentEnvironmentToken;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithConfiguration:(id)configuration configurationManager:(id)manager contentHostDirectory:(id)directory networkBehaviorMonitor:(id)monitor desiredHeadlineFieldOptions:(unsigned long long)options feedUsage:(long long)usage appActivityMonitor:(id)monitor backgroundTaskable:(id)taskable pptContext:(id)context;
- (id)initWithConfiguration:(id)configuration configurationManager:(id)manager contentHostDirectory:(id)directory networkBehaviorMonitor:(id)monitor desiredHeadlineFieldOptions:(unsigned long long)options feedUsage:(long long)usage assetKeyManagerDelegate:(id)delegate appActivityMonitor:(id)monitor backgroundTaskable:(id)taskable pptContext:(id)context;
- (id)initWithConfiguration:(id)configuration configurationManager:(id)manager contentDatabase:(id)database contentHostDirectory:(id)directory networkBehaviorMonitor:(id)monitor setupCustomURLProtocols:(BOOL)urlprotocols desiredHeadlineFieldOptions:(unsigned long long)options feedUsage:(long long)usage assetKeyManagerDelegate:(id)delegate appActivityMonitor:(id)monitor backgroundTaskable:(id)taskable pptContext:(id)context;
- (void)dealloc;
- (void)networkReachabilityRequirementDidBecomeDirty:(id)dirty;
- (void)_updateReachabilityGivenRequirements;
- (id)news_core_ConfigurationManager;
- (id)magazinesConfigurationManager;
- (id)recordSourceWithSchema:(id)schema;
- (id)recordTreeSourceWithRecordSources:(id)sources;
- (id)interestTokenForContentManifest:(id)manifest;
- (id)convertRecords:(id)records;
- (void)ppt_overrideFeedEndpoint:(long long)endpoint;
- (void)ppt_prewarmFeedDatabase;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)threshold;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)threshold exceptForFlusher:(id)flusher;
- (void)configurationManager:(id)manager configurationDidChange:(id)change;
- (void)configurationManagerScienceExperimentFieldsDidChange:(id)change;
@end

#endif /* FCContentContext_h */
