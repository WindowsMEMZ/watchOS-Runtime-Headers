//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICActionError_h
#define PUICActionError_h
@import Foundation;

#include "NSError.h"

@interface PUICActionError : NSError
/* class methods */
+ (id)errorWithCode:(unsigned long long)code description:(id)description;
@end

#endif /* PUICActionError_h */
