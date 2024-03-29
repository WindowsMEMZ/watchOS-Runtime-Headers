//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSPersistentStoreDescription_h
#define NSPersistentStoreDescription_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSPersistentCloudKitContainerOptions.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface NSPersistentStoreDescription : NSObject<NSCopying> {
  /* instance variables */
  NSURL *_url;
}

@property (retain) NSPersistentCloudKitContainerOptions *cloudKitContainerOptions;
@property (copy) NSString *type;
@property (copy) NSString *configuration;
@property (copy) NSURL *URL;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property BOOL readOnly;
@property double timeout;
@property (readonly, copy, nonatomic) NSDictionary *sqlitePragmas;
@property BOOL shouldAddStoreAsynchronously;
@property BOOL shouldMigrateStoreAutomatically;
@property BOOL shouldInferMappingModelAutomatically;

/* class methods */
+ (id)persistentStoreDescriptionWithURL:(id)url;
+ (id)inMemoryPersistentStoreDescription;

/* instance methods */
- (void)setOption:(id)option forKey:(id)key;
- (BOOL)isReadOnly;
- (void)setValue:(id)value forPragmaNamed:(id)named;
- (BOOL)shouldInvokeCompletionHandlerConcurrently;
- (void)setShouldInvokeCompletionHandlerConcurrently:(BOOL)concurrently;
- (id)init;
- (id)initWithURL:(id)url;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (void)dealloc;
- (void)setMirroringDelegate:(id)delegate;
- (id)mirroringDelegate;
- (id)mirroringOptions;
- (void)setOption:(id)option forMirroringKey:(id)key;
- (BOOL)usesPersistentHistoryTracking;
- (void)setUsesPersistentHistoryTracking:(BOOL)tracking;
@end

#endif /* NSPersistentStoreDescription_h */
