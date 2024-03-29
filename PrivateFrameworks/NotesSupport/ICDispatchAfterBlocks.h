//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef ICDispatchAfterBlocks_h
#define ICDispatchAfterBlocks_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface ICDispatchAfterBlocks : NSObject

@property (copy, nonatomic) NSObject<NSCopying> *identifier;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (void)dealloc;
- (void)dispatchAfter:(double)after withBlock:(id /* block */)block;
- (void)performBlock:(id /* block */)block;
- (void)cancelAll;
@end

#endif /* ICDispatchAfterBlocks_h */
