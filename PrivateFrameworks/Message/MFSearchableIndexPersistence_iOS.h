//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFSearchableIndexPersistence_iOS_h
#define MFSearchableIndexPersistence_iOS_h
@import Foundation;

#include "EDSearchableIndexPersistence.h"
#include "EFLoggable-Protocol.h"
#include "EFSignpostable-Protocol.h"

@class NSString;

@interface MFSearchableIndexPersistence_iOS : EDSearchableIndexPersistence<EFLoggable, EFSignpostable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

/* class methods */
+ (id)log;
+ (id)signpostLog;

/* instance methods */
- (id)additionalFilterClause;
- (id)messagesWhere:(id)where useSearchableRebuildTable:(BOOL)table limit:(long long)limit;
- (id)searchableIndexItemsFromMessages:(id)messages type:(long long)type;
- (void)attachmentItemMetadataForAttachmentID:(id)id attachmentPersistentID:(id)id messagePersistentID:(id)id name:(id)name mailboxID:(long long)id result:(id /* block */)result;
- (void)attachmentItemMetadataForAttachmentID:(id)id messagePersistentID:(id)id name:(id)name mailboxID:(long long)id result:(id /* block */)result;
- (id)_verificationDataFromMessage:(id)message messageIDTransactionIDDictionary:(id)iddictionary;
- (void)allMailboxIdentifiersForMessage:(id)message result:(id /* block */)result;
- (id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)iddictionary;
- (id)statistics;
@end

#endif /* MFSearchableIndexPersistence_iOS_h */
