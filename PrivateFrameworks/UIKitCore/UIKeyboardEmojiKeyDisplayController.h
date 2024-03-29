//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardEmojiKeyDisplayController_h
#define UIKeyboardEmojiKeyDisplayController_h
@import Foundation;

#include "UIKeyboardEmojiCategory.h"
#include "UIKeyboardEmojiCategoryUpdateDelegate-Protocol.h"
#include "UIKeyboardEmojiKeyView.h"

@class NSString;

@interface UIKeyboardEmojiKeyDisplayController : NSObject<UIKeyboardEmojiCategoryUpdateDelegate>

@property (retain, nonatomic) UIKeyboardEmojiKeyView *inputView;
@property (retain, nonatomic) UIKeyboardEmojiKeyView *categoryView;
@property (weak) UIKeyboardEmojiCategory *lastViewedCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)classForInputView:(long long)view;
+ (Class)classForCategoryControl:(long long)control;
+ (void)writeEmojiDefaultsAndReleaseActiveInputView;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)updateEmojiKeyManagerWithKey:(id)key withKeyView:(id)view;
- (void)reloadForCategory:(long long)category withSender:(id)sender;
- (long long)reloadCategoryForOffsetPercentage:(double)percentage withSender:(id)sender;
- (BOOL)userHasSelectedSkinToneEmoji;
- (void)emojiUsed:(id)used;
- (void)emojiUsed:(id)used language:(id)language;
- (void)updateSkinToneBaseKey:(id)key variantUsed:(id)used;
- (id)recents;
- (id)recentEmojiAtIndex:(long long)index size:(unsigned long long *)size;
- (id)emojiWithoutDuplicateRecents:(id)recents;
- (id)skinToneBaseKeyPreferences;
- (BOOL)hasLastUsedVariantForEmojiString:(id)string;
- (id)lastUsedVariantEmojiForEmojiString:(id)string;
- (long long)lastVisibleFirstEmojiIndexforCategory:(id)category;
@end

#endif /* UIKeyboardEmojiKeyDisplayController_h */
