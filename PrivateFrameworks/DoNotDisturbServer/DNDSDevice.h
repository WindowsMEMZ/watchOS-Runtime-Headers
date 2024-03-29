//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSDevice_h
#define DNDSDevice_h
@import Foundation;

#include "DNDDevice.h"

@class NSString;

@interface DNDSDevice : DNDDevice

@property (readonly, copy, nonatomic) NSString *identifier;

/* class methods */
+ (id)currentDevice;

/* instance methods */
- (id)_initWithClass:(unsigned long long)class deviceCapabilities:(unsigned long long)capabilities identifier:(id)identifier frameworkVersion:(struct { long long x0; long long x1; long long x2; })version;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* DNDSDevice_h */
