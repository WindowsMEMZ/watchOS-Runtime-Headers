//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPhotoDCFDirectory_h
#define PLPhotoDCFDirectory_h
@import Foundation;

#include "PLPhotoDCFObject.h"
#include "PLPhotoDCIMDirectory.h"

@class NSMutableDictionary;

@interface PLPhotoDCFDirectory : PLPhotoDCFObject {
  /* instance variables */
  PLPhotoDCIMDirectory *_dcimDirectory;
  NSMutableDictionary *_fileGroupsByNumber;
  int _maxFileGroupNumber;
  int _lastUsedFileGroupNumber;
}

@property BOOL considerInvalidFileGroups;

/* class methods */
+ (void)initializeFileGroupPrefixAndExtensions;
+ (id)fileGroupRequiredEmptyPrefixes;
+ (id)fileGroupRequiredEmptyExtensions;

/* instance methods */
- (id)_lastUsedFileGroupUserInfoKey;
- (id)initWithName:(id)name number:(int)number dcimDirectory:(id)directory;
- (id)dcimDirectory;
- (unsigned int)_calculateBaseDirectoryValue;
- (BOOL)canAddFileGroupWithGroupNumber:(int)number;
- (BOOL)_canAddItemWithPrefix:(id)prefix minimumFileGroupNumber:(int)number;
- (BOOL)_canAddItemWithPrefix:(id)prefix;
- (BOOL)canAddImage;
- (BOOL)canAddVideo;
- (id)fullPath;
- (void)ensureDirectoryExists;
- (BOOL)isEntensionValid:(id)valid;
- (id)fileGroups;
- (id)_nextAvailableFileGroupWithPrefix:(id)prefix extension:(id)extension;
- (id)nextAvailableFileGroup;
- (id)nextAvailableVideoFileGroupWithExtension:(id)extension;
- (void)removeFileGroup:(id)group;
- (void)setWriteIsPending:(BOOL)pending;
@end

#endif /* PLPhotoDCFDirectory_h */
