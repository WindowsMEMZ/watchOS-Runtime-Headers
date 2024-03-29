//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKReasonTrackingUpdater_h
#define CKReasonTrackingUpdater_h
@import Foundation;

@class NSCountedSet, NSString;
@protocol CKReasonTrackingUpdaterDelegate;

@interface CKReasonTrackingUpdater : NSObject

@property (retain, nonatomic) NSCountedSet *reasonsForNeedsUpdates;
@property (retain, nonatomic) NSCountedSet *reasonsForHoldingUpdates;
@property (nonatomic) BOOL hasPendingDeferredUpdate;
@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) NSObject<CKReasonTrackingUpdaterDelegate> *delegate;
@property (readonly, nonatomic) BOOL isHoldingUpdates;

/* instance methods */
- (id)initWithName:(id)name delegate:(id)delegate;
- (id)description;
- (BOOL)isHoldingUpdatesForReason:(id)reason;
- (BOOL)needsUpdate;
- (void)setNeedsDeferredUpdateWithReason:(id)reason;
- (void)updateImmediatelyWithReason:(id)reason;
- (void)updateImmediatelyIfNeeded;
- (void)_scheduleDeferredUpdateFollowingHoldForReason:(id)reason;
- (void)_triggerNeedsUpdateFollowingHoldForReason:(id)reason;
- (void)beginHoldingUpdatesForReason:(id)reason;
- (void)endHoldingUpdatesForReason:(id)reason updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)deferred;
- (void)endAllHoldsOnUpdatesForReason:(id)reason updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)deferred;
- (void)_handleReasonsForHoldingUpdatesChangeForReason:(id)reason updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)deferred;
@end

#endif /* CKReasonTrackingUpdater_h */
