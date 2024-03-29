//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSFileProviderXPCMessenger_h
#define NSFileProviderXPCMessenger_h
@import Foundation;

#include "NSFileProviderProxy.h"
#include "NSFileProviderXPCInterface-Protocol.h"
#include "NSString.h"

@protocol NSFileProvider, OS_dispatch_queue;

@interface NSFileProviderXPCMessenger : NSObject<NSFileProviderXPCInterface> {
  /* instance variables */
  NSObject<NSFileProvider> *_fileProvider;
  NSObject<OS_dispatch_queue> *_queue;
  NSFileProviderProxy *_fileProviderProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFileProvider:(id)provider queue:(id)queue;
- (id)initWithFileProviderProxy:(id)proxy;
- (void)dealloc;
- (void)invalidate;
- (void)checkInProviderWithReply:(id /* block */)reply;
- (void)_makeProvider:(id)provider provideItemAtURL:(id)url withInfo:(id)info completionHandler:(id /* block */)handler;
- (void)provideItemAtURL:(id)url withInfo:(id)info completionHandler:(id /* block */)handler;
- (void)cancelProvidingItemAtURL:(id)url forClaimWithID:(id)id;
- (void)providePhysicalItemForURL:(id)url completionHandler:(id /* block */)handler;
- (void)observePresentationChangeOfKind:(id)kind forPresenterOfURL:(id)url withInfo:(id)info;
- (void)observeEndOfWriteAtURL:(id)url forClaimWithID:(id)id fromProcessWithIdentifier:(int)identifier;
- (void)movingItemAtURL:(id)url withInfo:(id)info fileName:(id)name completionHandler:(id /* block */)handler;
- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)handler;
@end

#endif /* NSFileProviderXPCMessenger_h */
