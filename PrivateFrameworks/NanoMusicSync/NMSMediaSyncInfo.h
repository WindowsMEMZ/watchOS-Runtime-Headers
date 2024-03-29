//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMSMediaSyncInfo_h
#define NMSMediaSyncInfo_h
@import Foundation;

@class NSDictionary;

@interface NMSMediaSyncInfo : NSObject {
  /* instance variables */
  int _notifyToken;
}

@property (retain, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) BOOL valid;
@property (readonly, nonatomic) unsigned long long target;

/* class methods */
+ (id)_mediaSyncInfoDirectory;

/* instance methods */
- (id)keepLocalEnabledPlaylists;
- (id)keepLocalEnabledAlbums;
- (id)allPlaylists;
- (id)allAlbums;
- (id)_identifiersWithKeepLocalStates:(id)states modelKind:(id)kind;
- (id)_syncInfoModelKindForMPModelKind:(id)kind;
- (id)initWithTarget:(unsigned long long)target;
- (id)_initWithTarget:(unsigned long long)target readAndObserveChanges:(BOOL)changes;
- (void)dealloc;
- (id)containers;
- (id)itemsForContainer:(id)container;
- (BOOL)hasContainer:(id)container;
- (BOOL)hasItem:(id)item;
- (unsigned long long)statusForContainer:(id)container;
- (unsigned long long)statusForItem:(id)item;
- (float)progressForContainer:(id)container;
- (float)progressForItem:(id)item;
- (unsigned long long)downloadPauseReasonForContainer:(id)container;
- (unsigned long long)downloadPauseReasonForItem:(id)item;
- (BOOL)hasItemsWaitingWithoutPauseReasonForContainer:(id)container;
- (unsigned long long)playabilityForContainer:(id)container;
- (BOOL)hasItemsOverStorageLimitForContainer:(id)container;
- (BOOL)isItemOverStorageLimit:(id)limit;
- (BOOL)hasDownloadableItemsWithinStorageLimitForContainer:(id)container;
- (unsigned long long)status;
- (float)progress;
- (unsigned long long)downloadPauseReason;
- (BOOL)hasItemsWaitingWithoutPauseReason;
- (BOOL)hasItemsOverStorageLimit;
- (id)userInfoForContainer:(id)container;
- (id)userInfoForItem:(id)item;
- (unsigned long long)itemCount;
- (BOOL)_isValid;
- (BOOL)_hasItemsForContainer:(id)container;
- (void)_registerForInfoChanged;
- (void)_readInfo;
- (id)_preferencesApplicationID;
- (id)_preferencesInfoKey;
- (id)_notificationName;
- (id)_targetIdentifier;
- (id)_syncInfoFilePath;
- (unsigned long long)numberOfItemsOverStorageLimitForContainer:(id)container;
@end

#endif /* NMSMediaSyncInfo_h */
