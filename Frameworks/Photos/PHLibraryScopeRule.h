//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHLibraryScopeRule_h
#define PHLibraryScopeRule_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class PLLibraryScopeRule;

@interface PHLibraryScopeRule : NSObject<NSCopying>

@property (retain, nonatomic) PLLibraryScopeRule *proxyObject;
@property (readonly, nonatomic) PLLibraryScopeRule *plRepresentation;

/* class methods */
+ (id)dataFromRules:(id)rules;
+ (id)fetchLibraryScopeRulesForLibraryScope:(id)scope options:(id)options;
+ (id)suggestedStartDateForRules:(id)rules autoSharePolicy:(short)policy options:(id)options error:(id *)error;
+ (unsigned long long)estimatedAssetCountForRules:(id)rules autoSharePolicy:(short)policy imageCount:(unsigned long long *)count videoCount:(unsigned long long *)count audioCount:(unsigned long long *)count itemCount:(unsigned long long *)count options:(id)options error:(id *)error;
+ (id)_estimatedAssetsForRules:(id)rules autoSharePolicy:(short)policy options:(id)options error:(id *)error;
+ (BOOL)generateDefaultRulesForLibraryScope:(id)scope options:(id)options error:(id *)error;

/* instance methods */
- (id)forwardingTargetForSelector:(SEL)selector;
- (id)initWithProxyObject:(id)object;
- (id)initWithQuery:(id)query;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)addCondition:(id)condition;
- (void)removeConditionOfType:(Class)type;
- (id)dateRangeCondition;
- (id)personCondition;
- (id)unknownConditions;
- (id)description;
@end

#endif /* PHLibraryScopeRule_h */
