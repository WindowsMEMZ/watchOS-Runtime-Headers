//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SHSheetContentPresenter_Protocol_h
#define SHSheetContentPresenter_Protocol_h
@import Foundation;

@protocol SHSheetContentPresenter <NSObject>
/* instance methods */
- (void)performPeopleSuggestionProxy:(id)proxy;
- (void)removePeopleSuggestionProxy:(id)proxy;
- (void)performShareActivityProxy:(id)proxy;
- (void)performShareActivityProxy:(id)proxy activityIdentifier:(id)identifier;
- (void)performActionActivityProxy:(id)proxy;
- (void)handleOptions;
- (void)handleCollaborationOptions;
- (void)handleCustomHeaderButton;
- (void)handleClose;
- (void)handleActionsEdit;
- (void)handleNext;
- (void)handleInfoSuggestionPress:(id)press;
- (id)customTitleForActivityType:(id)type;
@end

#endif /* SHSheetContentPresenter_Protocol_h */
