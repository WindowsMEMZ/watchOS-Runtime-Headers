//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef _TtCC12ExtensionKit13_SceneFactory6_Scene_h
#define _TtCC12ExtensionKit13_SceneFactory6_Scene_h
@import Foundation;

#include "_TtP12ExtensionKit13SceneProtocol_-Protocol.h"

@class UIViewController;

@interface ExtensionKit._SceneFactory._Scene : NSObject<ExtensionKit.SceneProtocol> { // (Swift)
  /* instance variables */
   connectionHandler;
   innerView;
}

@property (nonatomic, retain) UIViewController *viewController;

/* instance methods */
- (id)init;
- (BOOL)shouldAcceptConnection:(id)connection;
@end

#endif /* _TtCC12ExtensionKit13_SceneFactory6_Scene_h */
