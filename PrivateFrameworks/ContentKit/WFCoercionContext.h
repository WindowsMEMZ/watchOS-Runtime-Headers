//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFCoercionContext_h
#define WFCoercionContext_h
@import Foundation;

#include "WFCoercionOptions.h"

@class WFType;

@interface WFCoercionContext : NSObject

@property (readonly, nonatomic) WFType *requestedType;
@property (readonly, nonatomic) WFCoercionOptions *options;

/* instance methods */
- (id)initWithRequestedType:(id)type options:(id)options;
@end

#endif /* WFCoercionContext_h */
