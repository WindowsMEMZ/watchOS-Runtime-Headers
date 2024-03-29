//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLModernStatusBarManagerConfiguration_h
#define CSLModernStatusBarManagerConfiguration_h
@import Foundation;

#include "BLSBacklightStateObservable-Protocol.h"
#include "CSLApplicationSupportService.h"
#include "CSLStatusBarContext.h"
#include "IOSSHLApplicationsProviding-Protocol.h"
#include "IOSSHLSceneManager.h"

@class CSLSDNDModeAssetNameProvider, CSLSDisconnectedAssetNameProvider, FBProcessManager, FBSceneManager;

@interface CSLModernStatusBarManagerConfiguration : NSObject

@property (retain, nonatomic) NSObject<IOSSHLApplicationsProviding> *applicationProvider;
@property (retain, nonatomic) CSLApplicationSupportService *applicationSupportService;
@property (retain, nonatomic) FBSceneManager *sceneManager;
@property (retain, nonatomic) CSLSDisconnectedAssetNameProvider *disconnectedNameProvider;
@property (retain, nonatomic) CSLSDNDModeAssetNameProvider *dndModeAssetNameProvider;
@property (retain, nonatomic) CSLStatusBarContext *globalContext;
@property (retain, nonatomic) NSObject<BLSBacklightStateObservable> *backlight;
@property (retain, nonatomic) FBProcessManager *processManager;
@property (retain, nonatomic) IOSSHLSceneManager *carouselSceneManager;

/* instance methods */
@end

#endif /* CSLModernStatusBarManagerConfiguration_h */
