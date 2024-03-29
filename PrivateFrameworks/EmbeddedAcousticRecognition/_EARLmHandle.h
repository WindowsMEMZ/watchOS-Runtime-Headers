//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef _EARLmHandle_h
#define _EARLmHandle_h
@import Foundation;

@protocol struct shared_ptr<kaldi::quasar::LmHandle> { struct LmHandle * x0; struct __shared_weak_count * x1; }, {shared_ptr<kaldi::quasar::LmHandle>="__ptr_"^{LmHandle}"__cntrl_"^{__shared_weak_count}};

@interface _EARLmHandle : NSObject

@property (readonly, nonatomic) struct shared_ptr<kaldi::quasar::LmHandle> { struct LmHandle * x0; struct __shared_weak_count * x1; } handle;

/* instance methods */
- (id)_initWithHandle:(struct shared_ptr<kaldi::quasar::LmHandle> { struct LmHandle * x0; struct __shared_weak_count * x1; })handle;
@end

#endif /* _EARLmHandle_h */
