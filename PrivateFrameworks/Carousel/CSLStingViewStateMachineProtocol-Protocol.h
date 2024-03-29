//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLStingViewStateMachineProtocol_Protocol_h
#define CSLStingViewStateMachineProtocol_Protocol_h
@import Foundation;

@protocol CSLStingViewStateMachineProtocol <NSObject>

@property (readonly, nonatomic) BOOL requiresConfiguration;
@property (retain, nonatomic) CSLStingActionConfiguration *startActionConfiguration;
@property (retain, nonatomic) CSLStingAlternateActionConfiguration *alternateActionConfiguration;
@property (readonly, nonatomic) CSLStingActionConfiguration *errorConfiguration;
@property (retain, nonatomic) CSLStingActionContext *currentContext;
@property (readonly, nonatomic) CSLStingViewConfiguration *nextConfiguration;
@property (readonly, nonatomic) CSLStingViewConfiguration *alternateConfiguration;
@property (readonly, nonatomic) CSLStingViewConfiguration *startConfiguration;
@property (readonly, nonatomic) CSLStingActionContext *configurationContext;
@property (readonly, weak, nonatomic) NSObject<CSLStingViewProtocol> *view;
@property (readonly, weak, nonatomic) NSObject<CSLStingViewStateMachineDelegate> *delegate;

/* instance methods */
- (void)setErrorConfiguration:(id)configuration bundleID:(id)id;
- (void)handleStateMachineEvent:(id)event;
- (BOOL)shouldHandleDismissEvent:(id)event;
- (BOOL)shouldIgnoreEvent:(id)event;
@optional
/* instance methods */
- (void)setErrorConfiguration:(id)configuration bundleID:(id)id shake:(BOOL)shake;
@end

#endif /* CSLStingViewStateMachineProtocol_Protocol_h */
