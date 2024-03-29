//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 567.0.0.0.0
//
#ifndef UAUserActivity_h
#define UAUserActivity_h
@import Foundation;

#include "SFCompanionAdvertiserDelegate-Protocol.h"
#include "UAUserActivityManager.h"

@class CSSearchableItemAttributeSet, NSData, NSDate, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSURL, NSUUID, NSUserActivity, SFCompanionAdvertiser;
@protocol OS_dispatch_group, OS_dispatch_queue, UAUserActivityDelegate;

@interface UAUserActivity : NSObject<SFCompanionAdvertiserDelegate> {
  /* instance variables */
  NSMutableDictionary *_frameworkPayload;
  SFCompanionAdvertiser *_advertiser;
  NSObject<OS_dispatch_group> *_advertiserCompletedGroup;
  SFCompanionAdvertiser *_resumerAdvertiser;
  double _lastSaveTime;
  BOOL _saveScheduled;
  BOOL _needsSaveValueAtEndOfWillSaveCallback;
  BOOL _userActivityWasCreatedSent;
  BOOL _indexInProcess;
  long long _inWillSaveCallback;
  int _forwardToCoreSpotlightIndexerCount;
  NSDictionary *_savedUserInfo;
}

@property (copy, @dynamic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, @dynamic) NSString *contentUserAction;
@property (copy, @dynamic) NSSet *requiredUserInfoKeys;
@property (copy, @dynamic) NSSet *keywords;
@property (copy, @dynamic) NSString *contentIdentifier;
@property (copy, @dynamic) NSDate *expirationDate;
@property (@dynamic) BOOL eligibleForHandoff;
@property (@dynamic) BOOL eligibleForSearch;
@property (@dynamic) BOOL eligibleForReminders;
@property (@dynamic) BOOL eligibleForPublicIndexing;
@property (copy, @dynamic) CSSearchableItemAttributeSet *contentAttributeSet;
@property (readonly) BOOL forwardToCoreSpotlightIndexer;
@property (@dynamic) BOOL eligibleForPrediction;
@property (copy) NSString *persistentIdentifier;
@property (readonly, weak) UAUserActivityManager *manager;
@property (readonly, copy) NSUUID *originalUniqueIdentifier;
@property (@dynamic) BOOL dirty;
@property BOOL sendToServerPending;
@property BOOL createsNewUUIDIfSaved;
@property (retain) NSError *decodeUserInfoError;
@property BOOL encodedContainsUnsynchronizedCloudDocument;
@property BOOL encodedFileProviderURL;
@property (copy) NSData *cachedEncodedUserInfo;
@property (readonly) unsigned long long userInfoChangeCount;
@property (retain) NSMutableDictionary *payloadObjects;
@property (retain) NSMutableDictionary *payloadUpdateBlocks;
@property (retain) NSMutableDictionary *payloadDataCache;
@property (retain) NSMutableSet *dirtyPayloadIdentifiers;
@property (readonly) unsigned long long os_state_handler;
@property (readonly, retain) NSObject<OS_dispatch_queue> *willCallSaveSerializationQueue;
@property BOOL userInfoContainsFileURLs;
@property (copy) NSString *typeIdentifier;
@property (copy) NSString *dynamicIdentifier;
@property (copy, @dynamic) NSString *title;
@property (copy) NSDictionary *userInfo;
@property (copy, @dynamic) NSURL *webpageURL;
@property (copy, @dynamic) NSURL *referrerURL;
@property (copy) NSString *targetContentIdentifier;
@property (@dynamic) BOOL needsSave;
@property (@dynamic) BOOL supportsContinuationStreams;
@property BOOL forceImmediateSendToServer;
@property (weak) NSObject<UAUserActivityDelegate> *delegate;
@property (readonly) BOOL isCurrent;
@property (copy) NSDate *madeCurrentDate;
@property (copy) NSDate *madeCurrentEndDate;
@property (readonly) double madeCurrentInterval;
@property (readonly, copy) NSDate *madeInitiallyCurrentDate;
@property (copy) NSDate *sentToIndexerDate;
@property (weak) NSUserActivity *parentUserActivity;
@property (readonly) BOOL activityHasBeenSentToServer;
@property (readonly) BOOL invalidated;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long suggestedActionType;
@property (copy) NSDictionary *options;
@property (copy) NSData *streamsData;
@property BOOL canCreateStreams;
@property (copy) NSString *teamIdentifier;
@property BOOL universalLink;

