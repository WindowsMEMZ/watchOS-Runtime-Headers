//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFStorageServiceCancellableOperation_h
#define WFStorageServiceCancellableOperation_h
@import Foundation;

#include "WFFileStorageServiceOperation-Protocol.h"

@class NSString;

@interface WFStorageServiceCancellableOperation : NSObject<WFFileStorageServiceOperation>

@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly, nonatomic) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCancelBlock:(id /* block */)block;
- (BOOL)isCancelled;
- (void)cancel;
@end

#endif /* WFStorageServiceCancellableOperation_h */
