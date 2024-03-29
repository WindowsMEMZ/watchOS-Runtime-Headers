//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCTagRelationshipsOperation_h
#define FCTagRelationshipsOperation_h
@import Foundation;

#include "FCOperation.h"
#include "FCContentContext-Protocol.h"
#include "FCTagProviding-Protocol.h"
#include "FCTagRelationships.h"

@interface FCTagRelationshipsOperation : FCOperation

@property (readonly, copy, nonatomic) NSObject<FCContentContext> *context;
@property (readonly, copy, nonatomic) NSObject<FCTagProviding> *tag;
@property (retain, nonatomic) FCTagRelationships *resultTagRelationships;
@property (copy, nonatomic) id /* block */ completionHandler;

/* instance methods */
- (id)initWithContext:(id)context tag:(id)tag;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)error;
@end

#endif /* FCTagRelationshipsOperation_h */
