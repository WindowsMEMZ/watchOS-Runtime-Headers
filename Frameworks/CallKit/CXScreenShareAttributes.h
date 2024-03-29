//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef CXScreenShareAttributes_h
#define CXScreenShareAttributes_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSUUID, NSValue;

@interface CXScreenShareAttributes : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSNumber *frameRate;
@property (retain, nonatomic) NSNumber *displayID;
@property (nonatomic) BOOL windowed;
@property (retain, nonatomic) NSUUID *windowUUID;
@property (nonatomic) long long deviceFamily;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSNumber *displayScale;
@property (retain, nonatomic) NSNumber *scaleFactor;
@property (copy, nonatomic) NSValue *originalResolution;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)customDescription;
- (id)sanitizedCopyWithZone:(struct _NSZone *)zone;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isWindowed;
@end

#endif /* CXScreenShareAttributes_h */
