//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFIntentAppPickerParameter_h
#define WFIntentAppPickerParameter_h
@import Foundation;

#include "WFDynamicEnumerationParameter.h"

@class NSString;

@interface WFIntentAppPickerParameter : WFDynamicEnumerationParameter

@property (readonly, nonatomic) NSString *intentName;

/* instance methods */
- (Class)singleStateClass;
- (id)initWithDefinition:(id)definition;
- (void)possibleStatesDidChange;
- (BOOL)alwaysShowsButton;
@end

#endif /* WFIntentAppPickerParameter_h */
