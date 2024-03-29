//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SHSheetInteractor_Protocol_h
#define SHSheetInteractor_Protocol_h
@import Foundation;

#include "SFCollaborationCreationDelegate-Protocol.h"
#include "SFCollaborationPerformerDelegate-Protocol.h"
#include "SHSheetActivityPerformer.h"
#include "SHSheetActivityPerformerDelegate-Protocol.h"
#include "SHSheetActivityPerformerPresentationInterface-Protocol.h"
#include "SHSheetInteractor-Protocol.h"
#include "SHSheetInteractorDelegate-Protocol.h"
#include "SHSheetServiceManager.h"
#include "SHSheetServiceManagerDelegate-Protocol.h"
#include "SHSheetSession.h"
#include "SHSheetSessionDelegate-Protocol.h"

@class NSString, SFCollaborationPerformer;

@protocol SHSheetInteractor <SHSheetHostService>

@property (weak, nonatomic) NSObject<SHSheetInteractorDelegate> *delegate;
@property (readonly, nonatomic) NSObject<SHSheetSession> *session;
@property (readonly, nonatomic) SHSheetActivityPerformer *activityPerformer;
@property (readonly, nonatomic) BOOL hasSessionStarted;

/* instance methods */
- (void)setWantsCollaborativeSession:(BOOL)session;
- (void)updateSessionWithContext:(id)context;
- (void)startSession;
- (void)stopSession;
- (void)requestServiceUpdate;
- (void)performActivity:(id)activity;
- (void)performPeopleSuggestion:(id)suggestion;
- (void)performActivityWithRequest:(id)request forExtension:(id)extension completion:(id /* block */)completion;
- (void)clearActivityForResult:(id)result;
- (void)preheatActivitiesIfNeeded;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)invalidateRemoteSession;
@end

#endif /* SHSheetInteractor_Protocol_h */
