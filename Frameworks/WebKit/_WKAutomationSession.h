//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _WKAutomationSession_h
#define _WKAutomationSession_h
@import Foundation;

#include "WKObject-Protocol.h"

@class NSString;
@protocol _WKAutomationSessionDelegate, {ObjectStorage<WebKit::WebAutomationSession>="data"{type="__lx"[328C]}}, {RetainPtr<_WKAutomationSessionConfiguration>="m_ptr"^v}, {WeakObjCPtr<id<_WKAutomationSessionDelegate>>="m_weakReference"@};

@interface _WKAutomationSession : NSObject<WKObject> {
  /* instance variables */
  struct ObjectStorage<WebKit::WebAutomationSession> { struct type { unsigned char x[328] __lx; } data; } _session;
}

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) _WKAutomationSessionConfiguration *configuration;
@property (weak, nonatomic) NSObject<_WKAutomationSessionDelegate> *delegate;
@property (readonly, nonatomic) BOOL paired;
@property (readonly, nonatomic) BOOL pendingTermination;
@property (readonly, nonatomic) BOOL simulatingUserInteraction;
@property (readonly) struct Object { undefined * * x0; void * x1; } * _apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (void)dealloc;
- (BOOL)isPaired;
- (BOOL)isPendingTermination;
- (BOOL)isSimulatingUserInteraction;
- (void)terminate;
@end

#endif /* _WKAutomationSession_h */
