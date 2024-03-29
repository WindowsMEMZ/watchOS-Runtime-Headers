//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRUpdateActiveSystemEndpointMessage_h
#define MRUpdateActiveSystemEndpointMessage_h
@import Foundation;

#include "MRProtocolMessage.h"
#include "MRUpdateActiveSystemEndpointRequest.h"

@interface MRUpdateActiveSystemEndpointMessage : MRProtocolMessage

@property (readonly, nonatomic) MRUpdateActiveSystemEndpointRequest *request;

/* instance methods */
- (id)initWithUnderlyingCodableMessage:(id)message error:(id)error;
- (id)initWithRequest:(id)request;
- (unsigned long long)type;
@end

#endif /* MRUpdateActiveSystemEndpointMessage_h */
