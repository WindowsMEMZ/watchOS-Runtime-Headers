//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EFInvocationToken_h
#define EFInvocationToken_h
@import Foundation;

#include "EFInvocable-Protocol.h"

@class NSLock, NSMutableArray, NSString;

@interface EFInvocationToken : NSObject<EFInvocable> {
  /* instance variables */
  NSLock *_lock;
  NSMutableArray *_blocks;
  BOOL _isInvoked;
}

@property (readonly) BOOL invoked;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_descriptionString;
+ (id)tokenWithLabel:(id)label invocationBlock:(id /* block */)block;
+ (id)tokenWithInvocationBlock:(id /* block */)block;

/* instance methods */
- (id)init;
- (id)initWithLabel:(id)label;
- (id)initWithInvocationBlock:(id /* block */)block;
- (id)_nts_consumeBlocks;
- (void)removeAllInvocationBlocks;
- (void)invoke;
- (BOOL)isInvoked;
- (void)addInvocationBlock:(id /* block */)block;
- (void)addInvocable:(id)invocable;
@end

#endif /* EFInvocationToken_h */