/* class methods */
+ (id)mainBundleIdentifier;
+ (void)deleteSavedUserActivitiesWithPersistentIdentifiers:(id)identifiers completionHandler:(id /* block */)handler;
+ (void)deleteAllSavedUserActivitiesWithCompletionHandler:(id /* block */)handler;
+ (BOOL)registerAsProxyForApplication:(int)application options:(id)options completionBlock:(id /* block */)block;
+ (id)_encodeToString:(id)string;
+ (id)_encodeKeyAndValueIntoString:(id)string value:(id)value;
+ (id)_decodeFromScanner:(id)scanner;
+ (id)_decodeFromString:(id)string;
+ (id)_decodeFromEntireString:(id)string;
+ (BOOL)supportsUserActivityAppLinks;
+ (id)currentUserActivityUUID;
+ (BOOL)currentUserActivityUUIDWithOptions:(id)options completionHandler:(id /* block */)handler;
+ (BOOL)determineIfUserActivityIsCurrent:(id)current completionHandler:(id /* block */)handler;
+ (BOOL)currentUserActivityProxiesWithOptions:(id)options matching:(id)matching completionHandler:(id /* block */)handler;
+ (id)registerForSuggestedActionNudgeOfType:(unsigned long long)type withOptions:(id)options block:(id /* block */)block;
+ (void)unregisterForSuggestedActionNudgeOfType:(id)type;
+ (id)allowedWebpageURLSchemes;
+ (BOOL)checkWebpageURL:(id)url actionType:(unsigned long long)type throwIfFailed:(BOOL)failed;
+ (BOOL)isIndexPendingForUUID:(id)uuid;
+ (void)setIndexPending:(BOOL)pending forUUID:(id)uuid;
+ (BOOL)userActivityContinuationSupported;
+ (id)userActivityFromUUID:(id)uuid timeout:(double)timeout withError:(id *)error;
+ (id)userActivityFromUUID:(id)uuid withError:(id *)error;
+ (void)fetchUserActivityWithUUID:(id)uuid completionHandler:(id /* block */)handler;
+ (id)fetchUserActivityWithUUID:(id)uuid intervalToWaitForDocumentSynchronizationToComplete:(double)complete completionHandler:(id /* block */)handler;
+ (void)addDynamicUserActivity:(id)activity matching:(id)matching;
+ (void)removeDynamicUserActivity:(id)activity matching:(id)matching;
+ (id)observers;
+ (void)addUserActivityObserver:(id)observer;
+ (void)removeUserActivityObserver:(id)observer;

