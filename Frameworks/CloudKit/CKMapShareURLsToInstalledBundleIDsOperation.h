//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKMapShareURLsToInstalledBundleIDsOperation_h
#define CKMapShareURLsToInstalledBundleIDsOperation_h
@import Foundation;

#include "CKOperation.h"
#include "CKMapShareURLsToInstalledBundleIDsOperationCallbacks-Protocol.h"
#include "CKMapShareURLsToInstalledBundleIDsOperationInfo.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKMapShareURLsToInstalledBundleIDsOperation : CKOperation<CKMapShareURLsToInstalledBundleIDsOperationCallbacks>

@property (retain, nonatomic) NSMutableArray *specialURLs;
@property (retain, nonatomic) NSMutableArray *genericURLs;
@property (retain, nonatomic) NSMutableDictionary *errorsByURL;
@property (nonatomic) BOOL returnLocalBundlesOnly;
@property (readonly, @dynamic, nonatomic) NSObject<CKMapShareURLsToInstalledBundleIDsOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, @dynamic, nonatomic) CKMapShareURLsToInstalledBundleIDsOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *shareURLs;
@property (copy, nonatomic) id /* block */ perShareURLBlock;
@property (copy, nonatomic) id /* block */ mapBundleIDsCompletionBlock;

/* class methods */
+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)tweaks;

/* instance methods */
- (id)init;
- (id)initWithShareURLs:(id)urls returnLocalBundlesOnly:(BOOL)only;
- (void)fillOutOperationInfo:(id)info;
- (void)fillFromOperationInfo:(id)info;
- (BOOL)hasCKOperationCallbacksSet;
- (BOOL)CKOperationShouldRun:(id *)run;
- (void)performCKOperation;
- (void)handleBundleIDsFetchedForURL:(id)url appBundleIDs:(id)ids daemonBundleIDs:(id)ids error:(id)error;
- (void)_finishOnCallbackQueueWithError:(id)error;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)error;
- (id)activityCreate;
- (id)selectLocalBundleIDs:(id)ids;
- (id)getStaticBundleIDsForURLSlug:(id)urlslug withKey:(id)key;
@end

#endif /* CKMapShareURLsToInstalledBundleIDsOperation_h */
