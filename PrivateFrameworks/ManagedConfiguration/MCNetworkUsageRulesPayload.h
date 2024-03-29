//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCNetworkUsageRulesPayload_h
#define MCNetworkUsageRulesPayload_h
@import Foundation;

#include "MCPayload.h"

@class NSArray;

@interface MCNetworkUsageRulesPayload : MCPayload

@property (copy, nonatomic) NSArray *applicationRules;
@property (copy, nonatomic) NSArray *SIMRules;

/* class methods */
+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

/* instance methods */
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;
- (id)stubDictionary;
- (id)verboseDescription;
- (id)payloadDescriptionKeyValueSections;
- (id)installationWarnings;
@end

#endif /* MCNetworkUsageRulesPayload_h */
