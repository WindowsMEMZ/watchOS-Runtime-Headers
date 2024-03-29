//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKUIRenderFrequencyLink_h
#define CLKUIRenderFrequencyLink_h
@import Foundation;

#include "CLKUIRenderCoordinator-Protocol.h"

@class NSString;

@interface CLKUIRenderFrequencyLink : NSObject<CLKUIRenderCoordinator>

@property (nonatomic) unsigned long long preferredFramesPerSecond;
@property (nonatomic) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (BOOL)isPaused;
- (void)updateCoordinator;
- (void)invalidate;
@end

#endif /* CLKUIRenderFrequencyLink_h */
