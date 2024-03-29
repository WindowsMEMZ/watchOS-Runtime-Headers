//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKSWindowServerHitTestSecurityAnalysis_h
#define BKSWindowServerHitTestSecurityAnalysis_h
@import Foundation;

#include "BSDescriptionStreamable-Protocol.h"
#include "BSProtobufSerializable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSString;

@interface BKSWindowServerHitTestSecurityAnalysis : NSObject<BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } cumulativeLayerTransform;
@property (readonly, nonatomic) float cumulativeOpacity;
@property (readonly, nonatomic) BOOL hasInsecureFilter;
@property (readonly, nonatomic) BOOL parentsHaveInsecureLayerProperties;
@property (readonly, nonatomic) unsigned int occlusionMask;
@property (readonly, nonatomic) float occlusionPercentage;
@property (readonly, nonatomic) long long occlusionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)build:(id /* block */)build;
+ (id)new;
+ (id)protobufSchema;

/* instance methods */
- (id)init;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (void)appendDescriptionToFormatter:(id)formatter;
- (id)initForProtobufDecoding;
@end

#endif /* BKSWindowServerHitTestSecurityAnalysis_h */
