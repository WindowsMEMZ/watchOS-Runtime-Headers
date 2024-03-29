//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1387.3.4.0.0
//
#ifndef AudioComponentRegistrarClient_h
#define AudioComponentRegistrarClient_h
@import Foundation;

#include "AudioComponentRegistrarCallbackProtocol-Protocol.h"

@interface AudioComponentRegistrarClient : NSObject<AudioComponentRegistrarCallbackProtocol>
/* instance methods */
- (void)registrationsChanged:(id)changed includesExtensions:(BOOL)extensions fsHash:(id)hash;
@end

#endif /* AudioComponentRegistrarClient_h */
