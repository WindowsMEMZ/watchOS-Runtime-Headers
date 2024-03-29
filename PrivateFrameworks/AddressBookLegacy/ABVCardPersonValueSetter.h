//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12698.0.0.0.0
//
#ifndef ABVCardPersonValueSetter_h
#define ABVCardPersonValueSetter_h
@import Foundation;

#include "ABVCardValueSetter.h"

@interface ABVCardPersonValueSetter : ABVCardValueSetter {
  /* instance variables */
  void * _person;
  struct __CFArray * _properties;
}

/* class methods */
+ (struct __CFArray *)supportedProperties;

/* instance methods */
- (id)initWithPerson:(void *)person;
- (struct __CFArray *)foundProperties;
- (void)dealloc;
- (BOOL)setValue:(void *)value forProperty:(unsigned int)property;
- (void *)valueForProperty:(unsigned int)property;
- (BOOL)setImageData:(id)data cropRectX:(int)x cropRectY:(int)y cropRectWidth:(int)width cropRectHeight:(int)height;
- (id)imageData;
- (id)fullName;
- (void)setValueInTemporaryCache:(id)cache forProperty:(unsigned int)property;
@end

#endif /* ABVCardPersonValueSetter_h */
