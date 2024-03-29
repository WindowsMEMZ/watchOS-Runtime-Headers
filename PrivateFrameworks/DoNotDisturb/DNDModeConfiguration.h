//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDModeConfiguration_h
#define DNDModeConfiguration_h
@import Foundation;

#include "DNDConfiguration.h"
#include "DNDDiffBuilding-Protocol.h"
#include "DNDMode.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSString;

@interface DNDModeConfiguration : NSObject<DNDDiffBuilding, NSCopying, NSMutableCopying, NSSecureCoding> {
  /* instance variables */
  BOOL _hasSecureData;
}

@property (readonly, nonatomic) struct { long long x0; long long x1; long long x2; } lastModifiedByVersion;
@property (readonly, copy, nonatomic) NSString *lastModifiedByDeviceID;
@property (readonly, copy, nonatomic) DNDMode *mode;
@property (readonly, copy, nonatomic) DNDConfiguration *configuration;
@property (readonly, copy, nonatomic) NSArray *triggers;
@property (readonly, nonatomic) unsigned long long impactsAvailability;
@property (readonly, nonatomic) unsigned long long dimsLockScreen;
@property (readonly, @dynamic, nonatomic) unsigned long long allowSmartEntry;
@property (readonly, copy, nonatomic) NSDate *created;
@property (readonly, copy, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) BOOL automaticallyGenerated;
@property (readonly, nonatomic) BOOL supportedConfiguration;
@property (readonly, nonatomic) long long compatibilityVersion;
@property (readonly, nonatomic) long long resolvedCompatibilityVersion;
@property (readonly, nonatomic) long long rawResolvedCompatibilityVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultModeConfiguration;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithMode:(id)mode configuration:(id)configuration triggers:(id)triggers;
- (id)initWithMode:(id)mode configuration:(id)configuration triggers:(id)triggers impactsAvailability:(unsigned long long)availability dimsLockScreen:(unsigned long long)screen created:(id)created lastModified:(id)modified automaticallyGenerated:(BOOL)generated compatibilityVersion:(long long)version lastModifiedByVersion:(struct { long long x0; long long x1; long long x2; })version lastModifiedByDeviceID:(id)id;
- (id)_initWithModeConfiguration:(id)configuration;
- (id)mergeDecision:(id)decision reason:(id)reason;
- (id)mergeWithRemoteModeConfiguration:(id)configuration;
- (BOOL)hasSecureData;
- (BOOL)isSupportedConfiguration;
- (void)log:(id)log withMessage:(id)message;
- (BOOL)isEqual:(id)equal;
- (id)shortDescription;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)diffAgainstObject:(id)object usingDiffBuilder:(id)builder withDescription:(id)description;
- (BOOL)_containsSecureTriggers:(id)triggers;
- (long long)_maxTriggerCompatibilityVersion:(id)version;
- (BOOL)isAutomaticallyGenerated;
@end

#endif /* DNDModeConfiguration_h */
