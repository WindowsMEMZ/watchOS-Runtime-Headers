//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BPSBookmarkableEnumerator_h
#define BPSBookmarkableEnumerator_h
@import Foundation;

#include "NSEnumerator.h"

@interface BPSBookmarkableEnumerator : NSEnumerator
/* instance methods */
- (id)nextObject;
- (id)bookmark;
- (id)validateBookmark:(id)bookmark;
- (void)applyBookmark:(id)bookmark;
- (void)reset;
- (id)bpsPublisher;
@end

#endif /* BPSBookmarkableEnumerator_h */
