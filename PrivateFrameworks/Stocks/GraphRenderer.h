//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef GraphRenderer_h
#define GraphRenderer_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface GraphRenderer : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  BOOL _cancelled;
}

/* class methods */
+ (id)sharedRenderer;
+ (void)clearSharedRenderer;

/* instance methods */
- (id)init;
- (void)performRenderOperation:(id)operation;
@end

#endif /* GraphRenderer_h */
