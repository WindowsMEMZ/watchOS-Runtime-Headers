//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFPocketAddAction_h
#define WFPocketAddAction_h
@import Foundation;

#include "WFAction.h"
#include "PocketAPIDelegate-Protocol.h"

@class NSError, NSString;
@protocol OS_dispatch_group;

@interface WFPocketAddAction : WFAction<PocketAPIDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_group> *addGroup;
@property (retain, nonatomic) NSError *lastError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)runAsynchronouslyWithInput:(id)input;
- (void)finishRunningWithError:(id)error;
- (void)pocketAPI:(id)api receivedResponse:(id)response forAPIMethod:(id)apimethod error:(id)error;
- (id)contentDestinationWithError:(id *)error;
- (id)smartPromptWithContentDescription:(id)description contentDestination:(id)destination workflowName:(id)name;
@end

#endif /* WFPocketAddAction_h */
