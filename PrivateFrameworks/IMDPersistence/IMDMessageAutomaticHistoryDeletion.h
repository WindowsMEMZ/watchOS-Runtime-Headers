//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDMessageAutomaticHistoryDeletion_h
#define IMDMessageAutomaticHistoryDeletion_h
@import Foundation;

@interface IMDMessageAutomaticHistoryDeletion : NSObject
/* class methods */
+ (id)_getPathAttributesForPath:(id)path;
+ (id)_getDirSubDirURLsForDirPath:(id)path error:(id *)error;
+ (id)_getiChatFileMetadataForPath:(id)path;
+ (id)_getFilePathNotDSStore:(id)dsstore;
+ (void)cleanUpOrphanAttachments;
+ (void)deleteMessagesAndAttachmentsAfterDays:(id)days;
+ (void)deleteMessagesAfterDays:(id)days;
+ (void)deleteAttachmentsAfterDays:(id)days;
+ (void)deleteRecoverableMessagesEligibleForPermanentRemoval;
+ (void)deleteJunkMessagesEligibleForPermanentRemovalOldThanDays:(long long)days;
+ (void)cleanDatabase;
+ (void)deleteSpolightArchivedFiles;
+ (void)deleteDirectoryAtPath:(id)path;
+ (BOOL)isFileAtDirPath:(id)path olderThanDays:(long long)days;
+ (BOOL)isFileHeaderDateAtPath:(id)path olderThanDays:(long long)days;
+ (BOOL)isDirCreationDateAtPath:(id)path olderThanDays:(long long)days;
+ (BOOL)isOlderThanDays:(long long)days fromDate:(id)date;
@end

#endif /* IMDMessageAutomaticHistoryDeletion_h */
