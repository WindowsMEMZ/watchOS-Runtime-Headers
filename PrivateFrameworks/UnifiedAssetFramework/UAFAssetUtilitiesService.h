//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.4.1.0.0
//
#ifndef UAFAssetUtilitiesService_h
#define UAFAssetUtilitiesService_h
@import Foundation;

#include "UAFAssetStatus.h"

@class AFSettingsConnection, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface UAFAssetUtilitiesService : NSObject {
  /* instance variables */
  NSString *_siriLanguage;
  BOOL _observerEnabled;
}

@property (retain, nonatomic) AFSettingsConnection *settingsConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue;
@property (retain, nonatomic) UAFAssetStatus *assetStatus;
@property (retain, nonatomic) NSMutableDictionary *dictationStatus;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)startObserver;
- (void)stopObserver;
- (void)downloadSiriAssets;
- (void)downloadSiriAssetsOverCellular;
- (void)_downloadSiriAssetsWithCellular:(BOOL)cellular;
- (void)_downloadUnderstandingAssetsForLanguage:(id)language useCellular:(BOOL)cellular;
- (void)_handleUpdateProgress:(unsigned long long)progress status:(unsigned long long)status language:(id)language;
- (void)_updateProgress:(unsigned long long)progress forLanguage:(id)language;
- (BOOL)_isLegacySiriDevice;
- (id)getLanguage;
- (void)switchLanguage:(id)language;
- (void)postAssetNotificationIfNeeded;
- (void)updateSiriAssetAvailabilityForLanguage:(id)language;
- (void)_updateSiriAssetAvailability:(id)availability forLanguage:(id)language;
- (void)downloadDictationAssetsForLanguage:(id)language;
- (void)_downloadDictationAssetsForLanguage:(id)language useCellular:(BOOL)cellular;
- (void)_handleDictationProgress:(unsigned long long)progress language:(id)language;
- (void)_handleDictationCompletionForLanguage:(id)language;
- (void)postDictationAssetNotificationForLanguage:(id)language;
- (void)updateDictationState:(unsigned long long)state withValue:(id)value forLanguage:(id)language;
- (void)checkAssetStatus:(id /* block */)status;
- (void)updateAssetState:(unsigned long long)state value:(id)value forLanguage:(id)language;
- (void)_updateAssetState:(unsigned long long)state value:(id)value forLanguage:(id)language;
- (void)_postAssetStateChangedNotification;
- (void)downloadSizeInBytesForLanguage:(id)language completion:(id /* block */)completion;
- (id)_getDownloadSizeInBytesForLanguage:(id)language isDictation:(BOOL)dictation error:(id *)error;
- (unsigned long long)_checkFreeSpaceNeededForDownloadForLanguage:(id)language isDictation:(BOOL)dictation;
- (BOOL)_hasInexpensiveNetwork;
@end

#endif /* UAFAssetUtilitiesService_h */
