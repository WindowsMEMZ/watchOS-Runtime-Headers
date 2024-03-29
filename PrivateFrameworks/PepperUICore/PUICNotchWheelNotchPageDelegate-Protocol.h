//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICNotchWheelNotchPageDelegate_Protocol_h
#define PUICNotchWheelNotchPageDelegate_Protocol_h
@import Foundation;

@protocol PUICNotchWheelNotchPageDelegate 
/* instance methods */
- (double)notchPageOffset;
- (double)notchPageHeight;
- (long long)notchPageIndex;
- (BOOL)notchPageShowsMiniSlider;
- (void)applyWheelPosition:(struct CGPoint { double x0; double x1; })position alpha:(double)alpha size:(struct CGSize { double x0; double x1; })size maxWidth:(double)width crownDriven:(BOOL)driven;
@end

#endif /* PUICNotchWheelNotchPageDelegate_Protocol_h */
