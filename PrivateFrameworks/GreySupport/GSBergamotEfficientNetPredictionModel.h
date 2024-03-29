//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.0.4.0.0
//
#ifndef GSBergamotEfficientNetPredictionModel_h
#define GSBergamotEfficientNetPredictionModel_h
@import Foundation;

#include "GSCoreMLPredictionHandler-Protocol.h"
#include "bergamotEfficientNet.h"
#include "bergamotEfficientNetIMU.h"

@class NSDictionary, NSString;

@interface GSBergamotEfficientNetPredictionModel : NSObject<GSCoreMLPredictionHandler> {
  /* instance variables */
  bergamotEfficientNet *_ppgAndImuModel;
  bergamotEfficientNetIMU *_imuModel;
  NSDictionary *_parameters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithParameters:(id)parameters;
- (id)predictionForChannels:(id)channels irDropout:(BOOL)dropout modelID:(id *)id modelDescription:(id *)description;
- (id)valueExtractionMap;
- (id)_activeModelMetadata:(BOOL)metadata;
@end

#endif /* GSBergamotEfficientNetPredictionModel_h */
