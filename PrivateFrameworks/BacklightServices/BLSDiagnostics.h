//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSDiagnostics_h
#define BLSDiagnostics_h
@import Foundation;

#include "BLSDiagnosticFlipbookFrameSurfaceProvider-Protocol.h"
#include "BLSFlipbookDiagnosticsProviding-Protocol.h"
#include "BSInvalidatable-Protocol.h"

@class BSServiceConnection, NSString;
@protocol OS_dispatch_queue;

@interface BLSDiagnostics : NSObject<BLSDiagnosticFlipbookFrameSurfaceProvider, BLSFlipbookDiagnosticsProviding, BSInvalidatable> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_callbackQueue;
  BSServiceConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)invalidate;
- (id)allFlipbookFrames;
- (id)frameWithUUID:(id)uuid;
- (id)frameOnGlassNow;
- (id)frameOnGlassWhenFlipbookLastCancelled;
- (struct __IOSurface *)surfaceForFrame:(id)frame;
- (struct __IOSurface *)rawSurfaceForFrame:(id)frame;
@end

#endif /* BLSDiagnostics_h */
