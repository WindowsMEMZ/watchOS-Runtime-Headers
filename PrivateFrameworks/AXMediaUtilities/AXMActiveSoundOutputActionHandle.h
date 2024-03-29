//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMActiveSoundOutputActionHandle_h
#define AXMActiveSoundOutputActionHandle_h
@import Foundation;

#include "AXMOutputActionHandle.h"
#include "AXMActiveSoundOutputActionHandleProvider-Protocol.h"

@interface AXMActiveSoundOutputActionHandle : AXMOutputActionHandle

@property (retain, nonatomic) NSObject<AXMActiveSoundOutputActionHandleProvider> *handleProvider;
@property (nonatomic) float pitch;
@property (nonatomic) float rate;

/* instance methods */
- (void)stop;
- (void)setQuantizedRate:(long long)rate;
@end

#endif /* AXMActiveSoundOutputActionHandle_h */
