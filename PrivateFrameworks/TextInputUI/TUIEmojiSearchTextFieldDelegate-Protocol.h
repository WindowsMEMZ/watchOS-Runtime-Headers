//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUIEmojiSearchTextFieldDelegate_Protocol_h
#define TUIEmojiSearchTextFieldDelegate_Protocol_h
@import Foundation;

@protocol TUIEmojiSearchTextFieldDelegate <NSObject>
/* instance methods */
- (void)emojiSearchTextField:(id)field didChangeSearchString:(id)string;
- (void)emojiSearchTextFieldWillBecomeActive:(id)active;
- (void)emojiSearchTextFieldDidBecomeActive:(id)active;
- (void)emojiSearchTextFieldWillBecomeInactive:(id)inactive;
- (void)emojiSearchTextFieldDidBecomeInactive:(id)inactive;
- (void)emojiSearchTextFieldWillClear:(id)clear;
@end

#endif /* TUIEmojiSearchTextFieldDelegate_Protocol_h */
