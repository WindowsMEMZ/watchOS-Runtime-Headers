//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFRequestMessage_h
#define SFRequestMessage_h
@import Foundation;

#include "SFMessage.h"

@interface SFRequestMessage : SFMessage

@property (copy, nonatomic) id /* block */ responseHandler;

/* instance methods */
- (void)invalidate;
@end

#endif /* SFRequestMessage_h */
