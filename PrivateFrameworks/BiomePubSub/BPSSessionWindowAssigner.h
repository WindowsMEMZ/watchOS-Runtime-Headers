//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BPSSessionWindowAssigner_h
#define BPSSessionWindowAssigner_h
@import Foundation;

#include "BPSAggregator.h"
#include "BPSWindowAssigner-Protocol.h"

@class NSDate, NSString;

@interface BPSSessionWindowAssigner : NSObject<BPSWindowAssigner> {
  /* instance variables */
  double _gap;
  BPSAggregator *_aggregator;
  id /* block */ _timestamp;
  unsigned long long _identifier;
  NSDate *_lastTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithGap:(double)gap aggregator:(id)aggregator;
- (id)initWithGap:(double)gap timestamp:(id /* block */)timestamp aggregator:(id)aggregator;
- (id)assignWindow:(id)window input:(id)input;
- (id)updateAndReturnNewWindowStates:(id)states input:(id)input;
@end

#endif /* BPSSessionWindowAssigner_h */
