//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLInstrumentedOperationQueue_h
#define PLInstrumentedOperationQueue_h
@import Foundation;

#include "NSOperationQueue.h"

@interface PLInstrumentedOperationQueue : NSOperationQueue

@property (copy) id /* block */ pl_operationCountChangedBlock;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* PLInstrumentedOperationQueue_h */
