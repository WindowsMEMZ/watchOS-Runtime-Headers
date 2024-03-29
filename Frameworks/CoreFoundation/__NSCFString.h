//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef __NSCFString_h
#define __NSCFString_h
@import Foundation;

#include "__NSCFType.h"

@interface __NSCFString : __NSCFType
/* class methods */
+ (id)allocWithZone:(struct _NSZone *)zone;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;

/* instance methods */
- (BOOL)isNSString__;
- (id)retain;
- (void)release;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)index;
- (void)getCharacters:(unsigned short *)characters range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (const unsigned short *)_fastCharacterContents;
- (const char *)_fastCStringContents:(BOOL)contents;
- (const char *)cString;
- (const char *)UTF8String;
- (unsigned long long)cStringLength;
- (const char *)cStringUsingEncoding:(unsigned long long)encoding;
- (BOOL)getCString:(char *)cstring maxLength:(unsigned long long)length encoding:(unsigned long long)encoding;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range zone:(struct _NSZone *)zone;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToString:(id)string;
- (BOOL)hasPrefix:(id)prefix;
- (BOOL)hasSuffix:(id)suffix;
- (void)getLineStart:(unsigned long long *)start end:(unsigned long long *)end contentsEnd:(unsigned long long *)end forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copy;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (unsigned long long)fastestEncoding;
- (unsigned long long)smallestEncoding;
- (Class)classForCoder;
- (BOOL)_isCString;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withString:(id)string;
- (void)insertString:(id)string atIndex:(unsigned long long)index;
- (void)appendString:(id)string;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)appendFormat:(id)format;
- (void)setString:(id)string;
- (void)appendCharacters:(const unsigned short *)characters length:(unsigned long long)length;
- (unsigned long long)replaceOccurrencesOfString:(id)string withString:(id)string options:(unsigned long long)options range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
@end

#endif /* __NSCFString_h */
