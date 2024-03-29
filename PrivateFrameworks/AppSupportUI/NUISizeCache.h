//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 43.4.0.0.0
//
#ifndef NUISizeCache_h
#define NUISizeCache_h
@import Foundation;

@protocol {nui_size_cache="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<std::pair<CGSize, CGSize> *, std::allocator<std::pair<CGSize, CGSize>>>="__value_"^v}};

@interface NUISizeCache : NSObject {
  /* instance variables */
  struct nui_size_cache { void *__begin_; void *__end_; struct __compressed_pair<std::pair<CGSize, CGSize> *, std::allocator<std::pair<CGSize, CGSize>>> { void *__value_; } __end_cap_; } _sizeCache;
  BOOL _threadSafe;
}

/* instance methods */
- (id)initForAsynchronousAccess:(BOOL)access;
- (void)dealloc;
- (BOOL)getSize:(struct CGSize { double x0; double x1; } *)size forTargetSize:(struct CGSize { double x0; double x1; })size isSizeDependentOnPerpendicularAxis:(BOOL)axis;
- (void)insertSize:(struct CGSize { double x0; double x1; })size forTargetSize:(struct CGSize { double x0; double x1; })size;
- (void)invalidateCache;
@end

#endif /* NUISizeCache_h */
