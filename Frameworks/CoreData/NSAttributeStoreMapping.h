//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSAttributeStoreMapping_h
#define NSAttributeStoreMapping_h
@import Foundation;

#include "NSPropertyStoreMapping.h"

@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
  /* instance variables */
  int _externalType;
  unsigned int _externalPrecision;
  int _externalScale;
}

/* instance methods */
- (id)initWithProperty:(id)property;
- (BOOL)isEqual:(id)equal;
- (id)attribute;
- (int)externalType;
- (void)setExternalType:(int)type;
- (id)sqlType;
@end

#endif /* NSAttributeStoreMapping_h */
