//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICAMSBagValuePromise_h
#define ICAMSBagValuePromise_h
@import Foundation;

#include "AMSPromise.h"

@class NSString;

@interface ICAMSBagValuePromise : AMSPromise

@property (readonly, copy, nonatomic) NSString *bagKey;
@property (readonly, nonatomic) unsigned long long bagValueType;

/* instance methods */
- (id)initWithBagKey:(id)key bagValueType:(unsigned long long)type;
@end

#endif /* ICAMSBagValuePromise_h */
