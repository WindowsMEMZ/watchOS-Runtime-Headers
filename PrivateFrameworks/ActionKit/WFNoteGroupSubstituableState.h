//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFNoteGroupSubstituableState_h
#define WFNoteGroupSubstituableState_h
@import Foundation;

#include "WFLinkDynamicOptionSubstitutableState.h"

@interface WFNoteGroupSubstituableState : WFLinkDynamicOptionSubstitutableState
/* class methods */
+ (unsigned long long)managedLevelForNotesAccounts;
+ (id)valueFromSerializedRepresentation:(id)representation variableProvider:(id)provider parameter:(id)parameter;

/* instance methods */
- (id)legacySerializedRepresentation;
@end

#endif /* WFNoteGroupSubstituableState_h */
