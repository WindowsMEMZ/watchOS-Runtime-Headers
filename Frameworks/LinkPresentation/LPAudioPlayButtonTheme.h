//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPAudioPlayButtonTheme_h
#define LPAudioPlayButtonTheme_h
@import Foundation;

@class UIColor;

@interface LPAudioPlayButtonTheme : NSObject

@property (readonly, retain, nonatomic) UIColor *keyColor;
@property (readonly, retain, nonatomic) UIColor *secondaryColor;
@property (readonly, retain, nonatomic) UIColor *outerBorderColor;
@property (readonly, nonatomic) BOOL useInvertedInactiveState;

/* instance methods */
- (id)initWithKeyColor:(id)color secondaryColor:(id)color outerBorderColor:(id)color useInvertedInactiveState:(BOOL)state;
@end

#endif /* LPAudioPlayButtonTheme_h */
