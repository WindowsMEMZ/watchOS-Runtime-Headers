//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNSAttachmentsService_h
#define UNSAttachmentsService_h
@import Foundation;

#include "UNCAttachmentsService-Protocol.h"
#include "UNSAttachmentsRepository.h"
#include "UNSNotificationRepository.h"
#include "UNSNotificationRepositoryObserver-Protocol.h"
#include "UNSNotificationSchedulingService.h"
#include "UNSPendingNotificationRepository.h"
#include "UNSPendingNotificationRepositoryObserver-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface UNSAttachmentsService : NSObject<UNSNotificationRepositoryObserver, UNSPendingNotificationRepositoryObserver, UNCAttachmentsService> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  UNSAttachmentsRepository *_attachmentsRepository;
  UNSNotificationRepository *_notificationRepository;
  UNSNotificationSchedulingService *_notificationSchedulingService;
  UNSPendingNotificationRepository *_pendingNotificationRepository;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_stagingDirectory;
+ (id)_notificationIdentifiersForNotificationRecords:(id)records;
+ (id)_attachmentURLsRemovedByReplaceUpdate:(id)update;

/* instance methods */
- (id)initWithAttachmentsRepository:(id)repository notificationRepository:(id)repository notificationSchedulingService:(id)service pendingNotificationRepository:(id)repository;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)unlock;
- (void)ensureIntegrityWithCompletionHandler:(id /* block */)handler;
- (void)_queue_ensureIntegrityWithCompletionHandler:(id /* block */)handler;
- (id)resolveAttachmentsForRequest:(id)request bundleIdentifier:(id)identifier fromLocalClientConnection:(id)connection error:(id *)error;
- (id)resolveAttachmentsSkippingErrorsForRequest:(id)request bundleIdentifier:(id)identifier fromBundleProxyForServiceExtension:(id)extension;
- (id)_queue_resolveAttachmentsForRequest:(id)request bundleIdentifier:(id)identifier fromLocalClientConnection:(id)connection orFromServiceExtensionOfBundleProxy:(id)proxy continueOnFailure:(BOOL)failure error:(id *)error;
- (id)_queue_resolvedURLForNotificationAttachment:(id)attachment request:(id)request bundleIdentifier:(id)identifier fromLocalClientConnection:(id)connection orFromServiceExtensionOfBundleProxy:(id)proxy error:(id *)error;
- (id)_queue_validatedRepositoryURLForNotificationAttachment:(id)attachment request:(id)request bundleIdentifier:(id)identifier fromLocalClientConnection:(id)connection orFromServiceExtensionOfBundleProxy:(id)proxy error:(id *)error;
- (id)_queue_resolvedFileURLForNotificationAttachment:(id)attachment request:(id)request bundleIdentifier:(id)identifier fromLocalClientConnection:(id)connection orFromServiceExtensionOfBundleProxy:(id)proxy error:(id *)error;
- (id)_temporaryAttachmentFileURL;
- (void)_queue_deleteAttachmentDataForNotificationRecords:(id)records bundleIdentifier:(id)identifier;
- (void)_queue_deleteAttachmentDataForNotificationRecord:(id)record bundleIdentifier:(id)identifier;
- (void)notificationSourcesDidUninstall:(id)uninstall;
- (void)_queue_notificationSourcesDidUninstall:(id)uninstall;
- (void)_queue_applicationDidUninstall:(id)uninstall;
- (void)notificationRepository:(id)repository didPerformUpdates:(id)updates forBundleIdentifier:(id)identifier;
- (void)pendingNotificationRepository:(id)repository didPerformUpdates:(id)updates forBundleIdentifier:(id)identifier;
- (void)_beginObservingNotificationChanges;
- (void)_repositoryDidPerformUpdates:(id)updates forBundleIdentifier:(id)identifier;
- (void)_notificationIdentifiersForBundleIdentifier:(id)identifier replyOnQueue:(id)queue completionHandler:(id /* block */)handler;
@end

#endif /* UNSAttachmentsService_h */
