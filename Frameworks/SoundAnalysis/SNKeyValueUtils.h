//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 162.13.0.0.0
//
#ifndef SNKeyValueUtils_h
#define SNKeyValueUtils_h
@import Foundation;

@interface SNKeyValueUtils : NSObject // (Swift)
/* class methods */
+ (BOOL)removeKeyPath:(id)path fromObject:(id)object error:(id *)error;
+ (BOOL)addKeyPath:(id)path value:(id)value toObject:(id)object error:(id *)error;
+ (BOOL)updateKeyPath:(id)path value:(id)value inObject:(id)object error:(id *)error;
+ (BOOL)removeKey:(id)key fromDictionary:(id)dictionary error:(id *)error;
+ (BOOL)addKey:(id)key value:(id)value toDictionary:(id)dictionary error:(id *)error;
+ (BOOL)updateKey:(id)key value:(id)value inDictionary:(id)dictionary error:(id *)error;
+ (id)dictionaryAddingKey:(id)key value:(id)value toDictionary:(id)dictionary error:(id *)error;
+ (id)dictionaryAddingKeyIfAbsent:(id)absent value:(id)value toDictionary:(id)dictionary;
+ (id)dictionaryRemovingKey:(id)key fromDictionary:(id)dictionary error:(id *)error;
+ (id)dictionaryUpdatingKey:(id)key value:(id)value inDictionary:(id)dictionary error:(id *)error;
+ (id)dictionaryAssigningKey:(id)key value:(id)value inDictionary:(id)dictionary;
+ (id)mutationOfType:(long long)type keyPath:(id)path value:(id)value error:(id *)error;
+ (BOOL)applyMutation:(id)mutation toObject:(id)object error:(id *)error;
+ (BOOL)applyMutations:(id)mutations toObject:(id)object error:(id *)error;
+ (id)usingAddAndRemoveOnlyRepresentMutation:(id)mutation error:(id *)error;
+ (id)usingAddAndRemoveOnlyRepresentMutations:(id)mutations error:(id *)error;
+ (void)overrideValuesInObject:(id)object withValuesInDictionary:(id)dictionary;
+ (BOOL)overrideValuesInObject:(id)object withValuesInDictionary:(id)dictionary dictionaryToObjectKeyMappings:(id)mappings error:(id *)error;
+ (id)objectForKey:(id)key satisfyingPredicate:(id /* block */)predicate fromDictionary:(id)dictionary;
+ (id)requiredObjectForKey:(id)key satisfyingPredicate:(id /* block */)predicate fromDictionary:(id)dictionary error:(id *)error;
+ (id)objectOfClasses:(id)classes forKey:(id)key fromDictionary:(id)dictionary;
+ (id)requiredObjectOfClasses:(id)classes forKey:(id)key fromDictionary:(id)dictionary error:(id *)error;
+ (id)objectOfClass:(Class)class forKey:(id)key fromDictionary:(id)dictionary;
+ (id)requiredObjectOfClass:(Class)class forKey:(id)key fromDictionary:(id)dictionary error:(id *)error;
+ (id)objectForRequiredKey:(id)key fromDictionary:(id)dictionary error:(id *)error;
+ (id)objectForOptionalKey:(id)key fromDictionary:(id)dictionary;
+ (id)objectForOptionalKey:(id)key defaultValue:(id)value fromDictionary:(id)dictionary;
+ (id)keyForOptionalObject:(id)object inDictionary:(id)dictionary error:(id *)error;
+ (id)keyForRequiredObject:(id)object inDictionary:(id)dictionary error:(id *)error;
+ (id)transformedObjectForOptionalKey:(id)key fromDictionary:(id)dictionary fallableTransform:(id /* block */)transform error:(id *)error;
+ (id)transformedObjectForOptionalKey:(id)key fromDictionary:(id)dictionary transform:(id /* block */)transform;
+ (id)planToTransformInitialDictionary:(id)dictionary intoFinalDictionary:(id)dictionary;
+ (id)planToTransformInitialDictionary:(id)dictionary intoFinalDictionary:(id)dictionary usingOnlyAddAndRemoveMutations:(BOOL)mutations;
+ (void)addObserver:(id)observer forKeyPaths:(id)paths ofObject:(id)object options:(unsigned long long)options context:(void *)context;
+ (void)removeObserver:(id)observer forKeyPaths:(id)paths ofObject:(id)object context:(void *)context;
+ (id)addObserverWithBlock:(id /* block */)block forKeyPaths:(id)paths ofObject:(id)object options:(unsigned long long)options context:(void *)context;

/* instance methods */
- (id)init;
@end

#endif /* SNKeyValueUtils_h */
