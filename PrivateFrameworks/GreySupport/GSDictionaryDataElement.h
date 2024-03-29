//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.0.4.0.0
//
#ifndef GSDictionaryDataElement_h
#define GSDictionaryDataElement_h
@import Foundation;

#include "GSDataElement.h"

@class NSMutableDictionary;

@interface GSDictionaryDataElement : GSDataElement {
  /* instance variables */
  NSMutableDictionary *_originalDictionary;
}

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)dictionaryRepresentation;
- (BOOL)isValid;
- (double)hidDataTimestamp;
- (void)setHidDataTimestamp:(double)timestamp;
- (id)copyWithValidity:(BOOL)validity;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* GSDictionaryDataElement_h */
