//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1158.1.1.0.0
//
#ifndef ICSDuration_h
#define ICSDuration_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface ICSDuration : NSObject<NSSecureCoding> {
  /* instance variables */
  double _duration;
}

/* class methods */
+ (id)durationFromRFC2445UTF8String:(const char *)string;
+ (id)durationFromICSString:(id)icsstring;
+ (id)generateDurationFromICSString:(id)icsstring;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)_ICSStringWithOptions:(unsigned long long)options appendingToString:(id)string;
- (id)initWithWeeks:(long long)weeks days:(long long)days hours:(long long)hours minutes:(long long)minutes seconds:(long long)seconds;
- (double)timeInterval;
- (long long)weeks;
- (long long)days;
- (long long)hours;
- (long long)minutes;
- (long long)seconds;
- (BOOL)isNegative;
- (id)ICSStringWithOptions:(unsigned long long)options;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* ICSDuration_h */
