//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef NSURL_StoreCacheAdditions_h
#define NSURL_StoreCacheAdditions_h
@import Foundation;

@interface NSURL (StoreCacheAdditions)
/* class methods */
+ (id)wf_cacheDirectory;
+ (id)wf_inMemoryAddress;

/* instance methods */
- (id)wf_URLWithTracking:(id)tracking;
- (BOOL)wf_URLHasParameter:(id)parameter;
- (BOOL)wf_isInMemoryAddress;
@end

#endif /* NSURL_StoreCacheAdditions_h */
