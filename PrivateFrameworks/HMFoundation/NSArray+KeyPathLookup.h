//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef NSArray_KeyPathLookup_h
#define NSArray_KeyPathLookup_h
@import Foundation;

@interface NSArray (KeyPathLookup) <HMFObject>
/* class methods */
+ (id)shortDescription;

/* instance methods */
- (id)secureDescriptionWithIndent:(id)indent newLine:(BOOL)line blacklistedKeys:(id)keys;
- (id)secureDescriptionWithBlacklistKeys:(id)keys;
- (id)describeElements:(id /* block */)elements;
- (id)shortDescription;
- (id)privateDescription;
- (BOOL)hmf_isEmpty;
- (BOOL)hmf_objectsAreKindOfClass:(Class)class;
- (id)hmf_objectPassingTest:(id /* block */)test;
- (id)hmf_objectWithOptions:(unsigned long long)options passingTest:(id /* block */)test;
- (id)hmf_objectsPassingTest:(id /* block */)test;
- (id)hmf_objectsWithOptions:(unsigned long long)options passingTest:(id /* block */)test;
- (id)hmf_firstObjectWithValue:(id)value forKeyPath:(id)path;
- (id)hmf_firstObjectWithName:(id)name;
- (id)hmf_firstObjectWithUUID:(id)uuid;
- (id)hmf_firstObjectWithZoneID:(id)id;
- (id)hmf_firstObjectWithUniqueIdentifier:(id)identifier;
- (id)hmf_firstObjectWithSPIUniqueIdentifier:(id)identifier;
- (id)hmf_firstObjectWithInstanceID:(id)id;
- (id)hmf_firstObjectWithCharacteristicType:(id)type;
@end

#endif /* NSArray_KeyPathLookup_h */
