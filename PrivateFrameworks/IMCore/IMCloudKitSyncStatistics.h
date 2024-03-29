//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMCloudKitSyncStatistics_h
#define IMCloudKitSyncStatistics_h
@import Foundation;

@class NSString;

@interface IMCloudKitSyncStatistics : NSObject {
  /* instance variables */
   statistics;
}

@property (nonatomic, readonly) long long syncedChatCount;
@property (nonatomic, readonly) long long totalChatCount;
@property (nonatomic, readonly) long long serverChatTotalCount;
@property (nonatomic, readonly) long long serverChatLiveCount;
@property (nonatomic, readonly) long long syncStoreWritableChatCount;
@property (nonatomic, readonly) long long syncStoreWrittenChatCount;
@property (nonatomic, readonly) long long syncedMessageCount;
@property (nonatomic, readonly) long long totalMessageCount;
@property (nonatomic, readonly) long long serverMessageTotalCount;
@property (nonatomic, readonly) long long serverMessageLiveCount;
@property (nonatomic, readonly) long long syncStoreWritableMessageCount;
@property (nonatomic, readonly) long long syncStoreWrittenMessageCount;
@property (nonatomic, readonly) long long syncedAttachmentCount;
@property (nonatomic, readonly) long long totalAttachmentCount;
@property (nonatomic, readonly) long long serverAttachmentTotalCount;
@property (nonatomic, readonly) long long serverAttachmentLiveCount;
@property (nonatomic, readonly) long long syncStoreWritableAttachmentCount;
@property (nonatomic, readonly) long long syncStoreWrittenAttachmentCount;
@property (nonatomic, readonly) long long serverMessageUpdateTotalCount;
@property (nonatomic, readonly) long long serverMessageUpdateLiveCount;
@property (nonatomic, readonly) long long syncStoreWritableMessageUpdateCount;
@property (nonatomic, readonly) long long syncStoreWrittenMessageUpdateCount;
@property (nonatomic, readonly) long long serverRecoverableMessageTotalCount;
@property (nonatomic, readonly) long long serverRecoverableMessageLiveCount;
@property (nonatomic, readonly) long long syncStoreWritableRecoverableMessageCount;
@property (nonatomic, readonly) long long syncStoreWrittenRecoverableMessageCount;
@property (nonatomic, readonly) long long syncedRecordCount;
@property (nonatomic, readonly) long long totalRecordCount;
@property (nonatomic, readonly) double percentSynced;
@property (nonatomic, readonly) long long remainingMessagesCount;
@property (nonatomic, readonly) NSString *description;

/* class methods */
+ (id)_createSyncStatisticsDictionary:(long long)dictionary messageSyncCount:(long long)count chatCount:(long long)count chatSyncCount:(long long)count attachmentCount:(long long)count attachmentSyncCount:(long long)count serverRecordCounts:(id)counts syncStoreCounts:(id)counts;
+ (id)_createSyncStatisticsDictionaryForSyncControllerSyncState:(unsigned long long)state syncType:(long long)type count:(double)count max:(double)max;
+ (double)calculatePercentageOfTotal:(double)total count:(double)count;
+ (id)percentStringFromDouble:(double)double;
+ (id)percentStringFromTotal:(double)total count:(double)count;

/* instance methods */
- (id)_syncStatisticsDictionary;
- (id)initWithStatisticsDictionary:(id)dictionary;
- (id)init;
@end

#endif /* IMCloudKitSyncStatistics_h */
