//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMReminderAttachmentContextChangeItem_h
#define REMReminderAttachmentContextChangeItem_h
@import Foundation;

#include "REMReminderChangeItem.h"

@class NSArray, NSMutableArray;

@interface REMReminderAttachmentContextChangeItem : NSObject

@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem;
@property (retain, nonatomic) NSMutableArray *mutableAttachments;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSArray *fileAttachments;
@property (readonly, nonatomic) NSArray *imageAttachments;
@property (readonly, nonatomic) NSArray *urlAttachments;

/* instance methods */
- (id)initWithReminderChangeItem:(id)item;
- (id)attachmentsOfClass:(Class)class;
- (id)addFileAttachmentWithURL:(id)url error:(id *)error;
- (id)addFileAttachmentWithData:(id)data uti:(id)uti;
- (id)addImageAttachmentWithURL:(id)url width:(unsigned long long)width height:(unsigned long long)height error:(id *)error;
- (id)addImageAttachmentWithData:(id)data uti:(id)uti width:(unsigned long long)width height:(unsigned long long)height;
- (id)setURLAttachmentWithURL:(id)url;
- (id)addURLAttachmentWithURL:(id)url;
- (void)removeURLAttachments;
- (void)addAttachment:(id)attachment;
- (void)insertAttachment:(id)attachment beforeAttachment:(id)attachment;
- (void)insertAttachment:(id)attachment afterAttachment:(id)attachment;
- (void)removeAttachment:(id)attachment;
- (void)removeAllAttachments;
- (void)removeAllAttachmentsWithClass:(Class)class;
- (id)newObjectIDForURLAttachment;
- (id)newObjectIDForFileAttachment;
- (id)newObjectIDForImageAttachment;
@end

#endif /* REMReminderAttachmentContextChangeItem_h */
