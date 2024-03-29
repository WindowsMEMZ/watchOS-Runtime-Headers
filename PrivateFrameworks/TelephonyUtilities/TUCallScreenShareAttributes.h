//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUCallScreenShareAttributes_h
#define TUCallScreenShareAttributes_h
@import Foundation;

#include "TUScreenShareAttributes-Protocol.h"

@class NSNumber, NSString, NSUUID, NSValue;

@interface TUCallScreenShareAttributes : NSObject<TUScreenShareAttributes>

@property (nonatomic) long long deviceFamily;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSNumber *displayScale;
@property (retain, nonatomic) NSNumber *scaleFactor;
@property (retain, nonatomic) NSNumber *frameRate;
@property (retain, nonatomic) NSNumber *displayID;
@property (retain, nonatomic) NSValue *originalResolution;
@property (nonatomic) BOOL windowed;
@property (retain, nonatomic) NSUUID *windowUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultAttributes;
+ (long long)currentDeviceFamily;
+ (id)defaultDisplayScale;
+ (id)defaultScaleFactor;
+ (id)originalResolutionWithContentScale:(id)scale contentRect:(id)rect displayScale:(id)scale;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAttributes:(id)attributes;
- (BOOL)isSignificantChangeFromAttributes:(id)attributes;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToScreenShareAttributes:(id)attributes;
- (void)setResolutionAttributesWithContentScale:(id)scale contentRect:(id)rect displayScale:(id)scale;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isWindowed;
@end

#endif /* TUCallScreenShareAttributes_h */
