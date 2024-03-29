//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKColorCurveElement_h
#define NTKColorCurveElement_h
@import Foundation;

@class CAMediaTimingFunction, UIColor;

@interface NTKColorCurveElement : NSObject

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) float fraction;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

/* instance methods */
- (id)initWithColor:(id)color fraction:(float)fraction;
- (id)description;
@end

#endif /* NTKColorCurveElement_h */
