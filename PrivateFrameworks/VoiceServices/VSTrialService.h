//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef VSTrialService_h
#define VSTrialService_h
@import Foundation;

@class NSArray, NSLock, TRIClient;
@protocol OS_dispatch_queue, TRINotificationToken;

@interface VSTrialService : NSObject

@property (retain, nonatomic) TRIClient *triClient;
@property (retain, nonatomic) NSArray *cachedVoices;
@property (retain, nonatomic) NSArray *cachedResources;
@property (retain, nonatomic) NSObject<TRINotificationToken> *trialNotificationToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;
@property (retain, nonatomic) NSLock *clientRefreshLock;

/* class methods */
+ (id)sharedService;
+ (id)versionFactorNameWithFactorName:(id)name;
+ (id)defaultDownloadOptions;

/* instance methods */
- (id)definedVoiceResourcesWithLanguage:(id)language;
- (id)selectVoiceResourceWithLanguage:(id)language;
- (void)downloadVoiceResource:(id)resource withOptions:(id)options progress:(id /* block */)progress completion:(id /* block */)completion;
- (void)removeVoiceResource:(id)resource completion:(id /* block */)completion;
- (id)definedVoicesWithAssets:(id)assets;
- (id)definedVoicesWithLanguage:(id)language name:(id)name type:(long long)type footprint:(long long)footprint;
- (id)_definedVoicesWithLanguage:(id)language name:(id)name type:(long long)type footprint:(long long)footprint;
- (id)selectVoiceWithLanguage:(id)language name:(id)name type:(long long)type footprint:(long long)footprint;
- (void)downloadVoice:(id)voice withOptions:(id)options progress:(id /* block */)progress completion:(id /* block */)completion;
- (void)removeVoice:(id)voice completion:(id /* block */)completion;
- (id)init;
- (void)dealloc;
- (void)refreshTrialClient;
- (id)_directoryOfFactorName:(id)name;
- (id)_fileOfFactorName:(id)name;
- (void)downloadNamespaceImmediatelyIfNeededWithOption:(id)option completion:(id /* block */)completion;
- (void)_downloadFactorName:(id)name withOptions:(id)options progress:(id /* block */)progress completion:(id /* block */)completion;
- (void)_removeAssetWithFactorName:(id)name completion:(id /* block */)completion;
@end

#endif /* VSTrialService_h */
