//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRExpanseManager_h
#define MRExpanseManager_h
@import Foundation;

#include "TUConversationManagerDelegate-Protocol.h"

@class AVAudioSession, NSHashTable, NSString, TUConversationManager, TUNeighborhoodActivityConduit;
@protocol OS_dispatch_queue;

@interface MRExpanseManager : NSObject<TUConversationManagerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) TUConversationManager *conversationManager;
@property (readonly, nonatomic) TUNeighborhoodActivityConduit *conduit;
@property (retain, nonatomic) AVAudioSession *auxiliaryPlaybackAudioSession;
@property (readonly, nonatomic) BOOL expanseSessionActive;
@property (readonly, nonatomic) BOOL expanseSessionHasActiveActivity;
@property (readonly, nonatomic) BOOL expanseSessionHasRemoteActivity;
@property (readonly, nonatomic) BOOL expanseSessionHasScreenSharingActivity;
@property (readonly, nonatomic) BOOL expanseHandoffSupported;
@property (readonly, nonatomic) NSString *activeTelevisionRouteID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (void)dealloc;
- (BOOL)activeActivityExistsForBundle:(id)bundle;
- (BOOL)deviceIsActiveTelevision:(id)television;
- (id)activeConversation;
- (BOOL)errorIsTelevisionCapabilitiesError:(id)error;
- (void)addTelevisionWithRouteIdentifierToSession:(id)session completion:(id /* block */)completion;
- (void)removeTelevisionWithRouteIdentifierFromSession:(id)session completion:(id /* block */)completion;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
@end

#endif /* MRExpanseManager_h */
