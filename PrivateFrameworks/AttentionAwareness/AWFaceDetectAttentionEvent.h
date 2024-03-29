//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 137.60.2.0.0
//
#ifndef AWFaceDetectAttentionEvent_h
#define AWFaceDetectAttentionEvent_h
@import Foundation;

#include "AWAttentionEvent.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface AWFaceDetectAttentionEvent : AWAttentionEvent<NSSecureCoding>

@property (readonly, nonatomic) BOOL metadataValid;
@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) double yaw;
@property (readonly, nonatomic) double roll;
@property (readonly, nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) unsigned long long faceState;
@property (readonly, nonatomic) double frameNumber;
@property (readonly, nonatomic) BOOL isCameraObstructed;
@property (readonly, nonatomic) unsigned long long metadataType;
@property (readonly, nonatomic) NSArray *motionData;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)validateMask;
- (id)initWithTimestamp:(double)timestamp tagIndex:(unsigned long long)index faceMetadata:(struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; double x5; unsigned long long x6; double x7; unsigned long long x8; float x9[16] BOOL x10; } *)metadata;
- (id)description;
- (BOOL)isMetadataValid;
@end

#endif /* AWFaceDetectAttentionEvent_h */
