//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMResultRelay_h
#define MCMResultRelay_h
@import Foundation;

#include "MCMResultBase.h"

@protocol OS_xpc_object;

@interface MCMResultRelay : MCMResultBase

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcReplyFromRelay;

/* instance methods */
- (id)initWithXPCReplyFromRelay:(id)relay;
- (BOOL)encodeResultOntoReply:(id)reply;
@end

#endif /* MCMResultRelay_h */
