//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef MFAttachmentManager_h
#define MFAttachmentManager_h
@import Foundation;

@class NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MFAttachmentManager : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_arrayAccessQueue;
  NSMutableDictionary *_providers;
  NSMutableDictionary *_attachments;
  NSMutableDictionary *_metadata;
  NSLock *_metaDataLock;
  NSObject<OS_dispatch_queue> *_imageScalingQueue;
}

/* class methods */
+ (id)allManagers;
+ (id)defaultManager;
+ (id)supportedDocumentUTIs;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)addProvider:(id)provider forBaseURL:(id)url;
- (void)removeProviderForBaseURL:(id)url;
- (void)removeProvider:(id)provider;
- (id)imageScalingQueue;
- (BOOL)_setupAttachment:(id)attachment withMimeBody:(id)body error:(id *)error;
- (id)_filePathForAttachment:(id)attachment;
- (id)_dataProviderForAttachmentURL:(id)url error:(id *)error;
- (id)attachmentForURL:(id)url error:(id *)error;
- (id)attachmentForURL:(id)url withMimeBody:(id)body error:(id *)error;
- (id)attachmentsForURLs:(id)urls error:(id *)error;
- (id)attachmentForTextAttachment:(id)attachment error:(id *)error;
- (id)attachmentForCID:(id)cid;
- (id)attachmentForContentID:(id)id;
- (id)attachmentForContentID:(id)id preferredSchemes:(id)schemes;
- (id)attachmentsForContext:(id)context;
- (id)_fetchDataForAttachment:(id)attachment withProvider:(id)provider syncLock:(id *)lock;
- (void)fetchDataForAttachment:(id)attachment;
- (void)fetchDataSynchronouslyForAttachment:(id)attachment;
- (void)_fetchCompletedForAttachment:(id)attachment error:(id)error;
- (void)cancelFetchForAttachment:(id)attachment;
- (id)attachmentForData:(id)data mimeType:(id)type fileName:(id)name contentID:(id)id context:(id)context;
- (void)loadAttachmentURL:(id)url forContextID:(id)id;
- (BOOL)updateAttachment:(id)attachment withNewData:(id)data;
- (void)removeAttachmentForURL:(id)url;
- (void)recordPasteboardAttachmentsForURLs:(id)urls forContextID:(id)id;
- (void)recordUndoAttachmentsForURLs:(id)urls forContextID:(id)id;
- (void)setContentID:(id)id forAttachment:(id)attachment;
- (id)_contentIDForAttachment:(id)attachment;
- (void)setMetadataForAttachment:(id)attachment toValue:(id)value forKey:(id)key;
- (id)metadataForAttachment:(id)attachment forKey:(id)key;
- (void)clearMetadataForAttachment:(id)attachment;
@end

#endif /* MFAttachmentManager_h */
