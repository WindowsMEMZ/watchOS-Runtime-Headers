//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPushServiceConnectionCreator_h
#define TRIPushServiceConnectionCreator_h
@import Foundation;

#include "TRIPushServiceConnectionCreating-Protocol.h"

@interface TRIPushServiceConnectionCreator : NSObject<TRIPushServiceConnectionCreating>
/* instance methods */
- (id)connectionWithDelegate:(id)delegate environment:(unsigned char)environment;
@end

#endif /* TRIPushServiceConnectionCreator_h */
