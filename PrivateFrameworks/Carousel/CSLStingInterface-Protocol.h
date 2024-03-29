//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLStingInterface_Protocol_h
#define CSLStingInterface_Protocol_h
@import Foundation;

@protocol CSLStingInterface <NSObject>

@property (readonly, nonatomic) CSLLinkAction *startAction;
@property (readonly, nonatomic) CSLLinkAction *nextAction;
@property (readonly, nonatomic) CSLLinkAction *alternateAction;
@property (weak, nonatomic) NSObject<CSLStingInterfaceDelegate> *delegate;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)performStartAction:(id)action;
- (void)performNextAction:(id)action;
- (void)performAlternateAction:(id)action;
- (BOOL)shouldPerformStartAction;
@end

#endif /* CSLStingInterface_Protocol_h */
