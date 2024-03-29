//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMFaceprint_h
#define HMFaceprint_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSUUID;

@interface HMFaceprint : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSUUID *modelUUID;
@property (readonly, copy) NSUUID *faceCropUUID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithUUID:(id)uuid data:(id)data modelUUID:(id)uuid faceCropUUID:(id)uuid;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HMFaceprint_h */
