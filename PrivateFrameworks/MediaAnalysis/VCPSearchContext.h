//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPSearchContext_h
#define VCPSearchContext_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSMutableDictionary;

@interface VCPSearchContext : NSObject<NSSecureCoding> {
  /* instance variables */
  NSMutableDictionary *_entities;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;
- (id)initWithEntities:(id)entities;
- (void)addIdentifiers:(id)identifiers forType:(long long)type;
- (void)setIdentifiers:(id)identifiers forType:(long long)type;
- (id)entities;
@end

#endif /* VCPSearchContext_h */
