//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 207.0.0.0.0
//
#ifndef WCSession_h
#define WCSession_h
@import Foundation;

#include "WCQueueManager.h"
#include "WCSessionUserInfoTransfer.h"
#include "WCXPCManagerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSURL;
@protocol WCSessionDelegate;

@interface WCSession : NSObject<WCXPCManagerDelegate> {
  /* instance variables */
  BOOL _reachableForced;
}

@property (nonatomic) long long activationState;
@property (nonatomic) BOOL paired;
@property (retain, nonatomic) NSURL *watchDirectoryURL;
@property (nonatomic) BOOL hasContentPending;
@property (nonatomic) BOOL reachable;
@property (nonatomic) BOOL complicationEnabled;
@property (nonatomic) unsigned long long remainingComplicationUserInfoTransfers;
@property (copy, nonatomic) NSDictionary *applicationContext;
@property (copy, nonatomic) NSDictionary *receivedApplicationContext;
@property (nonatomic) BOOL watchAppInstalled;
@property (nonatomic) BOOL iOSDeviceNeedsUnlockAfterRebootForReachability;
@property (nonatomic) BOOL companionAppInstalled;
@property (readonly) NSOperationQueue *delegateOperationQueue;
@property (readonly) NSOperationQueue *backgroundWorkOperationQueue;
@property (readonly) NSOperationQueue *workOperationQueue;
@property (readonly) NSMutableDictionary *currentMessages;
@property (retain) NSMutableSet *currentMessageIdentifiersAwaitingReply;
@property (retain, nonatomic) NSMutableDictionary *internalOutstandingUserInfoTransfers;
@property (retain, nonatomic) NSMutableDictionary *internalOutstandingFileTransfers;
@property (retain) WCSessionUserInfoTransfer *currentComplicationUserInfoTransfer;
@property (retain) WCQueueManager *queueManager;
@property (copy, nonatomic) NSString *pairingID;
@property (nonatomic) BOOL hasCompletedInitialActivation;
@property (nonatomic) BOOL connectionWasInterrupted;
@property (nonatomic) BOOL delegateSupportsAsyncActivate;
@property (nonatomic) BOOL delegateSupportsActiveDeviceSwitch;
@property (retain) NSMutableArray *switchTasksQueue;
@property (weak, nonatomic) NSObject<WCSessionDelegate> *delegate;
@property (readonly, copy, nonatomic) NSArray *outstandingUserInfoTransfers;
@property (readonly, copy, nonatomic) NSArray *outstandingFileTransfers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)isSupported;
+ (id)defaultSession;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;

