//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICMutableSessionSceneSettings_h
#define PUICMutableSessionSceneSettings_h
@import Foundation;

#include "PUICMutableApplicationSceneSettings.h"
#include "PUICSessionSceneSettings-Protocol.h"

@class NSString, NSUUID;

@interface PUICMutableSessionSceneSettings : PUICMutableApplicationSceneSettings<PUICSessionSceneSettings>

@property (retain, nonatomic) NSUUID *sessionID;
@property (retain, nonatomic) NSString *sessionBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PUICMutableSessionSceneSettings_h */
