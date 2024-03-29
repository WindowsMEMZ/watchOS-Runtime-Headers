//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFMultipleValueParameterStateEntry_h
#define WFMultipleValueParameterStateEntry_h
@import Foundation;

#include "WFParameterState-Protocol.h"

@class NSUUID;

@interface WFMultipleValueParameterStateEntry : NSObject

@property (readonly, nonatomic) NSUUID *identity;
@property (readonly, nonatomic) NSObject<WFParameterState> *parameterState;

/* instance methods */
- (id)initWithIdentity:(id)identity parameterState:(id)state;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* WFMultipleValueParameterStateEntry_h */
