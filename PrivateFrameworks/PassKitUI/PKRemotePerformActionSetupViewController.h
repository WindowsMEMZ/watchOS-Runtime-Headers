//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKRemotePerformActionSetupViewController_h
#define PKRemotePerformActionSetupViewController_h
@import Foundation;

#include "_UIRemoteViewController.h"
#include "PKRemotePerformActionSetupViewControllerProtocol-Protocol.h"

@class NSString;

@interface PKRemotePerformActionSetupViewController : _UIRemoteViewController<PKRemotePerformActionSetupViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

/* instance methods */
- (void)viewServiceDidTerminateWithError:(id)error;
- (void)didCancelAction;
- (void)didPerformAction;
@end

#endif /* PKRemotePerformActionSetupViewController_h */
