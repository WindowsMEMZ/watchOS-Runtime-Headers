//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNResult_h
#define CNResult_h
@import Foundation;

#include "CNEither.h"

@class NSError;

@interface CNResult : NSObject

@property (readonly) CNEither *either;
@property (readonly) id value;
@property (readonly, copy) NSError *error;
@property (readonly) BOOL isSuccess;
@property (readonly) BOOL isFailure;

/* class methods */
+ (id)resultWithValue:(id)value orError:(id)error;
+ (id)resultWithBlock:(id /* block */)block;
+ (id)resultWithFuture:(id)future;
+ (id)resultWithFuture:(id)future timeout:(double)timeout;
+ (id)successWithValue:(id)value;
+ (id)failureWithError:(id)error;
+ (id /* block */)isSuccess;
+ (id /* block */)isFailure;

/* instance methods */
- (id)initWithValue:(id)value error:(id)error;
- (id)initWithValue:(id)value;
- (id)initWithError:(id)error;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)valueWithError:(id *)error;
- (id)flatMap:(id /* block */)map;
- (id)recover:(id /* block */)recover;
@end

#endif /* CNResult_h */
