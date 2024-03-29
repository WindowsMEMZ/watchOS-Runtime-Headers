//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFMACAddress_h
#define HMFMACAddress_h
@import Foundation;

#include "HMFHardwareAddress.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface HMFMACAddress : HMFHardwareAddress<NSCopying, NSSecureCoding>
/* instance methods */
- (id)initWithMACAddressString:(id)string;
- (id)initWithAddressString:(id)string length:(unsigned long long)length;
- (id)initWithAddressData:(id)data;
@end

#endif /* HMFMACAddress_h */
