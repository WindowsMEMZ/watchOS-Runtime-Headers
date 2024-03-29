//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFFitnessWorkoutTypePickerParameter_h
#define WFFitnessWorkoutTypePickerParameter_h
@import Foundation;

#include "WFEnumerationParameter.h"
#include "WFActionEventObserver-Protocol.h"

@class NSArray, NSString, WFAction;

@interface WFFitnessWorkoutTypePickerParameter : WFEnumerationParameter<WFActionEventObserver> {
  /* instance variables */
  int _characteristicUpdateToken;
  NSArray *_possibleStates;
}

@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)wasAddedToWorkflow;
- (void)defaultSerializedRepresentationDidChange;
- (void)saveStateIfNeeded;
- (void)wasRemovedFromWorkflow;
- (Class)singleStateClass;
- (id)possibleStates;
- (id)localizedLabelForPossibleState:(id)state;
- (id)defaultSerializedRepresentation;
- (id)localizedPlaceholder;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)handler;
@end

#endif /* WFFitnessWorkoutTypePickerParameter_h */
