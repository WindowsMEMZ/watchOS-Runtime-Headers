//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.40.9.0.0
//
#ifndef IXFileManager_h
#define IXFileManager_h
@import Foundation;

@class BOOL *;

@interface IXFileManager : NSObject
/* class methods */
+ (id)defaultManager;

/* instance methods */
- (BOOL)removeItemAtURL:(id)url error:(id *)error;
- (BOOL)removeItemAtURL:(id)url keepParent:(BOOL)parent error:(id *)error;
- (BOOL)createDirectoryAtURL:(id)url withIntermediateDirectories:(BOOL)directories mode:(unsigned short)mode class:(int)class error:(id *)error;
- (BOOL)createDirectoryAtURL:(id)url withIntermediateDirectories:(BOOL)directories mode:(unsigned short)mode error:(id *)error;
- (BOOL)_copyItemAtURL:(id)url toURL:(id)url failIfSrcMissing:(BOOL)missing error:(id *)error;
- (BOOL)_moveItemAtURL:(id)url toURL:(id)url failIfSrcMissing:(BOOL)missing error:(id *)error;
- (BOOL)copyItemIfExistsAtURL:(id)url toURL:(id)url error:(id *)error;
- (BOOL)moveItemIfExistsAtURL:(id)url toURL:(id)url error:(id *)error;
- (BOOL)copyItemAtURL:(id)url toURL:(id)url error:(id *)error;
- (BOOL)moveItemAtURL:(id)url toURL:(id)url error:(id *)error;
- (id)createTemporaryDirectoryInDirectoryURL:(id)url error:(id *)error;
- (id)createTemporaryExtractionDirectoryWithError:(id *)error;
- (BOOL)_traverseDirectory:(id)directory error:(id *)error withBlock:(id /* block */)block;
- (BOOL)_removeACLAtPath:(const char *)path isDir:(BOOL)dir error:(id *)error;
- (id)urlsForItemsInDirectoryAtURL:(id)url ignoringSymlinks:(BOOL)symlinks error:(id *)error;
- (BOOL)createSymbolicLinkAtURL:(id)url withDestinationURL:(id)url error:(id *)error;
- (id)destinationOfSymbolicLinkAtURL:(id)url error:(id *)error;
- (BOOL)itemExistsAtURL:(id)url isDirectory:(BOOL *)directory error:(id *)error;
- (BOOL)itemExistsAtURL:(id)url error:(id *)error;
- (BOOL)itemExistsAtURL:(id)url;
- (BOOL)itemDoesNotExistAtURL:(id)url;
- (id)debugDescriptionOfItemAtURL:(id)url;
- (BOOL)dataProtectionClassOfItemAtURL:(id)url class:(int *)class error:(id *)error;
- (BOOL)setDataProtectionClassOfItemAtURL:(id)url toClass:(int)class ifPredicate:(id /* block */)predicate error:(id *)error;
- (BOOL)setPermissionsOfItemAtURL:(id)url toMode:(unsigned short)mode error:(id *)error;
- (id)_realPathWhatExistsInPath:(id)path;
- (id)_realPathForURL:(id)url allowNonExistentPathComponents:(BOOL)components;
- (BOOL)_validateSymlink:(id)symlink withStartingDepth:(unsigned int)depth andEndingDepth:(unsigned int *)depth;
- (id)realPathForURL:(id)url ifChildOfURL:(id)url;
- (unsigned long long)_diskUsageForDirectoryURL:(id)url;
- (unsigned long long)diskUsageForURL:(id)url;
@end

#endif /* IXFileManager_h */
