//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBArbiterClientFocusContext_h
#define UIKBArbiterClientFocusContext_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class FBSSceneIdentityToken;

@interface UIKBArbiterClientFocusContext : NSObject<NSSecureCoding>

@property (nonatomic) unsigned int contextID;
@property (retain, nonatomic) FBSSceneIdentityToken *sceneIdentity;
@property (retain, nonatomic) FBSSceneIdentityToken *layeringSceneIdentity;

/* class methods */
+ (id)focusContextForSceneIdentity:(id)identity contextID:(unsigned int)id;
+ (id)focusContextForSceneIdentity:(id)identity window:(id)window;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isEqual:(id)equal;
@end

#endif /* UIKBArbiterClientFocusContext_h */
