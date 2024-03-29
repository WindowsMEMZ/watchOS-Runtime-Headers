//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPIChargingCoordinator_h
#define CSLPIChargingCoordinator_h
@import Foundation;

#include "CSLPIChargingCoordinating-Protocol.h"
#include "CSLPIChargingPresentation.h"
#include "CSLPIChargingPresentationDelegate-Protocol.h"

@class NSString;
@protocol CSLPIChargingCoordinatorDelegate;

@interface CSLPIChargingCoordinator : NSObject<CSLPIChargingCoordinating, CSLPIChargingPresentationDelegate> {
  /* instance variables */
  NSObject<CSLPIChargingCoordinatorDelegate> *_strongDelegate;
}

@property (retain, nonatomic) CSLPIChargingPresentation *activePresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CSLPIChargingPresentation *activePresentation;
@property (readonly, weak, nonatomic) NSObject<CSLPIChargingCoordinatorDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)_withClassLock:(id /* block */)lock;
+ (void)setManager:(id)manager;
+ (id)getManager;
+ (void)addCoordinator:(id)coordinator;
+ (void)removeCoordinator:(id)coordinator;
+ (id)activeCoordinator;
+ (void)removeActiveCoordinator;

/* instance methods */
- (void)presentChargingAlert:(id)alert;
- (void)dismissChargingAlert;
- (void)endChargingAlertAnimation;
- (void)nightstandChanged:(BOOL)changed;
- (void)mayContinueAfterStartingBlack;
- (id)initWithDelegate:(id)delegate;
- (void)dealloc;
- (void)turnBacklightOn:(BOOL)on;
- (void)turnBacklightOff;
- (id)addAssertionForAlertPolicy:(id)policy;
- (void)chargingPresentation:(id)presentation didAdvanceToStage:(unsigned long long)stage;
@end

#endif /* CSLPIChargingCoordinator_h */
