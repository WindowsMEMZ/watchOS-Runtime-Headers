//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFLinkSafariChangeReaderModeStateAction_h
#define WFLinkSafariChangeReaderModeStateAction_h
@import Foundation;

#include "WFLinkChangeBinarySettingAction.h"

@interface WFLinkSafariChangeReaderModeStateAction : WFLinkChangeBinarySettingAction
/* instance methods */
- (id)overrideParameterSummary;
- (id)subcategoryForCategory:(id)category;
- (id)overrideName;
- (BOOL)shouldOverrideName;
- (id)overrideDefaultValuesByParameter;
- (id)parameterOverrides;
@end

#endif /* WFLinkSafariChangeReaderModeStateAction_h */
