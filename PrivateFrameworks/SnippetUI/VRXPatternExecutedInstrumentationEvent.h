//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.11.3.0.0
//
#ifndef VRXPatternExecutedInstrumentationEvent_h
#define VRXPatternExecutedInstrumentationEvent_h
@import Foundation;

#include "VRXTurnBasedInstrumentationEvent.h"

@class NSString, _TtC9SnippetUI17RFPatternExecuted;

@interface VRXPatternExecutedInstrumentationEvent : VRXTurnBasedInstrumentationEvent

@property (readonly) SnippetUI.RFPatternExecuted *patternExecuted;
@property (retain, nonatomic) NSString *patternId;
@property (retain, nonatomic) NSString *patternType;
@property (retain, nonatomic) NSString *responseViewId;
@property (retain, nonatomic) NSString *responseMode;

/* instance methods */
- (id)init:(id)init patternType:(id)type responseMode:(id)mode;
- (id)initWithPatternId:(id)id patternType:(id)type responseViewId:(id)id responseMode:(id)mode;
- (void)emitWithTurnIdentifier:(id)identifier;
@end

#endif /* VRXPatternExecutedInstrumentationEvent_h */
