//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBulletinBuildItem_h
#define CSLBulletinBuildItem_h
@import Foundation;

#include "CSLBulletinAlertItem.h"

@class CUISBulletinClientFactory, CUISBulletinPrimaryPagePresentation, NSMutableArray, NSString;

@interface CSLBulletinBuildItem : NSObject {
  /* instance variables */
  NSMutableArray *_additionalBuildItems;
  BOOL _batchTimerExpired;
}

@property (copy) id /* block */ batchTimeoutHandler;
@property (retain, nonatomic) CUISBulletinClientFactory *factory;
@property (retain, nonatomic) CSLBulletinAlertItem *bulletin;
@property (retain, nonatomic) CUISBulletinPrimaryPagePresentation *primaryPresentation;
@property (retain, nonatomic) CSLBulletinAlertItem *pendingReplacement;
@property (nonatomic) BOOL pendingInvalidation;
@property (nonatomic) BOOL soundHasBeenPlayed;
@property (nonatomic) BOOL didDeliver;
@property (nonatomic) BOOL shouldBuildAndForget;
@property (copy) id /* block */ completion;
@property (readonly, nonatomic) NSString *sentinelID;
@property (readonly, nonatomic) NSString *batchSentinelID;

/* instance methods */
- (id)init;
- (id)initWithAlertItem:(id)item;
- (void)dealloc;
- (id)description;
- (BOOL)canAddBulletin:(id)bulletin;
- (void)addBuildItem:(id)item;
- (id)additionalBuildItems;
- (BOOL)_hasCompleteBatch;
- (BOOL)isReadyToAlert;
- (void)startBatchTimerWithExpirationHandler:(id /* block */)handler;
- (void)_startBatchTimer;
- (void)_cancelBatchTimer;
- (void)_handleBatchTimerExpired;
- (BOOL)shouldCancel;
@end

#endif /* CSLBulletinBuildItem_h */
