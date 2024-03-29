//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIXPCInternalSystemServiceWrapper_h
#define TRIXPCInternalSystemServiceWrapper_h
@import Foundation;

#include "TRIXPCHandlerWrapper.h"
#include "TRIXPCInternalSystemServiceProtocol-Protocol.h"

@interface TRIXPCInternalSystemServiceWrapper : TRIXPCHandlerWrapper<TRIXPCInternalSystemServiceProtocol>
/* instance methods */
- (id)initWithUnderlyingHandler:(id)handler;
@end

#endif /* TRIXPCInternalSystemServiceWrapper_h */
