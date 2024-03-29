//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFServiceAccessoryType_h
#define HFServiceAccessoryType_h
@import Foundation;

#include "HFAccessoryType.h"

@class NSString;

@interface HFServiceAccessoryType : HFAccessoryType

@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) NSString *subtype;

/* class methods */
+ (id)na_identity;

/* instance methods */
- (id)initWithServiceType:(id)type subtype:(id)subtype;
- (id)description;
- (id)debugDescription;
@end

#endif /* HFServiceAccessoryType_h */
