//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 157.200.0.0.0
//
#ifndef _KSTextReplacementServiceProtocol_Protocol_h
#define _KSTextReplacementServiceProtocol_Protocol_h
@import Foundation;

@protocol _KSTextReplacementServiceProtocol <NSObject>
/* instance methods */
- (void)addEntries:(id)entries removeEntries:(id)entries withReply:(id /* block */)reply;
- (void)removeAllEntries;
- (void)requestSyncWithReply:(id /* block */)reply;
- (void)cancelPendingUpdatesWithReply:(id /* block */)reply;
- (void)queryTextReplacementEntriesWithReply:(id /* block */)reply;
- (void)queryTextReplacementsWithPredicate:(id)predicate reply:(id /* block */)reply;
@end

#endif /* _KSTextReplacementServiceProtocol_Protocol_h */