/* instance methods */
- (id)init;
- (id)_init;
- (void)dealloc;
- (void)activateSession;
- (void)onqueue_loadPersistedContent;
- (BOOL)isEqual:(id)equal;
- (void)onDelegateQueueIfTriggeringKVO_updateSessionState:(id)state triggerKVO:(BOOL)kvo;
- (void)onqueue_cancelTransfersIfAppropriate;
- (void)onqueue_cancelMessagesIfAppropriate;
- (BOOL)isReachable;
- (BOOL)isPaired;
- (BOOL)isWatchAppInstalled;
- (BOOL)isComplicationEnabled;
- (BOOL)isCompanionAppInstalled;
- (void)updatePairingID:(id)id;
- (BOOL)didPairingIDChange:(id)idchange;
- (BOOL)didWatchURLChange:(id)urlchange;
- (void)onqueue_setCurrentComplicationUserInfoTransfer:(id)transfer;
- (void)onqueue_loadOutstandingUserInfoTransfers;
- (id)onqueue_addOutstandingUserInfoTransfer:(id)transfer;
- (void)onqueue_removeOutstandingUserInfoTransfer:(id)transfer;
- (void)onqueue_loadOutstandingFileTransfers;
- (void)onqueue_addOutstandingFileTransfer:(id)transfer;
- (void)onqueue_removeOutstandingFileTransfer:(id)transfer;
- (void)onqueue_loadFileTransferProgress;
- (void)onqueue_createProgressForFileTransfer:(id)transfer;
- (void)onqueue_updateProgressForFileTransfer:(id)transfer progress:(id)progress;
- (void)onqueue_removeProgressForFileTransfer:(id)transfer;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)onqueue_updateClientProgressForFileTransfer:(id)transfer;
- (void)onqueue_handleProgressFinishedForFileTransfer:(id)transfer;
- (void)sendMessage:(id)message replyHandler:(id /* block */)handler errorHandler:(id /* block */)handler;
- (void)sendMessageData:(id)data replyHandler:(id /* block */)handler errorHandler:(id /* block */)handler;
- (void)onqueue_sendMessageData:(id)data replyHandler:(id /* block */)handler errorHandler:(id /* block */)handler dictionaryMessage:(BOOL)message;
- (BOOL)updateApplicationContext:(id)context error:(id *)error;
- (id)transferFile:(id)file metadata:(id)metadata;
- (void)cancelFileTransfer:(id)transfer;
- (void)onqueue_cancelFileTransfer:(id)transfer;
- (id)transferUserInfo:(id)info;
- (id)transferCurrentComplicationUserInfo:(id)info;
- (void)cancelUserInfo:(id)info;
- (void)onqueue_cancelUserInfo:(id)info;
- (void)onqueue_transferUserInfo:(id)info withUserInfo:(id)info;
- (void)onqueue_sendResponseDictionary:(id)dictionary identifier:(id)identifier;
- (void)onqueue_sendResponseData:(id)data identifier:(id)identifier dictionaryMessage:(BOOL)message;
- (void)_onqueue_sendResponseError:(id)error identifier:(id)identifier dictionaryMessage:(BOOL)message;
- (void)storeAppContext:(id)context withAppContextData:(id)data;
- (void)storeReceivedAppContext:(id)context withAppContextData:(id)data;
- (void)onqueue_loadAppContexts;
- (void)xpcConnectionInterrupted;
- (id)currentPairingID;
- (BOOL)supportsActiveDeviceSwitch;
- (void)handleActiveDeviceSwitchStarted;
- (void)handleSessionStateChanged:(id)changed;
- (void)xpcConnectionRestoredWithState:(id)state;
- (void)handleMessageSendingAllowed;
- (void)handleRequest:(id)request;
- (void)onqueue_handleDictionaryMessageRequest:(id)request withPairingID:(id)id;
- (void)onqueue_handleDataMessageRequest:(id)request withPairingID:(id)id;
- (void)handleResponse:(id)response;
- (void)onqueue_handleResponseDictionary:(id)dictionary record:(id)record withPairingID:(id)id;
- (void)onqueue_handleResponseData:(id)data record:(id)record withPairingID:(id)id;
- (void)handleSentMessageWithIdentifier:(id)identifier error:(id)error;
- (void)handleApplicationContextWithPairingID:(id)id;
- (void)handleIncomingFileWithPairingID:(id)id;
- (void)handleFileResultWithPairingID:(id)id;
- (void)handleIncomingUserInfoWithPairingID:(id)id;
- (void)handleUserInfoResultWithPairingID:(id)id;
- (void)onqueue_completeSwitchTask:(id)task withSessionState:(id)state;
- (void)onqueue_handleUpdateSessionState:(id)state;
- (void)didSessionStateChange:(id)change withChangeHandler:(id /* block */)handler;
- (void)onqueue_startNextDeviceSwitch;
- (void)onqueue_dequeueContent;
- (void)onqueue_handleMessageCompletionWithError:(id)error withMessageID:(id)id;
- (void)_onqueue_notifyOfMessageError:(id)error messageID:(id)id withErrorHandler:(id /* block */)handler;
- (void)notifyOfFileError:(id)error withFileTransfer:(id)transfer;
- (void)onqueue_notifyOfFileError:(id)error withFileTransfer:(id)transfer;
- (void)notifyOfUserInfoError:(id)error withUserInfoTransfer:(id)transfer;
- (void)onqueue_notifyOfUserInfoError:(id)error withUserInfoTransfer:(id)transfer;
- (id)createAndStartTimerOnWorkQueueWithHandler:(id /* block */)handler;
- (BOOL)logAndTestIfUnactivatedOrMissingDelegate;
- (id)errorIfNotReachable;
- (id)errorIfPreconditionsNotSatisfied;
- (BOOL)verifySessionFile:(id)file;
- (id)fileSizeFromURL:(id)url;
- (void)reportFileTransfer:(id)transfer;
- (unsigned long long)roundValue:(unsigned long long)value toSignificantFigures:(int)figures;
@end

#endif /* WCSession_h */
