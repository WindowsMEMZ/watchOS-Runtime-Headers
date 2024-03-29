//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 756.0.0.0.0
//
#ifndef SLSheetURLPreviewView_h
#define SLSheetURLPreviewView_h
@import Foundation;

#include "SLSheetImagePreviewView.h"
#include "SLURLPreviewGenerator.h"

@class UIImage, UIImageView, UIView;

@interface SLSheetURLPreviewView : SLSheetImagePreviewView {
  /* instance variables */
  UIImage *_shadowImage;
  SLURLPreviewGenerator *_webPreviewGenerator;
  UIView *_placeholderPreviewView;
  UIImageView *_placeholderGlyphView;
}

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)ensurePlaceholderPreviewImage;
- (void)setImage:(id)image;
- (BOOL)generatePreviewImageFromAttachments;
- (void)_generateAutomaticPreviewForURL:(id)url;
@end

#endif /* SLSheetURLPreviewView_h */
