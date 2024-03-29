//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 66.0.0.0.0
//
#ifndef DebugHierarchyRuntimeType_h
#define DebugHierarchyRuntimeType_h
@import Foundation;

#include "DebugHierarchyRuntimeType.h"

@class NSArray, NSMutableDictionary, NSSet, NSString;

@interface DebugHierarchyRuntimeType : NSObject

@property (retain) NSString *name;
@property (retain) NSString *nameIncludingModules;
@property (retain) NSString *moduleName;
@property (weak) DebugHierarchyRuntimeType *parentType;
@property (retain) NSSet *subtypes;
@property (retain) NSString *childGroupingID;
@property (retain) NSArray *additionalGroupingIDs;
@property (readonly) long long sourceLanguage;
@property (readonly) NSMutableDictionary *instanceProperties;

/* class methods */
+ (id)typeWithDictionaryRepresentation:(id)representation;
+ (id)typeWithName:(id)name;

/* instance methods */
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)initWithName:(id)name;
- (void)addSubtype:(id)subtype;
- (BOOL)isKindOfTypeWithName:(id)name;
- (id)propertyWithName:(id)name;
- (id)namesOfInheritanceChain;
- (id)closestTypeVendingAChildGroupingID;
- (void)addInstanceProperty:(id)property;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)equal;
- (id)debugDescription;
@end

#endif /* DebugHierarchyRuntimeType_h */
