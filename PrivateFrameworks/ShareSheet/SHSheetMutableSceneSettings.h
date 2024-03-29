//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SHSheetMutableSceneSettings_h
#define SHSheetMutableSceneSettings_h
@import Foundation;

#include "UIMutableApplicationSceneSettings.h"
#include "SHSheetUIServiceClientContext.h"

@class NSString;

@interface SHSheetMutableSceneSettings : UIMutableApplicationSceneSettings

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) SHSheetUIServiceClientContext *sessionContext;
@property (retain, nonatomic) id sheetConfiguration;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) long long applicationState;
@property (nonatomic) long long hostProcessType;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SHSheetMutableSceneSettings_h */
