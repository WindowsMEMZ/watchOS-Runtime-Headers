//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSEntityStoreMapping_h
#define NSEntityStoreMapping_h
@import Foundation;

#include "NSStoreMapping.h"
#include "NSEntityDescription.h"

@class NSArray, NSDictionary, NSString;

@interface NSEntityStoreMapping : NSStoreMapping {
  /* instance variables */
  NSEntityDescription *_entity;
  NSDictionary *_propertyMappings;
  NSArray *_primaryKeys;
  BOOL _isSingleTableEntity;
  NSString *_subentityColumn;
  unsigned int _subentityID;
}

/* instance methods */
- (id)initWithEntity:(id)entity;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (id)entity;
- (id)propertyMappings;
- (id)primaryKeys;
- (BOOL)isSingleTableEntity;
- (id)subentityColumn;
- (unsigned int)subentityID;
@end

#endif /* NSEntityStoreMapping_h */
