//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKCompassView_Protocol_h
#define MKCompassView_Protocol_h
@import Foundation;

#include "UIView.h"
#include "MKCompassView-Protocol.h"

@class NSArray, NSString, UIImageView;

@protocol MKCompassView <NSObject>

@property (nonatomic) double mapHeading;

/* instance methods */
- (void)setCompassViewSize:(long long)size style:(long long)style;
- (void)setCompassViewSize:(long long)size;
@end

#endif /* MKCompassView_Protocol_h */
