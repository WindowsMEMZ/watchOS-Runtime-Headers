//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 139.203.0.0.0
//
#ifndef RTIInputSystemService_h
#define RTIInputSystemService_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"
#include "RTIInputSystemServiceSession.h"
#include "RTIInputSystemSessionDelegate-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue, RTIInputSystemDelegate;

@interface RTIInputSystemService : NSObject<NSXPCListenerDelegate, RTIInputSystemSessionDelegate> {
  /* instance variables */
  NSMutableSet *_sessions;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sessionsLock;
}

@property (retain, nonatomic) NSString *machName;
@property (retain, nonatomic) NSXPCListener *listener;
@property (copy, nonatomic) NSString *lastAppId;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (weak, nonatomic) NSObject<RTIInputSystemDelegate> *delegate;
@property (readonly, nonatomic) RTIInputSystemServiceSession *currentSession;
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedServiceWithMachName:(id)name;
+ (Class)serviceSessionClass;

/* instance methods */
- (id)initWithMachName:(id)name;
- (void)dealloc;
- (void)_createListenerIfNecessary;
- (void)_destroyListenerIfNecessary;
- (BOOL)_canResumeConnection;
- (void)inputSession:(id)session didReceiveConnection:(id)connection;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)prepareForInputSession:(id)session options:(id)options;
- (void)inputSessionDidBegin:(id)begin options:(id)options;
- (void)inputSessionDidEnd:(id)end options:(id)options;
- (void)inputSessionDidEnd:(id)end options:(id)options completion:(id /* block */)completion;
- (void)inputSessionDidDie:(id)die;
- (void)inputSession:(id)session documentTraitsDidChange:(id)change;
- (void)inputSession:(id)session documentStateDidChange:(id)change;
- (void)inputSession:(id)session didChangePause:(BOOL)pause withReason:(id)reason;
- (void)inputSession:(id)session textSuggestionsChanged:(id)changed;
- (void)inputSession:(id)session didAddSupplementalLexicon:(id)lexicon;
- (void)inputSession:(id)session didAddRTISupplementalLexicon:(id)lexicon;
- (void)inputSession:(id)session didRemoveSupplementalLexicon:(id)lexicon;
- (void)inputSession:(id)session didRemoveRTISupplementalLexicon:(id)lexicon;
- (void)inputSession:(id)session performInputOperation:(id)operation;
- (void)inputSession:(id)session performInputOperation:(id)operation withResponse:(id /* block */)response;
- (BOOL)isEnabled;
@end

#endif /* RTIInputSystemService_h */
