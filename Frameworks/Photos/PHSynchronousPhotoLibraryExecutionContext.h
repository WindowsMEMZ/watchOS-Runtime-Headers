//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHSynchronousPhotoLibraryExecutionContext_h
#define PHSynchronousPhotoLibraryExecutionContext_h
@import Foundation;

#include "PHPhotoLibraryExecutionContext-Protocol.h"

@class NSString;

@interface PHSynchronousPhotoLibraryExecutionContext : NSObject<PHPhotoLibraryExecutionContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)synchronousExecutionContext;

/* instance methods */
- (void)dispatchOnQueue:(id)queue block:(id /* block */)block;
- (void)sendChangesRequest:(id)request onClient:(id)client reply:(id /* block */)reply;
- (void)callTransactionCompletionHandler:(id /* block */)handler withSuccess:(BOOL)success error:(id)error;
@end

#endif /* PHSynchronousPhotoLibraryExecutionContext_h */
