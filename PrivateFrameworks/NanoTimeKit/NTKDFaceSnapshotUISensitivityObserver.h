//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKDFaceSnapshotUISensitivityObserver_h
#define NTKDFaceSnapshotUISensitivityObserver_h
@import Foundation;

#include "CLKSensitiveUIStateObserver-Protocol.h"

@class NSString;

@interface NTKDFaceSnapshotUISensitivityObserver : NSObject<CLKSensitiveUIStateObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)sensitiveUIStateChanged;
@end

#endif /* NTKDFaceSnapshotUISensitivityObserver_h */