/* instance methods */
- (id)payloadIdentifiers;
- (id)objectForIdentifier:(id)identifier;
- (id)payloadForIdentifier:(id)identifier;
- (void)setPayload:(id)payload object:(id)object identifier:(id)identifier;
- (void)setPayload:(id)payload object:(id)object identifier:(id)identifier dirty:(BOOL)dirty;
- (void)setPayloadIdentifier:(id)identifier object:(id)object withBlock:(id /* block */)block;
- (id /* block */)payloadUpdateBlockForIdentifier:(id)identifier;
- (BOOL)isPayloadDirty:(id)dirty;
- (void)setDirty:(BOOL)dirty identifier:(id)identifier;
- (BOOL)isEligibleForPrediction;
- (void)updateForwardToCoreSpotlightIndexer:(char)indexer;
- (void)sendToCoreSpotlightIndexer;
- (void)indexActivity:(double)activity forceIndexing:(BOOL)indexing;
- (id)initWithUserActivityStrings:(id)strings optionalString:(id)string tertiaryData:(id)data options:(id)options;
- (id)initWithUserActivityData:(id)data options:(id)options;
- (id)_encodeIntoUserActivityStringWithSave:(BOOL)save optionalString:(id *)string optionalData:(id *)data error:(id *)error;
- (BOOL)_encodeIntoUserActivityStringWithSave:(BOOL)save completionHandler:(id /* block */)handler;
- (id)createUserActivityStringsWithSaving:(BOOL)saving options:(id)options optionalString:(id *)string data:(id *)data error:(id *)error;
- (BOOL)createUserActivityStringsWithSaving:(BOOL)saving options:(id)options completionHandler:(id /* block */)handler;
- (id)_encodeIntoUserActivityDataWithSave:(BOOL)save error:(id *)error;
- (id)createUserActivityDataWithSaving:(BOOL)saving options:(id)options error:(id *)error;
- (BOOL)createUserActivityDataWithSaving:(BOOL)saving options:(id)options completionHandler:(id /* block */)handler;
- (void)addKeywordsFromArray:(id)array;
- (BOOL)isEligibleForHandoff;
- (BOOL)isEligibleForSearch;
- (BOOL)isEligibleForReminders;
- (BOOL)isEligibleForPublicIndexing;
- (id)initWithManager:(id)manager userActivityInfo:(id)info;
- (id)copyWithNewUUID:(BOOL)uuid;
- (void)tellDaemonAboutNewLSUserActivity;
- (void)willSynchronizeUserActivityWithHandler:(id /* block */)handler;
- (void)didSynchronizeUserActivity;
- (void)didReceiveInputStream:(id)stream outputStream:(id)stream;
- (void)scheduleSendUserActivityInfoToLSUserActivityd;
- (id)userActivityInfoForSelf;
- (id)userActivityInfoForSelfWithPayload:(BOOL)payload;
- (id)callWillSaveDelegateIfDirtyAndPackageUpData:(BOOL)data clearDirty:(BOOL)dirty;
- (id)callWillSaveDelegateIfDirtyAndPackageUpData:(BOOL)data clearDirty:(BOOL)dirty completionHandler:(id /* block */)handler;
- (void)sendUserActivityInfoToLSUserActivityd:(BOOL)activityd onAsyncQueue:(BOOL)queue;
- (long long)priority;
- (void)displayInDtrace;
- (void)advertiser:(id)advertiser didReceiveInputStream:(id)stream outputStream:(id)stream;
- (id)contentType;
- (void)setContentType:(id)type;
- (id)contentAttributes;
- (void)setContentAttributes:(id)attributes;
- (void)addContentAttribute:(id)attribute forKey:(id)key;
- (void)removeContentAttribute:(id)attribute;
- (id)init;
- (id)initWithTypeIdentifier:(id)identifier;
- (id)initWithTypeIdentifier:(id)identifier options:(id)options;
- (id)initWithTypeIdentifier:(id)identifier suggestedActionType:(unsigned long long)type options:(id)options;
- (id)initWithTypeIdentifier:(id)identifier dynamicIdentifier:(id)identifier options:(id)options;
- (id)initDynamicActivityWithTypeIdentifier:(id)identifier dynamicIdentifier:(id)identifier suggestedActionType:(unsigned long long)type options:(id)options;
- (void)dealloc;
- (void)addUserInfoEntriesFromDictionary:(id)dictionary;
- (unsigned long long)beginUserInfoUpdate:(id)update;
- (BOOL)finishUserInfoUpdate;
- (void)_setWebpageURL:(id)url throwOnFailure:(BOOL)failure;
- (BOOL)isUniversalLink;
- (id)teamID;
- (void)getContinuationStreamsWithCompletionHandler:(id /* block */)handler;
- (void)becomeCurrent;
- (void)_resignCurrent;
- (void)resignCurrent;
- (BOOL)isInvalidated;
- (void)invalidate;
- (BOOL)archiveURL:(id)url completionHandler:(id /* block */)handler;
- (id)unarchiveURL:(id)url error:(id *)error;
- (id)archiver:(id)archiver willEncodeObject:(id)object;
- (id)unarchiver:(id)unarchiver didDecodeObject:(id)object;
- (BOOL)encodeUserInfo:(id)info completionHandler:(id /* block */)handler;
- (id)encodeUserInfo:(id)info error:(id *)error;
- (id)encodeUserInfo:(id)info;
- (id)decodeUserInfo:(id)info;
- (void)prepareUserActivityForLaunchingWithOptions:(id)options completionHandler:(id /* block */)handler;
- (void)pinUserActivityWithCompletionHandler:(id /* block */)handler;
- (id)determineMatchingApplicationBundleIdentfierWithOptions:(id)options;
- (BOOL)isEqual:(id)equal;
- (id)stateString;
@end

#endif /* UAUserActivity_h */
