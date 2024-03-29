//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFTumblrPostAction_h
#define WFTumblrPostAction_h
@import Foundation;

#include "WFAction.h"
#include "TMAPIClient.h"
#include "WFDynamicEnumerationDataSource-Protocol.h"

@class NSString;

@interface WFTumblrPostAction : WFAction<WFDynamicEnumerationDataSource>

@property (readonly, nonatomic) TMAPIClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)input;
- (void)openFiles:(id)files;
- (void)openPostWithType:(id)type withParameters:(id)parameters;
- (void)updateTagsParameterHidden;
- (BOOL)setParameterState:(id)state forKey:(id)key;
- (id)defaultSerializedRepresentationForEnumeration:(id)enumeration;
- (id)possibleStatesForEnumeration:(id)enumeration;
- (id)enumeration:(id)enumeration localizedLabelForPossibleState:(id)state;
- (BOOL)inputsMultipleItems;
- (id)inputContentClasses;
- (id)contentDestinationWithError:(id *)error;
- (id)smartPromptWithContentDescription:(id)description contentDestination:(id)destination workflowName:(id)name;
- (id)generatedResourceNodes;
@end

#endif /* WFTumblrPostAction_h */
