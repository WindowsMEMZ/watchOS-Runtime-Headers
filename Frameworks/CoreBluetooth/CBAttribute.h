//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 172.8.0.0.0
//
#ifndef CBAttribute_h
#define CBAttribute_h
@import Foundation;

#include "CBUUID.h"

@interface CBAttribute : NSObject

@property (readonly, nonatomic) CBUUID *UUID;

/* instance methods */
- (id)initWithUUID:(id)uuid;
@end

#endif /* CBAttribute_h */
