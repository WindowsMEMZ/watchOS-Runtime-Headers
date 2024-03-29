//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDOnboardingCompletionEntity_h
#define HDOnboardingCompletionEntity_h
@import Foundation;

#include "HDHealthEntity.h"

@interface HDOnboardingCompletionEntity : HDHealthEntity
/* class methods */
+ (id)onboardingCompletionsForHighestVersionOfFeatureIdentifier:(id)identifier transaction:(id)transaction error:(id *)error;
+ (id)onboardingCompletionsForLowestVersionOfFeatureIdentifier:(id)identifier transaction:(id)transaction error:(id *)error;
+ (BOOL)enumerateAllOnboardingCompletionsWithTransaction:(id)transaction predicate:(id)predicate error:(id *)error enumerationHandler:(id /* block */)handler;
+ (id)insertOnboardingCompletion:(id)completion syncIdentity:(long long)identity transaction:(id)transaction error:(id *)error;
+ (id)insertCodableOnboardingCompletions:(id)completions syncProvenance:(long long)provenance transaction:(id)transaction error:(id *)error;
+ (BOOL)deleteAllCompletionsForFeatureIdentifier:(id)identifier syncIdentity:(long long)identity transaction:(id)transaction error:(id *)error;
+ (id)propertyForSyncProvenance;
+ (id)propertyForSyncIdentity;
+ (long long)protectionClass;
+ (id)entityEncoderForProfile:(id)profile transaction:(id)transaction purpose:(long long)purpose encodingOptions:(id)options authorizationFilter:(id /* block */)filter;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;

/* instance methods */
- (id)onboardingCompletionWithTransaction:(id)transaction error:(id *)error;
@end

#endif /* HDOnboardingCompletionEntity_h */
