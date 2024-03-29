//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef RegionalResourceObserver_h
#define RegionalResourceObserver_h
@import Foundation;

@interface RegionalResourceObserver : NSObject {
  /* instance variables */
  void * _resourceProvider;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _resourceProviderLock;
  id _observer;
}

/* instance methods */
- (id)initWithResourceProvider:(void *)provider;
- (void)clearProvider;
@end

#endif /* RegionalResourceObserver_h */
