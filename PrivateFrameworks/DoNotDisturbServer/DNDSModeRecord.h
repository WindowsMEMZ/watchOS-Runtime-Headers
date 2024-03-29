//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSModeRecord_h
#define DNDSModeRecord_h
@import Foundation;

#include "DNDSBackingStoreRecord-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSArray, NSString, NSUUID;

@interface DNDSModeRecord : NSObject<NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSString *symbolImageName;
@property (readonly, copy, nonatomic) NSString *tintColorName;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) long long semanticType;
@property (readonly, nonatomic) unsigned long long visibility;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSArray *placeholderExcludedPlatforms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)migrateDictionaryRepresentation:(id)representation fromVersionNumber:(unsigned long long)number toVersionNumber:(unsigned long long)number;
+ (id)newWithDictionaryRepresentation:(id)representation context:(id)context;

/* instance methods */
- (id)init;
- (id)_initWithRecord:(id)record;
- (id)_initWithSymbolImageName:(id)name tintColorName:(id)name name:(id)name modeIdentifier:(id)identifier semanticType:(long long)type visibility:(unsigned long long)visibility identifier:(id)identifier placeholderExcludedPlatforms:(id)platforms;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)dictionaryRepresentationWithContext:(id)context;
@end

#endif /* DNDSModeRecord_h */
