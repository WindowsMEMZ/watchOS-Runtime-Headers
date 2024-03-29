//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EFListStateCapturer_h
#define EFListStateCapturer_h
@import Foundation;

#include "EFCancelable-Protocol.h"

@protocol OS_dispatch_queue;

@interface EFListStateCapturer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateCaptureQueue;
@property (readonly, nonatomic) NSObject<EFCancelable> *stateCaptureCancelable;

/* instance methods */
- (id)initWithTitle:(id)title itemName:(id)name headLimit:(unsigned long long)limit tailLimit:(unsigned long long)limit delegate:(id)delegate;
- (void)dealloc;
@end

#endif /* EFListStateCapturer_h */
