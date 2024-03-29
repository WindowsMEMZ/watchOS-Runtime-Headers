//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2100.151.0.0.0
//
#ifndef SYDClientProtocolProxy_h
#define SYDClientProtocolProxy_h
@import Foundation;

#include "SYDClientProtocol-Protocol.h"

@interface SYDClientProtocolProxy : NSObject<SYDClientProtocol>

@property (weak, nonatomic) NSObject<SYDClientProtocol> *target;

/* instance methods */
- (id)initWithTarget:(id)target;
- (void)storeDidChangeWithStoreID:(id)id changeDictionary:(id)dictionary reply:(id /* block */)reply;
@end

#endif /* SYDClientProtocolProxy_h */
