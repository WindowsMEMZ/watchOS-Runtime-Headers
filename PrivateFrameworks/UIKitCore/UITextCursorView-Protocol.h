//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextCursorView_Protocol_h
#define UITextCursorView_Protocol_h
@import Foundation;

@protocol UITextCursorView <UICoordinateSpace>

@property (nonatomic) BOOL blinking;

/* instance methods */
- (void)resetBlinkAnimation;
- (BOOL)isBlinking;
@end

#endif /* UITextCursorView_Protocol_h */
