//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDSpamController_h
#define IMDSpamController_h
@import Foundation;

@class NSMutableDictionary;

@interface IMDSpamController : NSObject

@property (retain) NSMutableDictionary *chatGUIDToSpamCheckTimerMap;
@property (retain) NSMutableDictionary *chatGUIDToCountMap;
@property (nonatomic) double spamExtensionCutoffTime;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)dealloc;
- (id)init;
- (void)__queryServerForID:(id)id count:(id)count completion:(id /* block */)completion;
- (void)_updateSpamCheckTimerWithInterval:(double)interval forChatGUID:(id)guid;
- (void)_spamCheckTimerFired:(id)fired;
- (id)chatRegistry;
- (BOOL)_isDisabled;
- (void)detectSpam:(id)spam chatGUID:(id)guid;
- (BOOL)shouldCheckForSpamWithExtensionInChat:(id)chat fromIdentifier:(id)identifier toIdentifier:(id)identifier;
- (void)checkForSpamWithExtensionInChat:(id)chat forMessageBody:(id)body sender:(id)sender withCompletion:(id /* block */)completion;
@end

#endif /* IMDSpamController_h */
