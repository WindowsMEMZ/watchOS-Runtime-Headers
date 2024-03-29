//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFPasswordPickerRemoteViewController_h
#define SFPasswordPickerRemoteViewController_h
@import Foundation;

#include "SFPasswordRemoteViewController.h"
#include "SFPasswordPickerRemoteViewControllerProtocol-Protocol.h"

@class NSString;

@interface SFPasswordPickerRemoteViewController : SFPasswordRemoteViewController<SFPasswordPickerRemoteViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)passwordServiceViewControllerName;
+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

/* instance methods */
- (BOOL)_canShowWhileLocked;
- (void)selectedCredential:(id)credential;
@end

#endif /* SFPasswordPickerRemoteViewController_h */
