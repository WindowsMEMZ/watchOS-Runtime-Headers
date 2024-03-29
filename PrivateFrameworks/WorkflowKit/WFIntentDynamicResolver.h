//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFIntentDynamicResolver_h
#define WFIntentDynamicResolver_h
@import Foundation;

#include "INCExtensionProxy-Protocol.h"
#include "WFIntentDynamicResolverDataSource-Protocol.h"

@class INCExtensionConnection, NSMutableSet, NSString;

@interface WFIntentDynamicResolver : NSObject

@property (readonly, nonatomic) INCExtensionConnection *extensionConnection;
@property (readonly, nonatomic) NSObject<INCExtensionProxy> *extensionProxy;
@property (retain, nonatomic) NSMutableSet *activeRequests;
@property (readonly, copy, nonatomic) NSString *intentKeyPathToResolve;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, weak, nonatomic) NSObject<WFIntentDynamicResolverDataSource> *dataSource;

/* instance methods */
- (id)initWithIntentKeyPathToResolve:(id)resolve dataSource:(id)source;
- (void)beginSessionWithCompletionBlock:(id /* block */)block;
- (void)endSession;
- (id)resolveWithUserInput:(id)input completionBlock:(id /* block */)block;
- (id)intent;
- (void)populatedSkeletonIntentWithUserInput:(id)input forKeyPath:(id)path completionBlock:(id /* block */)block;
- (void)failWithError:(id)error;
@end

#endif /* WFIntentDynamicResolver_h */
