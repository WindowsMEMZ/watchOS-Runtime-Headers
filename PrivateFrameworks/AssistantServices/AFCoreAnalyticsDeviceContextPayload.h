//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFCoreAnalyticsDeviceContextPayload_h
#define AFCoreAnalyticsDeviceContextPayload_h
@import Foundation;

#include "AFDictionaryConvertible-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface AFCoreAnalyticsDeviceContextPayload : NSObject<NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (readonly, copy, nonatomic) NSString *nearbyProductType;
@property (readonly, copy, nonatomic) NSString *proximity;
@property (readonly, copy, nonatomic) NSNumber *alarmFiring;
@property (readonly, copy, nonatomic) NSNumber *timerFiring;
@property (readonly, copy, nonatomic) NSString *playbackState;
@property (readonly, copy, nonatomic) NSNumber *playbackRecency;
@property (readonly, copy, nonatomic) NSString *homeAnnouncementState;
@property (readonly, copy, nonatomic) NSNumber *homeAnnouncementRecency;
@property (readonly, copy, nonatomic) NSString *nearbyDevicesRequestIdentifier;
@property (readonly, copy, nonatomic) NSString *targetedResult;
@property (readonly, copy, nonatomic) NSString *contextIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithBuilder:(id /* block */)builder;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)mutatedCopyWithMutator:(id /* block */)mutator;
- (id)initWithBuilder:(id /* block */)builder;
- (id)init;
- (id)initWithNearbyProductType:(id)type proximity:(id)proximity alarmFiring:(id)firing timerFiring:(id)firing playbackState:(id)state playbackRecency:(id)recency homeAnnouncementState:(id)state homeAnnouncementRecency:(id)recency nearbyDevicesRequestIdentifier:(id)identifier targetedResult:(id)result contextIdentifier:(id)identifier;
- (id)_descriptionWithIndent:(unsigned long long)indent;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)buildDictionaryRepresentation;
@end

#endif /* AFCoreAnalyticsDeviceContextPayload_h */
