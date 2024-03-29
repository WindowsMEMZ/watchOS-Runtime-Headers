//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSOnDeviceCachedIrPurgingHandler_h
#define CSOnDeviceCachedIrPurgingHandler_h
@import Foundation;

#include "CSVoiceTriggerAssetHandlerDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface CSOnDeviceCachedIrPurgingHandler : NSObject<CSVoiceTriggerAssetHandlerDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedHandler;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)startRegistration;
- (void)cleanUpCachedIrDir;
- (void)purgeCachedIrForTrialAssetExcludingCurrentAsset:(id)asset cachedIrDir:(id)dir;
- (void)voiceTriggerAssetHandler:(id)handler endpointId:(id)id didChangeCachedAsset:(id)asset;
- (void)cleanUpWithCachedIrDir:(id)dir;
- (void)cleanUpPreviousBuildBnnsIrInCachedIrDir:(id)dir;
@end

#endif /* CSOnDeviceCachedIrPurgingHandler_h */
