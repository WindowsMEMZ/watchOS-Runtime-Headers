//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 21.20.7.0.0
//
#ifndef UVObjCSingleFireEvent_h
#define UVObjCSingleFireEvent_h
@import Foundation;

@class _TtC18PreviewsFoundation19ObjcSingleFireEvent;

@interface UVObjCSingleFireEvent : NSObject {
  /* instance variables */
  PreviewsFoundation.ObjcSingleFireEvent *_event;
}

@property (readonly, nonatomic) BOOL hasFired;

/* instance methods */
- (id)init;
- (void)fire;
- (void)cancel;
- (void)addObserver:(id /* block */)observer;
@end

#endif /* UVObjCSingleFireEvent_h */
