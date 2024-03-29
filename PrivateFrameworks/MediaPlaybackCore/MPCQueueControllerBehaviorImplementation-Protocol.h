//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCQueueControllerBehaviorImplementation_Protocol_h
#define MPCQueueControllerBehaviorImplementation_Protocol_h
@import Foundation;

@protocol MPCQueueControllerBehaviorImplementation <MPCQueueControllerBehavior>

@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, weak, nonatomic) NSObject<MPCQueueControllerBehaviorHost> *host;

/* instance methods */
- (id)initWithSessionID:(id)id;
- (void)connectToHost:(id)host;
- (void)disconnectFromHost:(id)host;
- (id)performLoadCommand:(id)command completion:(id /* block */)completion;
- (void)activeItemFlagsDidChange:(unsigned short)change;
- (id)componentsForContentItemID:(id)id;
- (BOOL)itemExistsForContentItemID:(id)id;
- (BOOL)canJumpToContentItemID:(id)id reason:(id *)reason;
- (BOOL)canPreviousItemFromContentItemID:(id)id reason:(id *)reason;
- (BOOL)canNextItemFromContentItemID:(id)id reason:(id *)reason;
- (id)contentItemIDEnumeratorStartingAfterContentItemID:(id)id mode:(long long)mode options:(unsigned long long)options;
- (id)_stateDictionaryIncludingQueue:(BOOL)queue;
- (void)currentItemDidChangeFromContentItemID:(id)id toContentItemID:(id)id;
- (id)_itemForContentItemID:(id)id;
@optional
/* instance methods */
- (void)didConnectToHost:(id)host;
- (void)didDisconnectFromHost:(id)host;
@end

#endif /* MPCQueueControllerBehaviorImplementation_Protocol_h */
