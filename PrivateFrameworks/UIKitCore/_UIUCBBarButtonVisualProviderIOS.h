//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIUCBBarButtonVisualProviderIOS_h
#define _UIUCBBarButtonVisualProviderIOS_h
@import Foundation;

#include "_UIButtonBarButtonVisualProvider.h"
#include "UIButton.h"

@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {
  /* instance variables */
  UIButton *_contentButton;
}

/* class methods */
+ (id)_defaultTitleAttributes;

/* instance methods */
- (void)updateButton:(id)button forHighlightedState:(BOOL)state;
- (void)updateButton:(id)button forEnabledState:(BOOL)state;
- (id)contentView;
- (id)_newButtonForType:(long long)type;
- (id)_defaultTitleAttributes;
- (long long)_securePasteButtonSite;
- (void)_configureImageOrTitleFromBarItem:(id)item;
- (BOOL)shouldUseImageInsets;
- (void)configureButton:(id)button withAppearanceDelegate:(id)delegate fromBarItem:(id)item;
- (id)_constraintsForButton:(id)button withButtonItem:(id)item;
- (id)imageSymbolConfiguration;
@end

#endif /* _UIUCBBarButtonVisualProviderIOS_h */
