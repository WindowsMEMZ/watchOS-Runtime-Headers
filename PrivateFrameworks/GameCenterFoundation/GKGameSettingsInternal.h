//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKGameSettingsInternal_h
#define GKGameSettingsInternal_h
@import Foundation;

#include "GKInternalRepresentation.h"

@class NSString;

@interface GKGameSettingsInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) long long allowFriendListAccess;

/* class methods */
+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)serverAllowFriendListAccessValue;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
- (id)allowFriendListAccessString;
@end

#endif /* GKGameSettingsInternal_h */
