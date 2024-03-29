//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFShortcutRunnerSandboxExtensionManager_h
#define WFShortcutRunnerSandboxExtensionManager_h
@import Foundation;

@class NSMutableSet;

@interface WFShortcutRunnerSandboxExtensionManager : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableSet *issuedExtensionsAccessResources;
@property (readonly, nonatomic) NSMutableSet *issuedExtensionHandlers;
@property (readonly, nonatomic) NSMutableSet *resignedExtensionsAccessResources;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (void)performWithSandboxExtensions:(id)extensions asynchronousBlock:(id /* block */)block;
- (void)performWithSandboxExtensions:(id)extensions synchronousBlock:(id /* block */)block;
- (void)resignIssuedExtensionsWithReason:(id)reason;
- (BOOL)retakeResignedExtensionsWithReason:(id)reason error:(id *)error;
- (id)asynchronousRemoteDataStoreWithErrorHandler:(id /* block */)handler;
- (id)synchronousRemoteDataStoreWithErrorHandler:(id /* block */)handler;
- (id)requestExtensionTokensForAccessResources:(id)resources rejectedAccessResources:(id *)resources error:(id *)error;
- (void)requestExtensionTokensForAccessResources:(id)resources completion:(id /* block */)completion;
- (void)requestSandboxExtensionForRunningActionWithAccessResources:(id)resources completion:(id /* block */)completion;
- (BOOL)requestSandboxExtensionForRunningActionWithAccessResources:(id)resources error:(id *)error;
- (void)temporaryRequestSandboxExtensionWithBlock:(id /* block */)block;
@end

#endif /* WFShortcutRunnerSandboxExtensionManager_h */
