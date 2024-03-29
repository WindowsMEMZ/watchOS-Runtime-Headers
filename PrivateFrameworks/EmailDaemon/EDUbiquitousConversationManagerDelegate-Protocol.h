//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDUbiquitousConversationManagerDelegate_Protocol_h
#define EDUbiquitousConversationManagerDelegate_Protocol_h
@import Foundation;

@protocol EDUbiquitousConversationManagerDelegate <NSObject>
/* instance methods */
- (id)syncedConversationIDsBySyncKey;
- (void)setPersistenceConversationFlags:(unsigned long long)flags syncKey:(id)key forConversationID:(long long)id reason:(long long)reason;
- (unsigned long long)persistenceConversationFlagsForConversationID:(long long)id;
- (long long)conversationIDForMessageIDs:(id)ids;
- (id)messageIDsForConversationID:(long long)id limit:(unsigned long long)limit;
- (void)remoteMessageIDsAdded:(id)added forConversationID:(long long)id;
- (void)pruneConversationTables:(double)tables;
- (void)clearConversationFlagsAndSyncKeyForConversationIDs:(id)ids;
@end

#endif /* EDUbiquitousConversationManagerDelegate_Protocol_h */
