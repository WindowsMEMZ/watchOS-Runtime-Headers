//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef _GGLDisplayLinkTarget_h
#define _GGLDisplayLinkTarget_h
@import Foundation;

@protocol {weak_ptr<ggl::RunLoop::_RunLoopCallbacker>="__ptr_"^{_RunLoopCallbacker}"__cntrl_"^{__shared_weak_count}};

@interface _GGLDisplayLinkTarget : NSObject {
  /* instance variables */
  struct weak_ptr<ggl::RunLoop::_RunLoopCallbacker> { struct _RunLoopCallbacker *__ptr_; struct __shared_weak_count *__cntrl_; } _callbacker;
}

/* instance methods */
- (id)initWithCallbacker:(struct weak_ptr<ggl::RunLoop::_RunLoopCallbacker> { struct _RunLoopCallbacker * x0; struct __shared_weak_count * x1; })callbacker;
- (void)displayLinkFired:(id)fired;
@end

#endif /* _GGLDisplayLinkTarget_h */
