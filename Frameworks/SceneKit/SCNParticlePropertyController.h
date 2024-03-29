//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNParticlePropertyController_h
#define SCNParticlePropertyController_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SCNNode.h"

@class CAAnimation, NSString;

@interface SCNParticlePropertyController : NSObject<NSSecureCoding, NSCopying> {
  /* instance variables */
  id _c3dAnimation;
}

@property (retain, nonatomic) CAAnimation *animation;
@property (nonatomic) long long inputMode;
@property (nonatomic) double inputScale;
@property (nonatomic) double inputBias;
@property (weak, nonatomic) SCNNode *inputOrigin;
@property (copy, nonatomic) NSString *inputProperty;

/* class methods */
+ (id)particlePropertyControllerWithAnimation:(id)animation;
+ (id)controllerWithAnimation:(id)animation;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (void)setC3dAnimation:(id)animation;
- (id)c3dAnimation;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copy;
- (void)_customEncodingOfSCNParticlePropertyController:(id)controller;
- (void)_customDecodingOfSCNParticlePropertyController:(id)controller;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* SCNParticlePropertyController_h */
