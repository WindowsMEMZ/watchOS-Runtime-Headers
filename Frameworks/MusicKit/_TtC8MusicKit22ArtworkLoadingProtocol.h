//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef _TtC8MusicKit22ArtworkLoadingProtocol_h
#define _TtC8MusicKit22ArtworkLoadingProtocol_h
@import Foundation;

#include "NSURLProtocol.h"

@interface MusicKit.ArtworkLoadingProtocol : NSURLProtocol // (Swift)
/* class methods */
+ (BOOL)canInitWithRequest:(id)request;
+ (id)canonicalRequestForRequest:(id)request;

/* instance methods */
- (void)startLoading;
- (void)stopLoading;
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;
@end

#endif /* _TtC8MusicKit22ArtworkLoadingProtocol_h */
