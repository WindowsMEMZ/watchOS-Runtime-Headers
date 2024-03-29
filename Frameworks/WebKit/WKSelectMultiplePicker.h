//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKSelectMultiplePicker_h
#define WKSelectMultiplePicker_h
@import Foundation;

#include "UIPopoverPresentationControllerDelegate-Protocol.h"
#include "WKContentView.h"
#include "WKFormControl-Protocol.h"

@class NSString;
@protocol {RetainPtr<UINavigationController>="m_ptr"^v}, {RetainPtr<WKSelectPickerTableViewController>="m_ptr"^v};

@interface WKSelectMultiplePicker : NSObject<UIPopoverPresentationControllerDelegate, WKFormControl> {
  /* instance variables */
  WKContentView *_view;
  struct RetainPtr<UINavigationController> { void *m_ptr; } _navigationController;
  struct RetainPtr<WKSelectPickerTableViewController> { void *m_ptr; } _tableViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithView:(id)view;
- (void)configurePresentation;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)presentationControllerDidDismiss:(id)dismiss;
- (id)_indexPathForRow:(long long)row;
- (void)selectRow:(long long)row inComponent:(long long)component extendingSelection:(BOOL)selection;
@end

#endif /* WKSelectMultiplePicker_h */
