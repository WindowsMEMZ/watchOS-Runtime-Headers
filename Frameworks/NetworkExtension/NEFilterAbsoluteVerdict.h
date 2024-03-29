//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEFilterAbsoluteVerdict_h
#define NEFilterAbsoluteVerdict_h
@import Foundation;

#include "NEFilterVerdict.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface NEFilterAbsoluteVerdict : NEFilterVerdict<NSSecureCoding, NSCopying>

@property unsigned long long inboundPassOffset;
@property unsigned long long inboundPeekOffset;
@property unsigned long long outboundPassOffset;
@property unsigned long long outboundPeekOffset;
@property long long statisticsReportFrequency;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithDrop:(BOOL)drop inboundPassOffset:(unsigned long long)offset inboundPeekOffset:(unsigned long long)offset outboundPassOffset:(unsigned long long)offset outboundPeekOffset:(unsigned long long)offset;
- (id)descriptionWithIndent:(int)indent options:(unsigned long long)options;
- (long long)filterAction;
@end

#endif /* NEFilterAbsoluteVerdict_h */
