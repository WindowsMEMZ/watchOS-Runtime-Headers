//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.0.4.0.0
//
#ifndef GSNeuralNetworkCoreMLPipelineStage_h
#define GSNeuralNetworkCoreMLPipelineStage_h
@import Foundation;

#include "GSPipelineStage.h"
#include "GSBergamotEfficientNetPredictionModel.h"

@class NSMutableArray;

@interface GSNeuralNetworkCoreMLPipelineStage : GSPipelineStage {
  /* instance variables */
  BOOL _filledIMUBuffers;
  unsigned long long _bufferLengthInSeconds;
  NSMutableArray *_channels;
  unsigned long long _predictionFrequencyInHz;
  unsigned long long _predictionFrequencyLiteInHz;
  double _irTransitionDelayThreshold;
  GSBergamotEfficientNetPredictionModel *_bergamotEfficientNetPredictionModel;
  unsigned long long _predictionIndex;
}

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (long long)_currentPredictionFrequencyInHz;
- (void)_processInputData:(id)data;
- (void)_cancel;
- (BOOL)_imuDataBuffersFull;
- (double)_imuDataLatestTimestamp;
- (BOOL)_validateIRDataBuffersForGlobalTimestamp:(double)timestamp predictionFrequencyInHz:(unsigned long long)hz;
- (BOOL)_isIRChannel:(id)irchannel;
@end

#endif /* GSNeuralNetworkCoreMLPipelineStage_h */
