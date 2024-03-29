//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFPreferences_h
#define HMFPreferences_h
@import Foundation;

#include "HMFObject.h"
#include "HMFClassRegistry.h"
#include "HMFObject-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;

@interface HMFPreferences : HMFObject<HMFObject> {
  /* instance variables */
  struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

@property (readonly) HMFClassRegistry *classRegistry;
@property (readonly, copy) NSArray *preferences;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedPreferences;
+ (id)classRegistry;
+ (Class)preferenceClassForPreferenceKey:(id)key;
+ (void)setPreferenceClass:(Class)class forPreferenceKey:(id)key;
+ (id)defaultValues;
+ (id)defaultValueForPreferenceKey:(id)key;
+ (void)setDefaultValue:(id)value forPreferenceKey:(id)key;

/* instance methods */
- (id)init;
- (Class)preferenceClassForPreferenceKey:(id)key;
- (void)setPreferenceClass:(Class)class forPreferenceKey:(id)key;
- (id)preferenceForKey:(id)key;
@end

#endif /* HMFPreferences_h */
