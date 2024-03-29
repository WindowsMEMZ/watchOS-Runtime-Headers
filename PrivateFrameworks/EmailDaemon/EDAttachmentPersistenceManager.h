//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDAttachmentPersistenceManager_h
#define EDAttachmentPersistenceManager_h
@import Foundation;

#include "EDAttachmentPersistence.h"
#include "EDMessageChangeHookResponder-Protocol.h"
#include "EDMessagePersistence.h"
#include "EFLoggable-Protocol.h"

@class NSString, NSURL;

@interface EDAttachmentPersistenceManager : NSObject<EFLoggable, EDMessageChangeHookResponder> {
  /* instance variables */
  EDAttachmentPersistence *_attachmentPersistence;
  EDMessagePersistence *_messagePersistence;
  NSURL *_tempDirectoryForArchiveAttachments;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;
+ (id)attachmentDirectoryURLWithBasePath:(id)path;
+ (id)createFilenameForAttachmentName:(id)name;
+ (void)removeSynapseAttachmentAttributesForMessages:(id)messages;

/* instance methods */
- (id)initWithDatabase:(id)database messagePersistence:(id)persistence;
- (BOOL)persistAttachment:(id)attachment attachmentMetadata:(id)metadata basePath:(id)path error:(id *)error;
- (BOOL)persistAttachmentWithURL:(id)url attachmentMetadata:(id)metadata basePath:(id)path error:(id *)error;
- (id)createAttachmentFileWriterForAttachmentMetadata:(id)metadata basePath:(id)path downloadDate:(id)date queue:(id)queue compressionQueue:(id)queue completion:(id /* block */)completion;
- (BOOL)persistAttachmentMetadata:(id)metadata;
- (id)attachmentURLForGlobalMessageID:(long long)id mimePartNumber:(id)number basePath:(id)path;
- (id)attachmentURLForGlobalMessageID:(long long)id remoteURL:(id)url basePath:(id)path;
- (id)attachmentDirectoryURLForMessageID:(long long)id basePath:(id)path;
- (id)attachmentURLForMessageAttachmentID:(long long)id basePath:(id)path;
- (void)insertMimePartAttachments:(id)attachments forGlobalMessageID:(long long)id;
- (id)allAttachmentsInfoForGlobalMessageIDs:(id)ids basePath:(id)path;
- (void)willDeleteAttachmentsForMessages:(id)messages;
- (void)isDeletingMessages:(id)messages;
- (void)addSynapseAttributesToAttachmentWithURL:(id)url contentType:(id)type usingGenerator:(id /* block */)generator;
- (void)persistenceWillDeleteMessages:(id)messages;
- (void)persistenceIsDeletingMessages:(id)messages generationWindow:(id)window;
- (void)persistenceDidDeleteMessages:(id)messages generationWindow:(id)window;
@end

#endif /* EDAttachmentPersistenceManager_h */
