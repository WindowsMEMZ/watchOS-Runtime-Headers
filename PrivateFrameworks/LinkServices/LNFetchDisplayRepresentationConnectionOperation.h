//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNFetchDisplayRepresentationConnectionOperation_h
#define LNFetchDisplayRepresentationConnectionOperation_h
@import Foundation;

#include "LNInterfaceConnectionOperation.h"

@class NSArray;

@interface LNFetchDisplayRepresentationConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) id /* block */ completionHandler;

/* instance methods */
- (id)initWithConnectionInterface:(id)interface actions:(id)actions queue:(id)queue completionHandler:(id /* block */)handler;
- (void)start;
- (void)finishWithError:(id)error;
@end

#endif /* LNFetchDisplayRepresentationConnectionOperation_h */
