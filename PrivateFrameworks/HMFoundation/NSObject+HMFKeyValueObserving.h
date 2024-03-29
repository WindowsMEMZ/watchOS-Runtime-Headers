//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef NSObject_HMFKeyValueObserving_h
#define NSObject_HMFKeyValueObserving_h
@import Foundation;

@interface NSObject (HMFKeyValueObserving)
/* instance methods */
- (id)hmf_registerObserverForKeyPath:(id)path options:(unsigned long long)options handler:(id /* block */)handler;
@end

#endif /* NSObject_HMFKeyValueObserving_h */
