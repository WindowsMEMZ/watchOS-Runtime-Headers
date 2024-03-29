//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 232.0.0.0.0
//
#ifndef TCDialRequest_h
#define TCDialRequest_h
@import Foundation;

#include "TUDialRequest.h"

@interface TCDialRequest : TUDialRequest

@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL remoteUplinkMuted;

/* instance methods */
- (id)initWithURL:(id)url;
- (id)URL;
- (BOOL)isRemoteUplinkMuted;
@end

#endif /* TCDialRequest_h */
