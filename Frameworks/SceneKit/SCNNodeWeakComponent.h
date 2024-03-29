//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNNodeWeakComponent_h
#define SCNNodeWeakComponent_h
@import Foundation;

#include "SCNNodeComponent.h"

@interface SCNNodeWeakComponent : NSObject

@property (nonatomic) long long type;
@property (weak, nonatomic) id component;
@property (retain, nonatomic) SCNNodeComponent *next;

/* instance methods */
- (id)initWithType:(long long)type component:(id)component;
@end

#endif /* SCNNodeWeakComponent_h */
