//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef IPMutableRepeatedUInt64_h
#define IPMutableRepeatedUInt64_h
@import Foundation;

#include "IPRepeatedUInt64.h"

@interface IPMutableRepeatedUInt64 : IPRepeatedUInt64
/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (void)appendUInt64Value:(unsigned long long)value;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IPMutableRepeatedUInt64_h */
