//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 135.6.0.0.0
//
#ifndef RCPButtonEventStreamComposer_Protocol_h
#define RCPButtonEventStreamComposer_Protocol_h
@import Foundation;

@protocol RCPButtonEventStreamComposer <RCPBaseEventStreamComposer>
/* instance methods */
- (void)pressButtons:(id)buttons duration:(double)duration;
- (void)pressButtonsWithPages:(id)pages usages:(id)usages duration:(double)duration;
- (void)beginButtonPressForButtonType:(long long)type;
- (void)endButtonPressForButtonType:(long long)type;
- (void)beginButtonPressWithPage:(unsigned long long)page usage:(unsigned long long)usage;
- (void)endButtonPressWithPage:(unsigned long long)page usage:(unsigned long long)usage;
- (void)flipRingerSwitchToValue:(BOOL)value;
- (void)knobNudge:(struct CGVector { double x0; double x1; })nudge buttonMask:(unsigned int)mask duration:(double)duration;
- (void)sendUnicodeString:(id)string;
- (void)sendUnicodeStringByCharacters:(id)characters durationBetweenEvents:(double)events;
- (void)sendUnicodeString:(id)string synthesizePerCharacterEvents:(BOOL)events durationBetweenEvents:(double)events;
@end

#endif /* RCPButtonEventStreamComposer_Protocol_h */
