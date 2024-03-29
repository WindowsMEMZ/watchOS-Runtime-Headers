//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef NSMutableAttributedString_NSMutableAttributedStringKitAdditions_h
#define NSMutableAttributedString_NSMutableAttributedStringKitAdditions_h
@import Foundation;

@interface NSMutableAttributedString (NSMutableAttributedStringKitAdditions)
/* instance methods */
- (BOOL)_attributeFixingInProgress;
- (void)_setAttributeFixingInProgress:(BOOL)progress;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (BOOL)_shouldSetOriginalFontAttribute;
- (void)fixFontAttributeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)fixAttachmentAttributeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)_fixGlyphInfo:(id)info inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setAlignment:(long long)alignment range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setBaseWritingDirection:(long long)direction range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)_changeIntAttribute:(id)attribute by:(long long)by range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)superscriptRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)subscriptRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)unscriptRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (BOOL)readFromURL:(id)url options:(id)options documentAttributes:(id *)attributes error:(id *)error;
- (BOOL)readFromFileURL:(id)url options:(id)options documentAttributes:(id *)attributes error:(id *)error;
- (BOOL)readFromData:(id)data options:(id)options documentAttributes:(id *)attributes error:(id *)error;
- (BOOL)readFromURL:(id)url options:(id)options documentAttributes:(id *)attributes;
- (BOOL)readFromData:(id)data options:(id)options documentAttributes:(id *)attributes;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)index;
- (void)convertBidiControlCharactersToWritingDirection;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)index;
- (void)convertWritingDirectionToBidiControlCharacters;
@end

#endif /* NSMutableAttributedString_NSMutableAttributedStringKitAdditions_h */
