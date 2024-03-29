//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NFPromiseSeal_h
#define NFPromiseSeal_h
@import Foundation;

#include "NFUnfairLock.h"

@class NSError, NSMutableArray;

@interface NFPromiseSeal : NSObject

@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *handlers;
@property (readonly, nonatomic) NFUnfairLock *lock;

/* instance methods */
- (id)init;
- (id)initWithValue:(id)value;
- (id)initWithError:(id)error;
- (void)dealloc;
- (void)resolve:(id)resolve;
- (void)reject:(id)reject;
- (void)resolveOn:(id)on reject:(id /* block */)reject resolve:(id /* block */)resolve;
- (void)alwaysOn:(id)on always:(id /* block */)always;
- (void)registerHandler:(id /* block */)handler;
- (void)seal:(id)seal error:(id)error resolution:(unsigned long long)resolution;
@end

#endif /* NFPromiseSeal_h */
