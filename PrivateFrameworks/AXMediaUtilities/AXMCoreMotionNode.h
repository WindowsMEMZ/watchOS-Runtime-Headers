//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMCoreMotionNode_h
#define AXMCoreMotionNode_h
@import Foundation;

#include "AXMSourceNode.h"

@interface AXMCoreMotionNode : AXMSourceNode

@property (nonatomic) double lastSampleTime;
@property (nonatomic) unsigned long long samplesPerSecond;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;
+ (id)title;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)nodeInitialize;
- (void)triggerWithCoreMotionManager:(id)manager deviceOrientation:(long long)orientation cacheKey:(id)key resultHandler:(id /* block */)handler;
@end

#endif /* AXMCoreMotionNode_h */
