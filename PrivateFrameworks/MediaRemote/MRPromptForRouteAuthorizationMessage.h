//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRPromptForRouteAuthorizationMessage_h
#define MRPromptForRouteAuthorizationMessage_h
@import Foundation;

#include "MRProtocolMessage.h"
#include "MRAVOutputDevice.h"

@interface MRPromptForRouteAuthorizationMessage : MRProtocolMessage

@property (readonly, nonatomic) MRAVOutputDevice *route;
@property (readonly, nonatomic) long long inputType;

/* instance methods */
- (id)initWithRoute:(id)route inputType:(long long)type;
- (unsigned long long)type;
@end

#endif /* MRPromptForRouteAuthorizationMessage_h */
