//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 331.0.0.0.0
//
#ifndef ACUISetupViewController_h
#define ACUISetupViewController_h
@import Foundation;

#include "PSSetupController.h"

@interface ACUISetupViewController : PSSetupController
/* class methods */
+ (void)showDataclassConfigurationControllerForAccount:(id)account name:(id)name fromViewController:(id)controller specifier:(id)specifier completion:(id /* block */)completion;
+ (void)showAlternateCreationControllerForAccountType:(id)type username:(id)username fromViewController:(id)controller specifier:(id)specifier completion:(id /* block */)completion;

/* instance methods */
- (void)controller:(id)controller didFinishSettingUpAccount:(id)account;
@end

#endif /* ACUISetupViewController_h */
