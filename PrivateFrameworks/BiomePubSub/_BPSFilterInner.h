//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef _BPSFilterInner_h
#define _BPSFilterInner_h
@import Foundation;

#include "BPSFilterProducer.h"

@interface _BPSFilterInner : BPSFilterProducer

@property (readonly, nonatomic) id /* block */ isIncluded;

/* instance methods */
- (id)initWithDownstream:(id)downstream isIncluded:(id /* block */)included;
- (id)receiveNewValue:(id)value;
@end

#endif /* _BPSFilterInner_h */
