//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 163.3.3.0.0
//
#ifndef _TtCV8Settings39SettingsHostViewControllerRepresentableP33_660F061974F96B10B28E661239591CBA12MutableState_h
#define _TtCV8Settings39SettingsHostViewControllerRepresentableP33_660F061974F96B10B28E661239591CBA12MutableState_h
@import Foundation;

#include "_EXHostViewControllerDelegate-Protocol.h"

@interface Settings.SettingsHostViewControllerRepresentable.(MutableState in _660F061974F96B10B28E661239591CBA) : NSObject<_EXHostViewControllerDelegate> { // (Swift)
  /* instance variables */
   role;
   _hostViewController;
   ext;
   completion;
}

/* instance methods */
- (void)hostViewController:(id)controller didPrepareToHost:(id)host;
- (void)hostViewController:(id)controller didEndHosting:(id)hosting error:(id)error;
- (void)hostViewController:(id)controller didFailToHost:(id)host error:(id)error;
- (void)hostViewController:(id)controller didBeginHosting:(id)hosting;
- (id)init;
@end

#endif /* _TtCV8Settings39SettingsHostViewControllerRepresentableP33_660F061974F96B10B28E661239591CBA12MutableState_h */
