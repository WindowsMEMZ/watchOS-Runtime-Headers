//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLGlobalKeyValue_h
#define PLGlobalKeyValue_h
@import Foundation;

#include "PLManagedObject.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface PLGlobalKeyValue : PLManagedObject

@property (retain, @dynamic, nonatomic) NSNumber *boolValue;
@property (retain, @dynamic, nonatomic) NSNumber *doubleValue;
@property (retain, @dynamic, nonatomic) NSNumber *integerValue;
@property (retain, @dynamic, nonatomic) NSString *stringValue;
@property (retain, @dynamic, nonatomic) NSString *key;
@property (@dynamic, nonatomic) short type;
@property (retain, @dynamic, nonatomic) NSObject<NSSecureCoding> *anyValue;
@property (retain, @dynamic, nonatomic) NSDate *dateValue;

/* class methods */
+ (void)initialize;
+ (id)entityName;
+ (id)attributesForKey;
+ (short)typeForKey:(id)key;
+ (id)allDecodeClasses;
+ (void)checkTypeForKey:(id)key andValue:(id)value;
+ (void)setGlobalValue:(id)value forKey:(id)key managedObjectContext:(id)context;
+ (id)globalValueForKey:(id)key managedObjectContext:(id)context;
+ (id)globalValuesForKeys:(id)keys managedObjectContext:(id)context;
+ (id)dictionaryWithManagedObjectContext:(id)context forMigrationHistory:(BOOL)history;
+ (void)populateWithDictionary:(id)dictionary managedObjectContext:(id)context replaceExisting:(BOOL)existing;
+ (void)_setGlobalValue:(id)value forKeyValue:(id)value managedObjectContext:(id)context;
+ (id)_globalValueForKeyValue:(id)value;
+ (id)fetchGlobalKeyValueForKey:(id)key withManagedObjectContext:(id)context createIfMissing:(BOOL)missing;
+ (id)fetchGlobalKeyValuesForKeys:(id)keys withManagedObjectContext:(id)context;
+ (void)migrateLocaleIdentifierToGlobalKeyValues:(id)values withPathManager:(id)manager;

/* instance methods */
- (BOOL)supportsCloudUpload;
@end

#endif /* PLGlobalKeyValue_h */
