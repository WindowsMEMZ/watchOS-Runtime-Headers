//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPVideoPlayButtonStyle_h
#define LPVideoPlayButtonStyle_h
@import Foundation;

#include "LPSize.h"

@class UIColor;

@interface LPVideoPlayButtonStyle : NSObject

@property (retain, nonatomic) LPSize *size;
@property (retain, nonatomic) LPSize *backgroundSize;
@property (nonatomic) double disabledOpacity;
@property (retain, nonatomic) UIColor *color;

/* instance methods */
- (id)initWithPlatform:(long long)platform;
@end

#endif /* LPVideoPlayButtonStyle_h */
