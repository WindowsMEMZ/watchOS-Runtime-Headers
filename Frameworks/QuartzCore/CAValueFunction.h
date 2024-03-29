//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1110.5.0.0.0
//
#ifndef CAValueFunction_h
#define CAValueFunction_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CAValueFunction : NSObject<NSSecureCoding> {
  /* instance variables */
  NSString *_string;
  void * _impl;
}

@property (readonly) NSString *name;

/* class methods */
+ (id)functionWithName:(id)name;
+ (BOOL)supportsSecureCoding;
+ (void)CAMLParserStartElement:(id)element;

/* instance methods */
- (id)_initWithName:(int)name;
- (void)dealloc;
- (unsigned long long)inputCount;
- (unsigned long long)outputCount;
- (BOOL)apply:(const double *)apply result:(double *)result;
- (BOOL)apply:(const double *)apply result:(double *)result parameterFunction:(undefined *)function context:(void *)context;
- (struct Object { undefined * * x0; struct Atomic { struct { int x0; } x0; } x1; unsigned int x2 :8; unsigned int x3 :24; } *)CA_copyRenderValue;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCAMLWriter:(id)camlwriter;
@end

#endif /* CAValueFunction_h */
