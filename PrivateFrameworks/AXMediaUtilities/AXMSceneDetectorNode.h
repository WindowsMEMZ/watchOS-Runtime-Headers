//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMSceneDetectorNode_h
#define AXMSceneDetectorNode_h
@import Foundation;

#include "AXMEvaluationNode.h"

@interface AXMSceneDetectorNode : AXMEvaluationNode

@property (nonatomic) unsigned int taxonomyOptions;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;
+ (id)title;
+ (id)possibleSceneClassifications;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)evaluate metrics:(id)metrics;
@end

#endif /* AXMSceneDetectorNode_h */
