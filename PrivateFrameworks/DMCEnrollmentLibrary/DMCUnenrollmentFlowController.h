//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCUnenrollmentFlowController_h
#define DMCUnenrollmentFlowController_h
@import Foundation;

#include "DMCEnrollmentFlowControllerBase.h"

@class NSString;
@protocol DMCEnrollmentFlowMCBridge, DMCUnenrollmentFlowPresenter;

@interface DMCUnenrollmentFlowController : DMCEnrollmentFlowControllerBase

@property (retain, nonatomic) NSObject<DMCUnenrollmentFlowPresenter> *presenter;
@property (retain, nonatomic) NSObject<DMCEnrollmentFlowMCBridge> *managedConfigurationHelper;
@property (copy, nonatomic) id /* block */ unenrollmentCompletionHandler;
@property (copy, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSString *personaID;
@property (nonatomic) BOOL isAppleMAID;

/* instance methods */
- (id)initWithPresenter:(id)presenter managedConfigurationHelper:(id)helper;
- (void)unenrollAccountWithAltDSID:(id)dsid silent:(BOOL)silent completionHandler:(id /* block */)handler;
- (void)_resetToInitialStepsWithSilent:(BOOL)silent;
- (void)_workerQueue_performFlowStep:(unsigned long long)step;
- (void)_workerQueue_flowCompleted;
- (void)_flowTerminatedWithError:(id)error canceled:(BOOL)canceled;
- (id)_interactiveUnenrollmentSteps;
- (id)_silentUnenrollmentSteps;
- (void)_preflightUnenrollmentWithAccoutAltDSID:(id)dsid;
- (void)_askForUserConfirmationIsAppleMAID:(BOOL)maid;
- (void)_askForPasscodeIfNeeded;
- (void)_uninstallEnrollmentProfileWithIdentifier:(id)identifier personaID:(id)id altDSID:(id)dsid isAppleMAID:(BOOL)maid;
- (id)_nameForStep:(unsigned long long)step;
@end

#endif /* DMCUnenrollmentFlowController_h */
