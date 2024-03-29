//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSModeAssertionInvalidationRequest_h
#define DNDSModeAssertionInvalidationRequest_h
@import Foundation;

#include "DNDSModeAssertionInvalidationPredicate.h"
#include "DNDSModernAssertionSourceResolution-Protocol.h"
#include "NSCopying-Protocol.h"

@class DNDModeAssertionInvalidationDetails, DNDModeAssertionSource, NSDate, NSString, NSUUID;

@interface DNDSModeAssertionInvalidationRequest : NSObject<DNDSModernAssertionSourceResolution, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) DNDSModeAssertionInvalidationPredicate *predicate;
@property (readonly, copy, nonatomic) NSDate *requestDate;
@property (readonly, copy, nonatomic) DNDModeAssertionInvalidationDetails *details;
@property (readonly, copy, nonatomic) DNDModeAssertionSource *source;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) unsigned long long reasonOverride;

/* class methods */
+ (id)requestWithPredicate:(id)predicate requestDate:(id)date source:(id)source reason:(unsigned long long)reason;
+ (id)requestWithPredicate:(id)predicate requestDate:(id)date details:(id)details source:(id)source reason:(unsigned long long)reason reasonOverride:(unsigned long long)override;

/* instance methods */
- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)identifier localDeviceIdentifier:(id)identifier remoteDeviceIdentifier:(id)identifier;
- (id)initWithUUID:(id)uuid predicate:(id)predicate requestDate:(id)date details:(id)details source:(id)source reason:(unsigned long long)reason reasonOverride:(unsigned long long)override;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* DNDSModeAssertionInvalidationRequest_h */
