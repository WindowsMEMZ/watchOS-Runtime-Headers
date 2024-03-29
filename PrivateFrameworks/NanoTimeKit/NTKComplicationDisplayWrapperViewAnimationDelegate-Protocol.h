//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationDisplayWrapperViewAnimationDelegate_Protocol_h
#define NTKComplicationDisplayWrapperViewAnimationDelegate_Protocol_h
@import Foundation;

@protocol NTKComplicationDisplayWrapperViewAnimationDelegate <NSObject>
/* instance methods */
- (BOOL)complicationDisplayWrapperView:(id)view shouldStartCustomDataAnimationFromEarlierView:(id)view laterView:(id)view isForward:(BOOL)forward animationType:(unsigned long long)type;
- (void)complicationDisplayWrapperViewDidUpdateDisplayForComplicationTemplate:(id)template;
- (void)complicationDisplayWrapperView:(id)view prepareCustomDataAnimation:(id)animation fromEarlierView:(id)view laterView:(id)view isForward:(BOOL)forward animationType:(unsigned long long)type;
- (void)complicationDisplayWrapperView:(id)view updateCustomDataAnimationFromEarlierView:(id)view laterView:(id)view isForward:(BOOL)forward animationType:(unsigned long long)type animationDuration:(double)duration animationFraction:(float)fraction;
@optional
/* instance methods */
- (void)complicationDisplayWrapperView:(id)view didUpdateCustomDataAnimationFraction:(float)fraction fromEarlierView:(id)view toLaterView:(id)view isForward:(BOOL)forward animationType:(unsigned long long)type animationDuration:(double)duration;
@end

#endif /* NTKComplicationDisplayWrapperViewAnimationDelegate_Protocol_h */
