//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPMediaLibraryEntityTranslator_h
#define MPMediaLibraryEntityTranslator_h
@import Foundation;

@class NSMutableDictionary;

@interface MPMediaLibraryEntityTranslator : NSObject {
  /* instance variables */
  NSMutableDictionary *_propertiesToTranslators;
  NSMutableDictionary *_relationshipsToTranslators;
}

@property (readonly, nonatomic) Class MPModelClass;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) void * entityClass;
@property (copy, nonatomic) id /* block */ allowedItemPredicatesBlock;
@property (copy, nonatomic) id /* block */ entityQueryBlock;

/* class methods */
+ (id)_translatorForMPModelClass:(Class)class mlcoreEntityClass:(void *)class create:(BOOL)create transient:(BOOL)transient;
+ (id)translatorForMPModelClass:(Class)class;
+ (id)translatorForMPModelClass:(Class)class mlcoreEntityClass:(void *)class;
+ (id)translatorForTransientMPModelClass:(Class)class;

/* instance methods */
- (void)mapIdentifierMLProperties:(const void *)mlproperties identifierCreationBlock:(id /* block */)block;
- (void)mapPropertyKey:(id)key toMLProperty:(void *)mlproperty;
- (void)mapPropertyKey:(id)key withPropertiesToFetch:(const void *)fetch valueTransformer:(id /* block */)transformer;
- (void)mapPropertyKey:(id)key withPropertiesToFetch:(const void *)fetch propertiesToSort:(const void *)sort sortTransformer:(id /* block */)transformer valueTransformer:(id /* block */)transformer;
- (void)mapPropertyKey:(id)key withPropertiesToFetch:(const void *)fetch propertiesToSort:(const void *)sort sortTransformer:(id /* block */)transformer filterTransformer:(id /* block */)transformer valueTransformer:(id /* block */)transformer;
- (void)mapRelationshipKey:(id)key toModelClass:(Class)class usingForeignPropertyBase:(void *)base;
- (void)mapRelationshipKey:(id)key toModelClass:(Class)class transient:(BOOL)transient usingForeignPropertyBase:(void *)base;
- (void)mapRelationshipKey:(id)key toModelClass:(Class)class transient:(BOOL)transient usingForeignPropertyBase:(void *)base relationshipValidationProperties:(const void *)properties isValidRelationshipHandler:(id /* block */)handler;
- (id)objectForPropertySet:(id)set entityClass:(void *)class propertyCache:(const void *)cache context:(id)context;
- (id)identifiersForPropertyCache:(const void *)cache context:(id)context;
- (struct shared_ptr<mlcore::EntityQuery> { struct EntityQuery * x0; struct __shared_weak_count * x1; })entityQueryForPropertySet:(id)set sortDescriptors:(id)descriptors context:(id)context view:(id)view;
- (struct shared_ptr<mlcore::PropertiesQuery> { struct PropertiesQuery * x0; struct __shared_weak_count * x1; })propertiesQueryForPropertySet:(id)set scopedContainers:(id)containers allowedItemIdentifiers:(id)identifiers view:(id)view;
- (struct vector<mlcore::ModelPropertyBase *, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase * * x0; struct ModelPropertyBase * * x1; struct __compressed_pair<mlcore::ModelPropertyBase **, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase * * x0; } x2; })MLCorePropertiesForPropertySet:(id)set;
- (struct vector<mlcore::SortDescriptor, std::allocator<mlcore::SortDescriptor>> { struct SortDescriptor * x0; struct SortDescriptor * x1; struct __compressed_pair<mlcore::SortDescriptor *, std::allocator<mlcore::SortDescriptor>> { struct SortDescriptor * x0; } x2; })MLCoreSortDescriptorsForModelSortDescriptors:(id)descriptors;
- (struct vector<std::shared_ptr<mlcore::Predicate>, std::allocator<std::shared_ptr<mlcore::Predicate>>> { void * x0; void * x1; struct __compressed_pair<std::shared_ptr<mlcore::Predicate> *, std::allocator<std::shared_ptr<mlcore::Predicate>>> { void * x0; } x2; })MLCorePredicateForModelPropertyFilters:(id)filters;
- (Class)classForRelationshipKey:(id)key;
- (struct unordered_map<std::string, mlcore::ModelPropertyBase *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, mlcore::ModelPropertyBase *>>> { struct __hash_table<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> *>>> { void * * x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::equal_to<std::string>, std::hash<std::string>>> { float x0; } x3; } x0; })propertiesToFetchForPropertyKey:(id)key;
- (id)_propertyTranslatorForKeyPath:(id)path;
- (void *)_propertyForKeyPath:(id)path;
- (struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> { void * x0; struct __shared_weak_count * x1; })_propertyMapForKeyPath:(id)path includePropertiesToSort:(BOOL)sort;
- (id)_valueForKeyPath:(id)path forPropertyCache:(const void *)cache context:(id)context;
- (id)_objectForPropertySet:(id)set entityClass:(void *)class propertyCache:(const void *)cache baseTranslator:(id)translator prependKeyPath:(id)path context:(id)context;
- (struct vector<mlcore::ModelPropertyBase *, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase * * x0; struct ModelPropertyBase * * x1; struct __compressed_pair<mlcore::ModelPropertyBase **, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase * * x0; } x2; })_MLCorePropertiesForPropertySet:(id)set withForeignPropertyBase:(void *)base;
- (BOOL)isTransient;
@end

#endif /* MPMediaLibraryEntityTranslator_h */
