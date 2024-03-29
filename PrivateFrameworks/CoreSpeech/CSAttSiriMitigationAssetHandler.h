//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSAttSiriMitigationAssetHandler_h
#define CSAttSiriMitigationAssetHandler_h
@import Foundation;

#include "CSAssetManager.h"
#include "CSLanguageCodeUpdateMonitor.h"
#include "CSUAFAssetManager.h"
#include "CSUAFDownloadMonitor.h"
#include "CSUAFDownloadMonitorDelegate-Protocol.h"
#include "CSVoiceTriggerAssetHandlerDelegate-Protocol.h"

@class CSAsset, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSAttSiriMitigationAssetHandler : NSObject<CSVoiceTriggerAssetHandlerDelegate, CSUAFDownloadMonitorDelegate>

@property (retain) CSAsset *cachedAsset;
@property (retain, nonatomic) CSAssetManager *assetManager;
@property (retain, nonatomic) CSUAFAssetManager *uafAssetManager;
@property (retain, nonatomic) CSUAFDownloadMonitor *uafDownloadMonitor;
@property (retain, nonatomic) CSLanguageCodeUpdateMonitor *languageCodeUpdateMonitor;
@property (nonatomic) BOOL overrideEnabled;
@property (retain, nonatomic) NSString *overridePath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedHandler;

/* instance methods */
- (id)init;
- (id)initWithAssetManager:(id)manager withUAFAssetManager:(id)manager withUAFDownloadMonitor:(id)monitor withLanguageCodeUpdateMonitor:(id)monitor withAssetOverrideFlag:(BOOL)flag withOverrideAssetPath:(id)path;
- (void)start;
- (void)registerObserver:(id)observer;
- (void)unregisterObserver:(id)observer;
- (void)notifyObservers:(id)observers endpointId:(id)id;
- (void)getMitigationAssetWithEndpointId:(id)id completion:(id /* block */)completion;
- (void)_getMitigationAssetWithEndpointId:(id)id completion:(id /* block */)completion;
- (void)triggerAssetRefresh;
- (void)_receivedNewAssetUpdate:(id)update;
- (id)getNeuralCombinerConfigFile;
- (void)assetDownloadMonitorDelegate:(id)delegate assetType:(unsigned long long)type;
- (void)CSLanguageCodeUpdateMonitor:(id)monitor didReceiveLanguageCodeChanged:(id)changed;
@end

#endif /* CSAttSiriMitigationAssetHandler_h */
