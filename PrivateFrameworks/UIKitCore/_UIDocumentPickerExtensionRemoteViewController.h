//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDocumentPickerExtensionRemoteViewController_h
#define _UIDocumentPickerExtensionRemoteViewController_h
@import Foundation;

#include "_UIDocumentPickerRemoteViewController.h"
#include "_UIDocumentPickerViewControllerExtensionHost-Protocol.h"

@class NSString;

@interface _UIDocumentPickerExtensionRemoteViewController : _UIDocumentPickerRemoteViewController<_UIDocumentPickerViewControllerExtensionHost>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

/* instance methods */
- (void)_displayLocationMenu:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menu;
- (void)_doneButtonPressed;
@end

#endif /* _UIDocumentPickerExtensionRemoteViewController_h */
