//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSPersistentCache_h
#define SSPersistentCache_h
@import Foundation;

@class NSFileManager, NSString;
@protocol OS_dispatch_queue;

@interface SSPersistentCache : NSObject {
  /* instance variables */
  BOOL _safeKeys;
  NSString *_identifier;
  NSString *_cacheName;
  NSString *_path;
  NSFileManager *_fm;
  NSObject<OS_dispatch_queue> *_serialQueue;
}

/* class methods */
+ (id)safeKeyForKey:(id)key;

/* instance methods */
- (id)initWithIdentifier:(id)identifier cacheName:(id)name;
- (void)dealloc;
- (id)_pathForKey:(id)key;
- (BOOL)_isFileNotFound:(id)found;
- (id)description;
- (void)setFilenameSafeKeys:(BOOL)keys;
- (BOOL)setData:(id)data forKey:(id)key;
- (BOOL)removeDataForKey:(id)key;
- (BOOL)clear;
- (id)dataForKey:(id)key;
@end

#endif /* SSPersistentCache_h */
