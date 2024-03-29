//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 162.13.0.0.0
//
#ifndef SNDSPGraph_h
#define SNDSPGraph_h
@import Foundation;

@protocol {shared_ptr<DSPGraph::Graph>="__ptr_"^{Graph}"__cntrl_"^{__shared_weak_count}};

@interface SNDSPGraph : NSObject {
  /* instance variables */
  struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
}

/* instance methods */
- (id)init;
@end

#endif /* SNDSPGraph_h */
