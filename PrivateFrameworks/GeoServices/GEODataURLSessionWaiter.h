//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEODataURLSessionWaiter_h
#define GEODataURLSessionWaiter_h
@import Foundation;

#include "GEOCancellable-Protocol.h"
#include "GEODataURLSession.h"
#include "GEODataURLSessionTask.h"
#include "GEODataURLSessionTaskDelegate-Protocol.h"

@class NSString;

@interface GEODataURLSessionWaiter : NSObject<GEOCancellable, GEODataURLSessionTaskDelegate> {
  /* instance variables */
  GEODataURLSession *_session;
  GEODataURLSessionTask *_task;
  id /* block */ _handler;
  id _strongReferenceToSelf;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dataURLSession:(id)urlsession didCompleteTask:(id)task;
- (void)cancel;
@end

#endif /* GEODataURLSessionWaiter_h */
