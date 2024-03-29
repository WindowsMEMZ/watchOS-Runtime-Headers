//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSStoreMapNode_h
#define NSStoreMapNode_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSManagedObjectID.h"
#include "NSPersistentStoreMap.h"

@class NSMutableDictionary, NSString;

@interface NSStoreMapNode : NSObject<NSCoding> {
  /* instance variables */
  NSPersistentStoreMap *_map;
  NSManagedObjectID *_objectID;
  NSMutableDictionary *_relatedNodes;
  NSString *_entityName;
  unsigned int _version;
}

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithObjectID:(id)id;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (id)objectID;
- (id)key;
- (id)entity;
- (id)configurationName;
- (id)destinationsForRelationship:(id)relationship;
- (unsigned int)_versionNumber;
- (void)_setVersionNumber:(unsigned int)number;
- (const id *)knownKeyValuesPointer;
- (id)_snapshot_;
@end

#endif /* NSStoreMapNode_h */
