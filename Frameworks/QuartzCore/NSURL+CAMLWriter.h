//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1110.5.0.0.0
//
#ifndef NSURL_CAMLWriter_h
#define NSURL_CAMLWriter_h
@import Foundation;

#include "CAMLWriterDelegate-Protocol.h"

@class NSURL;

@interface NSURL (CAMLWriter)
/* instance methods */
- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)camlwriter;
@end

#endif /* NSURL_CAMLWriter_h */
