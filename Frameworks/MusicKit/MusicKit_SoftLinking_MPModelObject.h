//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_MPModelObject_h
#define MusicKit_SoftLinking_MPModelObject_h
@import Foundation;

#include "MusicKit_SoftLinking_MPIdentifierSet-Protocol.h"
#include "MusicKit_SoftLinking_MPSectionedCollectionObject-Protocol.h"

@class MPModelObject, NSDictionary, NSString;

@interface MusicKit_SoftLinking_MPModelObject : NSObject<MusicKit_SoftLinking_MPSectionedCollectionObject> {
  /* instance variables */
  MPModelObject *_underlyingModelObject;
}

@property (readonly, nonatomic) MPModelObject *_underlyingModelObject;
@property (readonly, nonatomic) NSDictionary *storageDictionary;
@property (readonly, nonatomic) NSObject<MusicKit_SoftLinking_MPIdentifierSet> *legacyIdentifierSet;
@property (readonly, nonatomic) long long modelObjectType;
@property (readonly, nonatomic) long long libraryRemovalSupportedOptions;
@property (readonly, nonatomic) id underlyingObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_createUnderlyingModelObjectWithIdentifierSet:(id)set modelObjectType:(long long)type storageDictionary:(id)dictionary;
+ (long long)keepLocalEnabledStateForRawValue:(long long)value;
+ (long long)rawValueForKeepLocalEnabledState:(long long)state;
+ (long long)keepLocalManagedStatusForRawValue:(long long)value;
+ (long long)rawValueForKeepLocalManagedStatus:(long long)status;
+ (unsigned long long)keepLocalManagedStatusReasonsForRawValue:(long long)value;
+ (long long)rawValueForKeepLocalManagedStatusReasons:(unsigned long long)reasons;
+ (id)archivedDataWithUnderlyingModelObject:(id)object error:(id *)error;
+ (id)unarchiveUnderlyingModelObjectWithData:(id)data error:(id *)error;

/* instance methods */
- (id)initWithIdentifierSet:(id)set modelObjectType:(long long)type storageDictionary:(id)dictionary;
- (id)initWithUnderlyingModelObject:(id)object;
- (BOOL)isEqual:(id)equal;
@end

#endif /* MusicKit_SoftLinking_MPModelObject_h */
