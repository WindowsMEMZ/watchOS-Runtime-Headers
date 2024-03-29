//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef ArouetTextInputModelAdapter_h
#define ArouetTextInputModelAdapter_h
@import Foundation;

#include "ArouetTextInputModel.h"
#include "UITextInputDelegate-Protocol.h"

@class NSString;
@protocol UITextInput;

@interface ArouetTextInputModelAdapter : ArouetTextInputModel<UITextInputDelegate>

@property (retain, nonatomic) NSObject<UITextInput> *textInputProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)inputText;
- (id)displayText;
- (id)textRangeFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeFromTextRange:(id)range;
- (void)insertInputTextString:(id)string;
- (void)replaceInputTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withString:(id)string markAsActive:(BOOL)active selectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range isInsertion:(BOOL)insertion;
- (void)moveSelectionToRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (void)commitActiveRange;
- (id)inputTextCommittedPrefix;
- (void)_performUpdate:(id /* block */)update;
- (void)selectionWillChange:(id)change;
- (void)selectionDidChange:(id)change;
- (void)textWillChange:(id)change;
- (void)textDidChange:(id)change;
@end

#endif /* ArouetTextInputModelAdapter_h */
