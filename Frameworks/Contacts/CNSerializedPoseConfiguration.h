//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNSerializedPoseConfiguration_h
#define CNSerializedPoseConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class AVTAvatarPhysicalizedPose, NSString;

@interface CNSerializedPoseConfiguration : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *poseName;
@property (readonly, copy, nonatomic) AVTAvatarPhysicalizedPose *pose;

/* class methods */
+ (id)log;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPoseName:(id)name pose:(id)pose;
- (id)initWithPoseConfiguration:(id)configuration;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CNSerializedPoseConfiguration_h */
