//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 473.0.1.0.0
//
#ifndef PKApplicationProxy_Protocol_h
#define PKApplicationProxy_Protocol_h
@import Foundation;

#include "PKBundleProxy.h"
#include "PKApplicationProxy-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL;

@protocol PKApplicationProxy <PKBundleProxy>

@property (readonly, nonatomic) NSArray *plugInKitPlugins;
@property (readonly, nonatomic) BOOL placeholder;

/* instance methods */
- (BOOL)isPlaceholder;
@end

#endif /* PKApplicationProxy_Protocol_h */
