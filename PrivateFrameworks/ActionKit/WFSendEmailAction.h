//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSendEmailAction_h
#define WFSendEmailAction_h
@import Foundation;

#include "WFHandleCustomIntentAction.h"

@interface WFSendEmailAction : WFHandleCustomIntentAction

@property (nonatomic) BOOL contentManaged;

/* class methods */
+ (id)userInterfaceProtocol;

/* instance methods */
- (id)requiredResourcesForIntentAvailableResource;
- (BOOL)populatesInputFromInputParameter;
- (void)prepareEmailContentFromInput:(id)input completionHandler:(id /* block */)handler;
- (BOOL)checkManagementLevel:(id)level error:(id *)error;
- (void)generateBodyFromCollection:(id)collection completionHandler:(id /* block */)handler;
- (void)runAsynchronouslyWithInput:(id)input;
- (void)runWithRemoteUserInterface:(id)interface input:(id)input;
- (BOOL)parameterCombinationForIntentSupportsBackgroundExecution:(id)execution;
- (id)showsWhenRunIfApplicable;
- (id)prioritizedParameterKeysForRemoteExecution;
- (BOOL)requiresRemoteExecution;
- (void)resolveSlot:(id)slot withProcessedValue:(id)value parameter:(id)parameter input:(id)input completion:(id /* block */)completion;
- (void)getRecipientsFromParameterValue:(id)value completion:(id /* block */)completion;
- (void)generateFilesFromCollection:(id)collection completion:(id /* block */)completion;
- (void)generateEmailFromInput:(id)input completionHandler:(id /* block */)handler;
- (id)serializedParametersForDonatedIntent:(id)intent allowDroppingUnconfigurableValues:(BOOL)values;
- (id)contentDestinationWithError:(id *)error;
- (id)smartPromptWithContentDescription:(id)description contentDestination:(id)destination workflowName:(id)name;
- (BOOL)isContentManaged;
@end

#endif /* WFSendEmailAction_h */
