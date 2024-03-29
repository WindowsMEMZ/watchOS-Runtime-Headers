//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ISUIKitDialogOperation_h
#define ISUIKitDialogOperation_h
@import Foundation;

#include "ISDialogOperation.h"

@class UIAlertController, UIWindow;

@interface ISUIKitDialogOperation : ISDialogOperation {
  /* instance variables */
  UIAlertController *_alert;
  UIWindow *_window;
}

/* instance methods */
- (void)run;
- (void)_cleanupAlert;
- (void)_showAlertWithCompletion:(id /* block */)completion;
- (void)handleButtonSelected:(long long)selected withResponseDictionary:(id)dictionary;
@end

#endif /* ISUIKitDialogOperation_h */
