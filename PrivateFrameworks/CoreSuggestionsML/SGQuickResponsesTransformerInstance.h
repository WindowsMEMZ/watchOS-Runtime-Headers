//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGQuickResponsesTransformerInstance_h
#define SGQuickResponsesTransformerInstance_h
@import Foundation;

#include "PMLTransformerProtocol-Protocol.h"
#include "SGModelSampler.h"
#include "SGModelSource.h"
#include "SGQuickResponsesConfig.h"

@interface SGQuickResponsesTransformerInstance : NSObject

@property (readonly, nonatomic) SGQuickResponsesConfig *config;
@property (readonly, nonatomic) NSObject<PMLTransformerProtocol> *featurizer;
@property (readonly, nonatomic) SGModelSource *source;
@property (readonly, nonatomic) NSObject<PMLTransformerProtocol> *labeler;
@property (readonly, nonatomic) SGModelSampler *sampler;

/* instance methods */
- (id)initWithConfig:(id)config featurizer:(id)featurizer source:(id)source labeler:(id)labeler sampler:(id)sampler;
@end

#endif /* SGQuickResponsesTransformerInstance_h */
