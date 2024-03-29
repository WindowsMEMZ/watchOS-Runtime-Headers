//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NACProxyVolumeControlTarget_h
#define NACProxyVolumeControlTarget_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface NACProxyVolumeControlTarget : NSObject<NSCopying, NSSecureCoding>

@property (retain, nonatomic) NSNumber *originIdentifier;
@property (retain, nonatomic) NSString *category;
@property (readonly, nonatomic) BOOL pairedDevice;

/* class methods */
+ (id)volumeControlTargetWithCategory:(id)category;
+ (id)volumeControlTargetWithOriginIdentifier:(id)identifier;
+ (BOOL)_isValidOriginIdentifier:(id)identifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithOriginIdentifier:(id)identifier category:(id)category;
- (BOOL)isPairedDevice;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* NACProxyVolumeControlTarget_h */
