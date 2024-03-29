//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 149.1.0.0.0
//
#ifndef AXAuditAutomationSupport_h
#define AXAuditAutomationSupport_h
@import Foundation;

#include "AXAuditThrottler.h"
#include "AXAuditer.h"
#include "AXAuditerDelegate-Protocol.h"

@class NSArray, NSString;
@protocol AXAuditAutomationDelegate, OS_dispatch_queue;

@interface AXAuditAutomationSupport : NSObject<AXAuditerDelegate>

@property (copy) NSString *_auditTimestamp;
@property (retain, nonatomic) AXAuditer *_auditor;
@property (retain, nonatomic) AXAuditThrottler *_screenChangedThrottler;
@property (nonatomic) long long _singleAuditPendingCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_auditQueue;
@property (nonatomic) BOOL _runningContinuousAudit;
@property (nonatomic) struct __AXObserver * _axEventObserver;
@property (nonatomic) BOOL _registeredForNotifications;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_backgroudQueue;
@property (copy, nonatomic) id /* block */ _completionBlock;
@property (retain, nonatomic) NSArray *auditWarningsToCapture;
@property (retain, nonatomic) NSArray *auditWarningsToIgnore;
@property (nonatomic) BOOL runContinuousAudit;
@property (weak, nonatomic) NSObject<AXAuditAutomationDelegate> *delegate;
@property (nonatomic) int targetPid;
@property (copy, nonatomic) NSArray *auditTypes;
@property (retain, nonatomic) NSArray *elementIdentifiersToIgnore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedManager;
+ (id)shortDescriptionForAuditIssue:(id)issue;
+ (id)longDescriptionForAuditIssue:(id)issue;
+ (struct __AXUIElement *)createAXElementForAuditIssue:(id)issue;
+ (id)_currentTimestamp;

/* instance methods */
- (id)init;
- (void)_setupAudit;
- (void)_runAudit;
- (id)_setupWarningsFromAuditTypes;
- (void)startAuditWithCompletionBlock:(id /* block */)block;
- (void)_informDelegateOfResults:(id)results error:(id)error;
- (void)_runNextContinuousAudit;
- (void)_runNextAuditIfNeeded;
- (void)_startContinuousAudit;
- (void)_stopContinuousAudit;
- (void)startSingleAudit;
- (BOOL)runningSingleAudit;
- (void)startContinuousAudit;
- (void)stopContinuousAudit;
- (BOOL)runningContinuousAudit;
- (id)screenshotHighlightingIssue:(id)issue;
- (void)_captureScreenshot;
- (id)fetchScreenshot;
- (void)auditer:(id)auditer didAppendLogWithMessage:(id)message;
- (void)auditer:(id)auditer didEncounterIssue:(id)issue;
- (void)auditer:(id)auditer didCompleteWithResults:(id)results;
- (void)_sendResultsToDelegate:(id)delegate;
- (void)_screenChangedThrottled;
- (void)_screenChangedNotification;
- (BOOL)_initializeAXObserverIfNeeded;
- (id)_accessibilityNotificationsForContinuousAudit;
- (void)_registerForAXNotifications:(BOOL)axnotifications;
@end

#endif /* AXAuditAutomationSupport_h */
