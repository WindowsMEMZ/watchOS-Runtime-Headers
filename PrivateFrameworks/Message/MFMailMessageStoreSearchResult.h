//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFMailMessageStoreSearchResult_h
#define MFMailMessageStoreSearchResult_h
@import Foundation;

@class NSDate, NSMutableDictionary;

@interface MFMailMessageStoreSearchResult : NSObject

@property (retain, nonatomic) NSMutableDictionary *mailboxToRemoteIdDictionary;
@property (readonly, nonatomic) unsigned long long count;
@property (retain, nonatomic) NSDate *continueOffset;

/* instance methods */
- (id)init;
- (void)addRemoteID:(id)id mailbox:(id)mailbox;
- (void)enumerateMailboxesAndRemoteIDsUsingBlock:(id /* block */)block;
@end

#endif /* MFMailMessageStoreSearchResult_h */
