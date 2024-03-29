//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSetCellularDataAction_h
#define WFSetCellularDataAction_h
@import Foundation;

#include "WFHandleCustomIntentAction.h"

@class NSArray;

@interface WFSetCellularDataAction : WFHandleCustomIntentAction // (Swift)

@property (nonatomic, readonly) NSArray *disabledOnPlatforms;

/* instance methods */
- (id)initWithIdentifier:(id)identifier definition:(id)definition serializedParameters:(id)parameters schema:(id)schema intent:(id)intent resolvedIntentDescriptor:(id)descriptor stringLocalizer:(id)localizer;
@end

#endif /* WFSetCellularDataAction_h */
