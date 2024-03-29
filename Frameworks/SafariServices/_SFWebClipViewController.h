//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFWebClipViewController_h
#define _SFWebClipViewController_h
@import Foundation;

#include "UITableViewController.h"
#include "UITextFieldDelegate-Protocol.h"
#include "_SFBookmarkTextEntryTableViewControllerDelegate-Protocol.h"
#include "_SFWebClipViewControllerDelegate-Protocol.h"

@class NSString, UIImageView, UITableViewCell, UIWebClip, WKWebView;

@interface _SFWebClipViewController : UITableViewController<UITextFieldDelegate, _SFBookmarkTextEntryTableViewControllerDelegate> {
  /* instance variables */
  WKWebView *_webView;
  UITableViewCell *_titleCell;
  UITableViewCell *_addressCell;
  UIImageView *_iconImageView;
  BOOL _suspendAfterDismiss;
  BOOL _delegateNotifiedOfResult;
  BOOL _showingDemoModeAlert;
}

@property (retain) UIWebClip *webClip;
@property (weak, nonatomic) NSObject<_SFWebClipViewControllerDelegate> *delegate;
@property (nonatomic) BOOL canEditAndSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStyle:(long long)style;
- (void)loadView;
- (void)viewDidLoad;
- (void)updateUIAnimated:(BOOL)uianimated;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)tableView:(id)view titleForFooterInSection:(long long)section;
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (double)tableView:(id)view estimatedHeightForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_cellInset;
- (struct CGPoint { double x0; double x1; })_centerForIconView;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)_cancel;
- (void)_add;
- (BOOL)_showDemoModeFeatureDisabledAlert;
- (BOOL)createAndAddToHomeScreenBundle;
- (BOOL)_canAddWebClip;
- (BOOL)textFieldShouldReturn:(id)return;
- (void)_textFieldChanged:(id)changed;
- (void)dealloc;
- (BOOL)_shouldUseTranslucentAppearance;
- (void)bookmarkTextEntryTableViewController:(id)controller dismissedWithText:(id)text;
- (BOOL)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)appearance;
@end

#endif /* _SFWebClipViewController_h */
