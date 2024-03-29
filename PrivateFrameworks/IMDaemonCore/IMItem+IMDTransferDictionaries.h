//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMItem_IMDTransferDictionaries_h
#define IMItem_IMDTransferDictionaries_h
@import Foundation;

@interface IMItem (IMDTransferDictionaries)
/* class methods */
+ (id)_updateV1RecordType;
+ (id)compressedProtobufDataWithPadding:(id)padding;
+ (id)compressedProtobufDataForUpdateT1:(id)t1;
+ (id)compressedProtobufDataForUpdateT2:(id)t2;
+ (id)compressedProtobufDataForUpdateT3:(id)t3;
+ (id)protobufForCompressedData:(id)data;
+ (id)protobufForCompressedDataP2:(id)p2;
+ (id)protobufForCompressedDataP3:(id)p3;
+ (id)protobufForUpdateT1:(id)t1;
+ (id)protobufForUpdateT2:(id)t2;
+ (id)protobufForUpdateT3:(id)t3;
+ (id)populateIMMessageItemWithProtobufFields:(id)fields withProtobufData:(id)data;
+ (id)populateIMMessageItemWithProtobufFields:(id)fields withProtobufDataP2:(id)p2;
+ (id)populateIMMessageItemWithProtobufFields:(id)fields withProtobufDataP3:(id)p3;
+ (id)groupTitleChangeProtobufForCompressedData:(id)data;
+ (id)populateIMGroupTitleChangeItem:(id)item withProtobufData:(id)data;
+ (id)participantChangeProtobufForCompressedData:(id)data;
+ (id)populateIMParticipantChangeItem:(id)item withProtobufData:(id)data;
+ (id)locationShareStatusChangeProtobufForCompressedData:(id)data;
+ (id)populateIMLocationShareStatusChangeItem:(id)item withProtobufData:(id)data;
+ (id)groupActionProtobufForCompressedData:(id)data;
+ (id)populateIMGroupActionItem:(id)item withProtobufData:(id)data;
+ (id)messageActionChangeProtobufForCompressedData:(id)data;
+ (id)populateIMMessageActionItem:(id)item withProtobufData:(id)data;
+ (id)createCKRecordForUpdateT1:(id)t1 zoneID:(id)id salt:(id)salt;
+ (id)createCKRecordForUpdateT2:(id)t2 zoneID:(id)id salt:(id)salt;
+ (id)createCKRecordForUpdateT3:(id)t3 zoneID:(id)id salt:(id)salt;
+ (id)createItemWithCKRecord:(id)ckrecord;
+ (void)resetSyncStateForMessage:(id)message toState:(long long)state;

/* instance methods */
- (id)_recordType;
- (id)_accountControllerSharedInstance;
- (id)compressedProtobufDataForMessage;
- (id)compressedProtobufDataForMessageP2;
- (id)compressedProtobufDataForMessageP3;
- (void)_populateCKRecordWithIMItemFields:(id)fields;
- (void)_populateCKRecordWithIMMessageItemFields:(id)fields;
- (id)compressedProtobufDataForGroupTitleChangeItem;
- (void)_populateCKRecordWithIMGroupTitleChangeItemFields:(id)fields;
- (id)compressedProtobufDataForParticipantChangeItem;
- (void)_populateCKRecordWithIMParticipantChangeItemFields:(id)fields;
- (id)compressedProtobufDataForLocationShareStatusChangeItem;
- (void)_populateCKRecordWithIMLocationShareStatusChangeItemFields:(id)fields;
- (id)compressedProtobufDataForGroupActionItem;
- (void)_populateCKRecordWithIMGroupActionItemFields:(id)fields;
- (id)compressedProtobufDataForMessageActionItem;
- (void)_populateCKRecordWithIMMessageActionItemFields:(id)fields;
- (BOOL)callerIDShouldBeCheckedForRegistration:(id)registration;
- (id)_recordFromServerChangeToken;
- (id)copyCKRecordRepresentationWithZoneID:(id)id salt:(id)salt;
- (BOOL)_shouldDownloadIfPhoneNumberAndNoSIM:(id)sim;
- (BOOL)shouldStoreMessage;
- (BOOL)isCompatibleWithMiC;
- (id)copyFileTransferDictionaryRepresentationsFromCenter:(id)center;
@end

#endif /* IMItem_IMDTransferDictionaries_h */
