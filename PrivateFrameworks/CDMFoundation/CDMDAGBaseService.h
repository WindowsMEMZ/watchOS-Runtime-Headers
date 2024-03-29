//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMDAGBaseService_h
#define CDMDAGBaseService_h
@import Foundation;

#include "CDMBaseService.h"
#include "CDMDynamicConfig.h"

@class NSString;

@interface CDMDAGBaseService : CDMBaseService {
  /* instance variables */
  NSString *_setupLanguageCode;
  CDMDynamicConfig *_currentConfig;
}

/* class methods */
+ (BOOL)isEnabled;
+ (BOOL)isAssetRequired;
+ (id)getAssetConfig;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (void)handleXPCActivity:(id)xpcactivity withAssets:(id)assets withSelfMetadata:(id)metadata;
+ (id)xpcActivitySupported;
+ (id)xpcEventStreamsSupported;
+ (void)handleXPCEvent:(id)xpcevent fromStream:(id)stream withAssets:(id)assets withSelfMetadata:(id)metadata;

/* instance methods */
- (id)supportedCommands;
- (id)initWithConfig:(id)config;
- (void)handleCommand:(id)command withCallback:(id /* block */)callback;
- (void)_handleSetupRequest:(id)request withCallback:(id /* block */)callback;
- (void)_handleWarmupRequest:(id)request withCallback:(id /* block */)callback;
- (id)handle:(id)handle;
- (BOOL)isSetupRerunNeededForRequest:(id)request;
- (id)setup:(id)setup;
- (id)handleRequestCommandTypeNames;
@end

#endif /* CDMDAGBaseService_h */
