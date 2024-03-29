//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef PDSRemote_Protocol_h
#define PDSRemote_Protocol_h
@import Foundation;

@protocol PDSRemote 
/* instance methods */
- (void)storeEntries:(id)entries deleteEntries:(id)entries withCompletion:(id /* block */)completion;
- (void)batchUpdateEntries:(id)entries forClientID:(id)id withCompletion:(id /* block */)completion;
- (void)removeAllEntriesForUser:(id)user withClientID:(id)id withCompletion:(id /* block */)completion;
- (void)activeUsersWithClientID:(id)id withCompletion:(id /* block */)completion;
- (void)usersWithClientID:(id)id withCompletion:(id /* block */)completion;
- (void)entriesForUser:(id)user clientID:(id)id withCompletion:(id /* block */)completion;
- (void)entriesForClientID:(id)id withCompletion:(id /* block */)completion;
@end

#endif /* PDSRemote_Protocol_h */
