//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNSNotificationRecordReplaceUpdate_h
#define UNSNotificationRecordReplaceUpdate_h
@import Foundation;

#include "UNSNotificationRecordUpdate.h"
#include "UNSNotificationRecord.h"

@interface UNSNotificationRecordReplaceUpdate : UNSNotificationRecordUpdate

@property (readonly, nonatomic) UNSNotificationRecord *replacedNotificationRecord;
@property (readonly, nonatomic) BOOL shouldRepost;

/* class methods */
+ (id)updateWithNotificationRecord:(id)record replacedNotificationRecord:(id)record shouldRepost:(BOOL)repost;

/* instance methods */
- (id)_initWithNotificationRecord:(id)record replacedNotificationRecord:(id)record shouldRepost:(BOOL)repost;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* UNSNotificationRecordReplaceUpdate_h */
