//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef FATException_h
#define FATException_h
@import Foundation;

#include "NSException.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface FATException : NSException<NSCoding, NSCopying>
/* class methods */
+ (void)initialize;
+ (id)structName;
+ (id)structFields;

/* instance methods */
- (id)init;
- (void)read:(id)read;
- (void)write:(id)write;
@end

#endif /* FATException_h */
