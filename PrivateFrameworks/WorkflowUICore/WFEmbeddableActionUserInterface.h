//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFEmbeddableActionUserInterface_h
#define WFEmbeddableActionUserInterface_h
@import Foundation;

#include "WFActionUserInterface.h"

@class UIViewController;

@interface WFEmbeddableActionUserInterface : WFActionUserInterface

@property (retain, nonatomic) UIViewController *contentViewController;

/* instance methods */
- (void)presentContent:(id)content;
- (BOOL)presentContent:(id)content completion:(id /* block */)completion;
- (BOOL)prefersModalPresentation;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)handler;
@end

#endif /* WFEmbeddableActionUserInterface_h */
