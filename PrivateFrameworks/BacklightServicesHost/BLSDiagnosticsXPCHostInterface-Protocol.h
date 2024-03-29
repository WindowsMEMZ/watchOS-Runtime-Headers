//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSDiagnosticsXPCHostInterface_Protocol_h
#define BLSDiagnosticsXPCHostInterface_Protocol_h
@import Foundation;

@protocol BLSDiagnosticsXPCHostInterface <NSObject>
/* instance methods */
- (id)allFlipbookFrames;
- (id)frameOnGlassNow;
- (id)frameOnGlassWhenFlipbookLastCancelled;
- (void)surfaceForFrameUUID:(id)uuid reply:(id /* block */)reply;
- (void)rawSurfaceForFrameUUID:(id)uuid reply:(id /* block */)reply;
@end

#endif /* BLSDiagnosticsXPCHostInterface_Protocol_h */
