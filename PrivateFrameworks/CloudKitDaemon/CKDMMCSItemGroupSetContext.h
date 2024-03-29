//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDMMCSItemGroupSetContext_h
#define CKDMMCSItemGroupSetContext_h
@import Foundation;

#include "CKDCancelling-Protocol.h"
#include "CKDMMCSItemGroupSet.h"
#include "CKDOperation.h"

@class NSMutableArray;
@protocol OS_dispatch_group;

@interface CKDMMCSItemGroupSetContext : NSObject<CKDCancelling>

@property (retain, nonatomic) CKDMMCSItemGroupSet *itemGroupSet;
@property (weak, nonatomic) CKDOperation *operation;
@property (retain, nonatomic) NSMutableArray *itemGroupContexts;
@property (copy, nonatomic) id /* block */ itemGroupCompletionBlock;
@property (copy, nonatomic) id /* block */ itemGroupSetCompletionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *itemGroupSetCompletionGroup;
@property (nonatomic) long long mmcsOperationType;

/* instance methods */
- (id)initWithItemGroupSet:(id)set itemGroupSetCompletionBlock:(id /* block */)block;
- (void)cancel;
- (void)addItemGroupContext:(id)context;
- (void)start;
@end

#endif /* CKDMMCSItemGroupSetContext_h */
