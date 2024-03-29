//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BDSLiverpoolStatusMonitor_h
#define BDSLiverpoolStatusMonitor_h
@import Foundation;

#include "BDSICloudIdentityToken.h"

@class BCICloudIdentityToken, NSHashTable;
@protocol BDSLiverpoolStatusChangeObserving, OS_dispatch_queue;

@interface BDSLiverpoolStatusMonitor : NSObject

@property (copy, nonatomic) BDSICloudIdentityToken *lastArchivedICloudIdentityToken;
@property (copy, nonatomic) BDSICloudIdentityToken *lastArchivedNonNilICloudIdentityToken;
@property (copy, nonatomic) BDSICloudIdentityToken *currentICloudIdentityToken;
@property (nonatomic) BOOL optedIn;
@property (nonatomic) BOOL optedInKnown;
@property (nonatomic) BOOL lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch;
@property (nonatomic) int tccNotifyToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *containerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) NSObject<BDSLiverpoolStatusChangeObserving> *coordinatingObserver;
@property (readonly, copy, nonatomic) BCICloudIdentityToken *iCloudIdentityToken;
@property (readonly, nonatomic) BOOL userIdentityPreviouslyRecordedOnThisDevice;

/* class methods */
+ (id)makeOSStateHandler;

/* instance methods */
- (id)init;
- (void)updateWithOptedIn:(BOOL)in;
- (void)refreshICloudTokensAndUpdateWithOptedIn:(BOOL)in;
- (void)dealloc;
- (BOOL)dq_isCloudKitEnabled;
- (BOOL)isCloudKitEnabled;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)registerCoordinatingObserver:(id)observer;
- (void)restartObserving;
- (void)dq_archiveCurrentICloudIdentityToken;
- (void)p_iCloudIdentityDidChange:(id)change;
- (void)_notifyObserversWithCurrentToken:(id)token lastToken:(id)token;
- (void)dq_refreshICloudAvailabilityStatus;
- (id)description;
@end

#endif /* BDSLiverpoolStatusMonitor_h */
