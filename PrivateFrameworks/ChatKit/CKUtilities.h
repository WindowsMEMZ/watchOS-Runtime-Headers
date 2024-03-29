//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKUtilities_h
#define CKUtilities_h
@import Foundation;

@interface CKUtilities : NSObject
/* class methods */
+ (BOOL)deviceHasMultipleSubscriptions;
+ (id)nsUserDefaultsStandardUserDefaults;
+ (BOOL)userDefaultBoolForKey:(id)key;
+ (id)imDefaultsSharedInstance;
+ (BOOL)isIpad;
+ (id)threadIdentifierForMessagePart:(id)part;
+ (id)threadOriginatorForMessagePart:(id)part;
+ (id)imMessageForIMMessageItem:(id)item;
+ (id)deviceSpecificNameForKey:(id)key;
+ (unsigned long long)messageJunkStatus;
+ (BOOL)isMessageUnknownSenderNotificationDisabled;
+ (BOOL)isMessageTransactionsNotificationDisabled;
+ (BOOL)isMessagePromotionsNotificationDisabled;
+ (void)openCKVSettings;
+ (id)stickerModelWithTitle:(id)title balloonView:(id)view;
+ (void)stickerViewModelsFromChatItem:(id)item completion:(id /* block */)completion;
+ (unsigned long long)indexOfChatItem:(id)item inChatItemsArray:(id)array;
+ (void)onboardRecentlyDeletedIfNeeded:(id)needed actionHandler:(id /* block */)handler;
+ (unsigned long long)daysUntilRecentlyDeletedDeletionForDate:(id)date;
+ (unsigned long long)daysUntilJunkFilterDeletionForDate:(id)date;
+ (double)_intervalSinceDate:(id)date;
+ (double)_daysSinceDate:(id)date;
+ (id)saveableStickerFromChatItem:(id)item;
@end

#endif /* CKUtilities_h */
