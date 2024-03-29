//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIRolloutHistoryRecord_h
#define TRIRolloutHistoryRecord_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSString;
@protocol NSString<TRIFactorPackSetId;

@interface TRIRolloutHistoryRecord : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSDate *eventLogTime;
@property (readonly, nonatomic) unsigned char eventType;
@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) NSString *rampId;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSArray *namespaces;

/* class methods */
+ (id)recordWithEventLogTime:(id)time eventType:(unsigned char)type rolloutId:(id)id rampId:(id)id factorPackSetId:(id)id deploymentId:(int)id namespaces:(id)namespaces;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithEventLogTime:(id)time eventType:(unsigned char)type rolloutId:(id)id rampId:(id)id factorPackSetId:(id)id deploymentId:(int)id namespaces:(id)namespaces;
- (id)copyWithReplacementEventLogTime:(id)time;
- (id)copyWithReplacementEventType:(unsigned char)type;
- (id)copyWithReplacementRolloutId:(id)id;
- (id)copyWithReplacementRampId:(id)id;
- (id)copyWithReplacementFactorPackSetId:(id)id;
- (id)copyWithReplacementDeploymentId:(int)id;
- (id)copyWithReplacementNamespaces:(id)namespaces;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToRecord:(id)record;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)init;
@end

#endif /* TRIRolloutHistoryRecord_h */
