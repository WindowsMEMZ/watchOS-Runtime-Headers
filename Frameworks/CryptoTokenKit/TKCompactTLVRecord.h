//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 685.60.2.0.0
//
#ifndef TKCompactTLVRecord_h
#define TKCompactTLVRecord_h
@import Foundation;

#include "TKTLVRecord.h"

@interface TKCompactTLVRecord : TKTLVRecord
/* class methods */
+ (id)parseFromDataSource:(id)source;

/* instance methods */
- (id)initWithTag:(unsigned char)tag value:(id)value;
@end

#endif /* TKCompactTLVRecord_h */
