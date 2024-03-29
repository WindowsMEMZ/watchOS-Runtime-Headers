//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFSwiftIMAPMailboxTaskManager_Message_h
#define MFSwiftIMAPMailboxTaskManager_Message_h
@import Foundation;

@interface MFSwiftIMAPMailboxTaskManager (Message) <MFIMAPMailboxTaskManager>
/* instance methods */
- (BOOL)canFetchMessageIDs;
- (void)close;
- (void)compact;
- (void)growFetchWindow;
- (void)reselectMailbox;
- (long long)fetchMessagesWithMessageIDs:(id)ids andSetFlags:(unsigned long long)flags;
- (long long)fetchNumMessages:(long long)messages preservingUID:(id)uid options:(unsigned long long)options;
- (id)fetchDataForMessage:(id)message partial:(BOOL *)partial;
- (id)fetchHeadersForMessage:(id)message;
- (BOOL)fetchDataForMimePart:(id)part range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range isComplete:(BOOL *)complete consumer:(id)consumer;
- (BOOL)downloadMimePartNumber:(id)number message:(id)message withProgressBlock:(id /* block */)block;
- (id)fetchDataForMessage:(id)message didDownload:(BOOL *)download;
- (id)storeSearchResultMatchingCriterion:(id)criterion limit:(unsigned int)limit offset:(id)offset error:(id *)error;
- (void)deleteMessagesOlderThanNumberOfDays:(int)days compact:(BOOL)compact;
- (void)handleFlagsChangedForMessages:(id)messages flags:(id)flags oldFlagsByMessage:(id)message;
- (void)updateServerUnreadCountClosingConnection:(BOOL)connection;
- (id)replayAction:(id)action;
- (id)messageIdRollCall:(id)call;
@end

#endif /* MFSwiftIMAPMailboxTaskManager_Message_h */
