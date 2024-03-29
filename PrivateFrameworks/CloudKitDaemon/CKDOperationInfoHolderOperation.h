//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDOperationInfoHolderOperation_h
#define CKDOperationInfoHolderOperation_h
@import Foundation;

#include "CKDOperation.h"

@interface CKDOperationInfoHolderOperation : CKDOperation

@property (nonatomic) int operationType;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container operationType:(int)type;
- (BOOL)shouldKeepXPCConnectionAlive;
- (void)main;
@end

#endif /* CKDOperationInfoHolderOperation_h */
