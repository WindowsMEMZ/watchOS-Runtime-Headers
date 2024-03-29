//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicalIDEditorNameAndPhotoCell_h
#define HKMedicalIDEditorNameAndPhotoCell_h
@import Foundation;

#include "HKMedicalIDEditorMultilineStringCell.h"
#include "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UIImage, UIView;

@interface HKMedicalIDEditorNameAndPhotoCell : HKMedicalIDEditorMultilineStringCell<UITextViewDelegate> {
  /* instance variables */
  UIView *_nameBottomSeparator;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *photo;
@property (readonly, nonatomic) UIButton *editPhotoButton;
@property (readonly, nonatomic) UIButton *editPhotoLabelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)showsLabelAndValue;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)_contentSizeCategoryDidChange:(id)change;
- (void)layoutSubviews;
- (void)_regularLayoutSubviews;
- (void)_largeTextLayoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)textFieldShouldReturn:(id)return;
- (void)textFieldDidEndEditing:(id)editing;
- (void)_adjustEditPhotoButtonFontSizeIfNecessary;
- (BOOL)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorFrame;
@end

#endif /* HKMedicalIDEditorNameAndPhotoCell_h */
