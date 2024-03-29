//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHPropertyFetchingHelper_h
#define PHPropertyFetchingHelper_h
@import Foundation;

#include "PHPhotoLibrary.h"
#include "_PHDictionaryKeyValueWrapper.h"

@class NSDictionary;

@interface PHPropertyFetchingHelper : NSObject {
  /* instance variables */
  NSDictionary *_fetchedPropertyNamesByEntityName;
  NSDictionary *_propertyValuesByOID;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  _PHDictionaryKeyValueWrapper *_lock_dictionaryWrapper;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

/* class methods */
+ (id)fetchPropertiesForObjectIDs:(id)ids propertyNamesByEntityName:(id)name photoLibrary:(id)library;

/* instance methods */
- (id)initWithObjectIDs:(id)ids propertyNamesByEntityName:(id)name photoLibrary:(id)library;
- (id)init;
- (id)fetchedPropertiesForObjectID:(id)id;
- (BOOL)evaluateQuery:(id)query withObjectID:(id)id outMissingPropertyNames:(out id *)names;
@end

#endif /* PHPropertyFetchingHelper_h */
