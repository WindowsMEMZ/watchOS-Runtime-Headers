//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 162.13.0.0.0
//
#ifndef SNAudioLevelMeasurer_h
#define SNAudioLevelMeasurer_h
@import Foundation;

#include "SNAnalyzing-Protocol.h"

@class NSString;
@protocol struct shared_ptr<DSPGraph::Graph> { struct Graph * x0; struct __shared_weak_count * x1; }, {shared_ptr<DSPGraph::Graph>="__ptr_"^{Graph}"__cntrl_"^{__shared_weak_count}};

@interface SNAudioLevelMeasurer : NSObject<SNAnalyzing> {
  /* instance variables */
  float _inputSensitivity;
}

@property (readonly, nonatomic) void * resultsBox;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph * x0; struct __shared_weak_count * x1; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)resultsFromBox:(void *)box renderedWithFrameCount:(int)count;
- (BOOL)adaptToSystemConfiguration:(id)configuration error:(id *)error;
- (id)sharedProcessorConfiguration;
@end

#endif /* SNAudioLevelMeasurer_h */
