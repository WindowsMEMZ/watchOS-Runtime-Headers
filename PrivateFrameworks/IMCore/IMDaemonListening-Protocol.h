//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDaemonListening_Protocol_h
#define IMDaemonListening_Protocol_h
@import Foundation;

@protocol IMDaemonListening <NSObject>

@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSDictionary *persistentProperties;
@property (readonly, nonatomic) unsigned long long myStatus;
@property (readonly, nonatomic) NSString *myStatusMessage;
@property (readonly, nonatomic) unsigned int myIdleTime;
@property (readonly, nonatomic) unsigned long long vcCapabilities;
@property (readonly, nonatomic) BOOL shouldHoldChatMessages;
@property (readonly, nonatomic) BOOL holdingChatMessages;

/* instance methods */
- (id)valueOfProperty:(id)property;
- (id)valueOfPersistentProperty:(id)property;
- (void)addHandler:(id)handler;
- (void)removeHandler:(id)handler;
- (void)holdChatMessages;
- (void)releaseHeldChatMessages;
- (BOOL)isHoldingChatMessages;
@end

#endif /* IMDaemonListening_Protocol_h */
