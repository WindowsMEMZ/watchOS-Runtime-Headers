//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKNowPlayingIndicatorFullColorProvider_h
#define NTKNowPlayingIndicatorFullColorProvider_h
@import Foundation;

#include "CLKFullColorImageProvider.h"

@interface NTKNowPlayingIndicatorFullColorProvider : CLKFullColorImageProvider

@property (nonatomic) BOOL paused;

/* class methods */
+ (id)nowPlayingIndicatorFullColorProviderWithTintColor:(id)color family:(long long)family state:(long long)state;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* NTKNowPlayingIndicatorFullColorProvider_h */
