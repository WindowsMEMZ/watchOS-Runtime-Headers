//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLStuckTransactionContextFunctionEnumerator_h
#define CSLStuckTransactionContextFunctionEnumerator_h
@import Foundation;

@class NSPointerArray;

@interface CSLStuckTransactionContextFunctionEnumerator : NSObject

@property (retain, nonatomic) NSPointerArray *functions;
@property (nonatomic) unsigned long long currentIndex;

/* instance methods */
- (id)initWithFunctions:(id)functions;
- (undefined *)nextFunction;
@end

#endif /* CSLStuckTransactionContextFunctionEnumerator_h */
