//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDAddAnonymousShareToSharedDBOperation_h
#define CKDAddAnonymousShareToSharedDBOperation_h
@import Foundation;

#include "CKDDatabaseOperation.h"

@class NSDictionary;

@interface CKDAddAnonymousShareToSharedDBOperation : CKDDatabaseOperation

@property (@dynamic, nonatomic) unsigned long long state;
@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd;
@property (copy, nonatomic) id /* block */ anonymousShareSavedBlock;

/* class methods */
+ (id)nameForState:(unsigned long long)state;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (id)activityCreate;
- (BOOL)makeStateTransition;
- (int)operationType;
- (void)_addAnonymousSharesToSharedDB;
- (void)main;
@end

#endif /* CKDAddAnonymousShareToSharedDBOperation_h */
