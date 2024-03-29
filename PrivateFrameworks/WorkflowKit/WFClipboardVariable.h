//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFClipboardVariable_h
#define WFClipboardVariable_h
@import Foundation;

#include "WFVariable.h"

@interface WFClipboardVariable : WFVariable
/* instance methods */
- (id)initWithAggrandizements:(id)aggrandizements;
- (void)retrieveContentCollectionWithVariableSource:(id)source completionHandler:(id /* block */)handler;
- (id)name;
- (id)icon;
- (BOOL)isAvailable;
- (BOOL)requiresModernVariableSupport;
- (id)possibleContentClassesWithContext:(id)context;
- (id)requiredAccessResources;
@end

#endif /* WFClipboardVariable_h */
