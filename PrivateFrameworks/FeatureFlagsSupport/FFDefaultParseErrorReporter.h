//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 85.0.0.0.0
//
#ifndef FFDefaultParseErrorReporter_h
#define FFDefaultParseErrorReporter_h
@import Foundation;

#include "FFParseErrorReporter-Protocol.h"

@interface FFDefaultParseErrorReporter : NSObject<FFParseErrorReporter>
/* instance methods */
- (void)reportError:(id)error;
@end

#endif /* FFDefaultParseErrorReporter_h */
