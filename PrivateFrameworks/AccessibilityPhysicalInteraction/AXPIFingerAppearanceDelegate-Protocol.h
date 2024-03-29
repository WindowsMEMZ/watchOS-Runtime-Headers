//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXPIFingerAppearanceDelegate_Protocol_h
#define AXPIFingerAppearanceDelegate_Protocol_h
@import Foundation;

@protocol AXPIFingerAppearanceDelegate <NSObject>
/* instance methods */
- (id)selectedFillColor;
- (id)deselectedFillColor;
- (id)selectedStrokeColor;
- (id)deselectedStrokeColor;
- (id)strokeOutlineColor;
- (id)circularProgressFillColor;
- (id)pressedCircularProgressFillColor;
- (double)strokeWidth;
- (double)strokeOutlineWidth;
- (double)innerCircleStrokeWidth;
- (BOOL)showFingerOutlines;
- (double)fingerInnerRadius;
- (double)fingerInnerCircleInnerRadius;
- (BOOL)showInnerCircle;
- (double)fingerWidth;
@end

#endif /* AXPIFingerAppearanceDelegate_Protocol_h */
