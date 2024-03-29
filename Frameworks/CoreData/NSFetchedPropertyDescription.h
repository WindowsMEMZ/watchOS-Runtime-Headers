//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSFetchedPropertyDescription_h
#define NSFetchedPropertyDescription_h
@import Foundation;

#include "NSPropertyDescription.h"
#include "NSFetchRequest.h"

@class NSString;

@interface NSFetchedPropertyDescription : NSPropertyDescription {
  /* instance variables */
  void * _reserved5;
  void * _reserved6;
  NSString *_lazyFetchRequestEntityName;
}

@property (retain) NSFetchRequest *fetchRequest;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data entitiesSlots:(id)slots fetchRequests:(id)requests;
- (void)dealloc;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (BOOL)isTransient;
- (BOOL)isReadOnly;
- (void)setTransient:(BOOL)transient;
- (void)setReadOnly:(BOOL)only;
- (unsigned long long)_propertyType;
- (void)_createCachesAndOptimizeState;
@end

#endif /* NSFetchedPropertyDescription_h */
