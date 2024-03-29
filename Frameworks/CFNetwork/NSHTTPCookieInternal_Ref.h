//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef NSHTTPCookieInternal_Ref_h
#define NSHTTPCookieInternal_Ref_h
@import Foundation;

#include "NSHTTPCookieInternal.h"

@interface NSHTTPCookieInternal_Ref : NSHTTPCookieInternal {
  /* instance variables */
  struct CompactHTTPCookieReference { undefined * * x0; struct CompactCookieArray * x1; struct CompactCookieHeader * x2; } * _fromRef;
}

/* instance methods */
- (struct HTTPCookie { undefined * * x0; } *)_inner;
- (id)init;
- (id)_initWithReference:(const struct CompactCookieArray *)reference index:(long long)index;
- (void)dealloc;
@end

#endif /* NSHTTPCookieInternal_Ref_h */
