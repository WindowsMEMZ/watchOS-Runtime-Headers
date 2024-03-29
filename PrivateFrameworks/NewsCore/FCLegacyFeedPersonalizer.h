//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCLegacyFeedPersonalizer_h
#define FCLegacyFeedPersonalizer_h
@import Foundation;

#include "FCFeedPersonalizing-Protocol.h"
#include "FCPersonalizationFunctionProviding-Protocol.h"

@class NSString;

@interface FCLegacyFeedPersonalizer : NSObject<FCFeedPersonalizing, FCPersonalizationFunctionProviding>

@property (readonly, nonatomic) NSObject<FCFeedPersonalizing> *feedPersonalizer;
@property (readonly, nonatomic) NSObject<FCPersonalizationFunctionProviding> *functionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithFeedPersonalizer:(id)personalizer functionProvider:(id)provider;
- (void)prepareForUseWithCompletionHandler:(id /* block */)handler;
- (id)rankTagIDsDescending:(id)descending;
- (id)scoresForTagIDs:(id)ids;
- (double)decayedPublisherDiversificationPenalty;
- (id)limitItemsByFlowRate:(id)rate timeInterval:(double)interval publisherCount:(unsigned long long)count;
- (id)limitItemsByMinimumItemQuality:(id)quality;
- (id)sortItems:(id)items options:(long long)options configurationSet:(long long)set;
- (id)diversifyItems:(id)items limit:(unsigned long long)limit;
@end

#endif /* FCLegacyFeedPersonalizer_h */
