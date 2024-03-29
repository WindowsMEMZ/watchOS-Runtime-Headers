//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef CUIKCreateOperation_h
#define CUIKCreateOperation_h
@import Foundation;

#include "CUIKUserOperation.h"

@class NSArray;

@interface CUIKCreateOperation : CUIKUserOperation

@property (retain, nonatomic) NSArray *precomputedInverseObjects;

/* instance methods */
- (id)_actionName;
- (BOOL)_executeWithUndoDelegate:(id)delegate error:(id *)error;
- (Class)_inverseOperationClass;
- (void)_precomputeInverseObjects;
- (id)_objectsForInverse;
- (long long)_inverseOperationSpan;
@end

#endif /* CUIKCreateOperation_h */
