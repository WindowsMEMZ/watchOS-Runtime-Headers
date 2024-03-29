//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMReminderHashtagContextChangeItem_h
#define REMReminderHashtagContextChangeItem_h
@import Foundation;

#include "REMReminderChangeItem.h"

@class NSMutableSet, NSSet;

@interface REMReminderHashtagContextChangeItem : NSObject

@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem;
@property (retain, nonatomic) NSMutableSet *mutableHashtags;
@property (readonly, nonatomic) NSSet *hashtags;

/* instance methods */
- (id)initWithReminderChangeItem:(id)item;
- (void)addHashtag:(id)hashtag;
- (id)addHashtagWithType:(long long)type name:(id)name;
- (id)addHashtagWithType:(long long)type name:(id)name creationDate:(id)date;
- (id)nameWithDisallowedCharactersReplaced:(id)replaced;
- (void)removeHashtag:(id)hashtag;
- (void)removeAllHashtags;
- (void)undeleteHashtagWithID:(id)id;
- (void)cancelUndeleteHashtagWithID:(id)id;
@end

#endif /* REMReminderHashtagContextChangeItem_h */
