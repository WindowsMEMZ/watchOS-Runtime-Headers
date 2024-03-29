//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTSettingsApplicationInfo_h
#define BLTSettingsApplicationInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString, UIImage;

@interface BLTSettingsApplicationInfo : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *remoteLocalizedName;
@property (readonly, nonatomic) UIImage *icon;

/* class methods */
+ (id)applicationInfoWithRemoteLocalizedName:(id)name icon:(id)icon;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRemoteLocalizedName:(id)name icon:(id)icon;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* BLTSettingsApplicationInfo_h */
