//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 685.60.2.0.0
//
#ifndef TKSEPClientTokenObject_h
#define TKSEPClientTokenObject_h
@import Foundation;

#include "TKClientTokenObject.h"
#include "TKSEPKey.h"

@interface TKSEPClientTokenObject : TKClientTokenObject

@property (readonly, nonatomic) TKSEPKey *key;

/* instance methods */
- (id)initWithSession:(id)session key:(id)key error:(id *)error;
- (id)withError:(id *)error invoke:(id /* block */)invoke;
- (BOOL)deleteWithError:(id *)error;
- (id)operation:(long long)operation data:(id)data algorithms:(id)algorithms parameters:(id)parameters error:(id *)error;
@end

#endif /* TKSEPClientTokenObject_h */
