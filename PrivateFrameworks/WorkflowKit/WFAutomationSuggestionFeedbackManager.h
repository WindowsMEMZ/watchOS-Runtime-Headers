//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFAutomationSuggestionFeedbackManager_h
#define WFAutomationSuggestionFeedbackManager_h
@import Foundation;

@interface WFAutomationSuggestionFeedbackManager : NSObject
/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (void)trackRoutineWithIdentifier:(id)identifier source:(unsigned long long)source completed:(BOOL)completed interacted:(BOOL)interacted;
@end

#endif /* WFAutomationSuggestionFeedbackManager_h */
