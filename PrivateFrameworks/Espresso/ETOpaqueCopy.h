//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.2.3.0.0
//
#ifndef ETOpaqueCopy_h
#define ETOpaqueCopy_h
@import Foundation;

@protocol {shared_ptr<Espresso::abstract_blob_container>="__ptr_"^{abstract_blob_container}"__cntrl_"^{__shared_weak_count}};

@interface ETOpaqueCopy : NSObject {
  /* instance variables */
  struct shared_ptr<Espresso::abstract_blob_container> { struct abstract_blob_container *__ptr_; struct __shared_weak_count *__cntrl_; } blob;
}

/* instance methods */
- (id)initWithAbstractBlobContainer:(void *)container;
- (const void *)getBlob;
@end

#endif /* ETOpaqueCopy_h */
