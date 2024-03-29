//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIBackgroundMLTaskRecord_h
#define TRIBackgroundMLTaskRecord_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TRIClientBMLTArtifact.h"

@class NSDate, NSNumber, NSString, TRIBMLTDeployment;
@protocol NSString<TRIFactorPackSetId;

@interface TRIBackgroundMLTaskRecord : NSObject<NSCopying>

@property (readonly, nonatomic) TRIBMLTDeployment *bmltDeployment;
@property (readonly, nonatomic) NSString *pluginId;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *activeFactorPackSetId;
@property (readonly, nonatomic) NSNumber *activeTargetingRuleIndex;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *targetedFactorPackSetId;
@property (readonly, nonatomic) NSNumber *targetedTargetingRuleIndex;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) TRIClientBMLTArtifact *artifact;

/* class methods */
+ (id)recordWithBmltDeployment:(id)deployment pluginId:(id)id activeFactorPackSetId:(id)id activeTargetingRuleIndex:(id)index targetedFactorPackSetId:(id)id targetedTargetingRuleIndex:(id)index status:(long long)status endDate:(id)date artifact:(id)artifact;

/* instance methods */
- (BOOL)isExpired;
- (id)initWithBmltDeployment:(id)deployment pluginId:(id)id activeFactorPackSetId:(id)id activeTargetingRuleIndex:(id)index targetedFactorPackSetId:(id)id targetedTargetingRuleIndex:(id)index status:(long long)status endDate:(id)date artifact:(id)artifact;
- (id)copyWithReplacementBmltDeployment:(id)deployment;
- (id)copyWithReplacementPluginId:(id)id;
- (id)copyWithReplacementActiveFactorPackSetId:(id)id;
- (id)copyWithReplacementActiveTargetingRuleIndex:(id)index;
- (id)copyWithReplacementTargetedFactorPackSetId:(id)id;
- (id)copyWithReplacementTargetedTargetingRuleIndex:(id)index;
- (id)copyWithReplacementStatus:(long long)status;
- (id)copyWithReplacementEndDate:(id)date;
- (id)copyWithReplacementArtifact:(id)artifact;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToRecord:(id)record;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)init;
@end

#endif /* TRIBackgroundMLTaskRecord_h */
