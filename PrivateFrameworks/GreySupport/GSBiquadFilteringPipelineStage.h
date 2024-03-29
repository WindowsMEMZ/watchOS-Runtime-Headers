//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.0.4.0.0
//
#ifndef GSBiquadFilteringPipelineStage_h
#define GSBiquadFilteringPipelineStage_h
@import Foundation;

#include "GSPipelineStage.h"
#include "GSBiquadFilter.h"

@class NSArray, NSDictionary;

@interface GSBiquadFilteringPipelineStage : GSPipelineStage {
  /* instance variables */
  GSBiquadFilter *_filter;
  NSArray *_orderedChannels;
  NSArray *_remappedChannelNames;
}

@property (retain, nonatomic) NSDictionary *modelInputIndexToChannelName;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)setup;
- (void)_processInputData:(id)data;
@end

#endif /* GSBiquadFilteringPipelineStage_h */
