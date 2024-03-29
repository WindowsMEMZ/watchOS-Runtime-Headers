//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAuthorizationInProgressViewController_h
#define AKAuthorizationInProgressViewController_h
@import Foundation;

#include "AKAuthorizationPaneViewController.h"

@class AKAuthorizationPresentationContext;

@interface AKAuthorizationInProgressViewController : AKAuthorizationPaneViewController

@property (readonly, nonatomic) AKAuthorizationPresentationContext *presentationContext;

/* instance methods */
- (id)initWithAuthorizationContext:(id)context;
- (void)viewDidLoad;
@end

#endif /* AKAuthorizationInProgressViewController_h */
