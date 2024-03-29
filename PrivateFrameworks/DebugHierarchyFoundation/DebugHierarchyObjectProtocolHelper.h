//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 66.0.0.0.0
//
#ifndef DebugHierarchyObjectProtocolHelper_h
#define DebugHierarchyObjectProtocolHelper_h
@import Foundation;

@interface DebugHierarchyObjectProtocolHelper : NSObject
/* class methods */
+ (BOOL)classImplementsRequiredChildGroupMethods:(Class)methods;
+ (BOOL)classImplementsRequiredAdditionalGroupMethods:(Class)methods;
+ (BOOL)classImplements_debugHierarchyValueForPropertyWithName:(Class)name;
+ (BOOL)classOverrides_debugHierarchyPropertyDescriptions:(Class)descriptions;
+ (BOOL)objectImplements_debugHierarchyVisibility:(id)visibility;
+ (long long)debugHierarchyVisibilityOfObject:(id)object;
+ (id)debugHierarchyChildGroupingIDOfClass:(Class)class;
+ (id)debugHierarchyAdditionalGroupingIDsOfClass:(Class)class;
+ (id)debugHierarchyObjectsInGroupWithID:(id)id outOptions:(id *)options vendingClass:(Class)class onObject:(id)object;
+ (id)debugHierarchyPropertyDescriptionsOfClass:(Class)class;
+ (id)debugHierarchyValueForPropertyWithName:(id)name onObject:(id)object vendingClass:(Class)class outOptions:(id *)options outError:(id *)error;
+ (void)updateDebugHierarchyValueForPropertyWithDescription:(id)description onObject:(id)object;
+ (id)childObjectsForObject:(id)object withType:(id)type outGroupingID:(id *)id outOptions:(id *)options;
+ (void)enumerateAdditionalGroupsAndObjectsOfObject:(id)object withType:(id)type withBlock:(id /* block */)block;
+ (BOOL)v1_objectImplementsRequiredChildGroupMethods:(id)methods;
+ (BOOL)v1_objectImplementsRequiredAdditionalGroupMethods:(id)methods;
@end

#endif /* DebugHierarchyObjectProtocolHelper_h */
