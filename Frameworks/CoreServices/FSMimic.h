//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef FSMimic_h
#define FSMimic_h
@import Foundation;

#include "FSNodePropertyProviding-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, NSURL;

@interface FSMimic : NSObject<FSNodePropertyProviding, NSSecureCoding> {
  /* instance variables */
  NSURL *_url;
  NSMutableDictionary *_baseProperties;
  NSMutableDictionary *_resourceValues;
  NSMutableSet *_relativePathsThatExist;
  unsigned int _hfsType;
  unsigned int _creator;
  struct { unsigned int x :1 HFSTypesSet; unsigned int x :1 HFSTypesUnavailable; } _flags;
}

@property (readonly, nonatomic) BOOL canIssueIO;
@property (readonly, nonatomic) BOOL directory;
@property (readonly, nonatomic) BOOL busyDirectory;
@property (readonly, nonatomic) BOOL executableModeFile;
@property (readonly, nonatomic) BOOL executable;
@property (readonly, nonatomic) BOOL resolvable;
@property (readonly, nonatomic) BOOL symbolicLink;
@property (readonly, nonatomic) BOOL aliasFile;
@property (readonly, nonatomic) BOOL hasPackageBit;
@property (readonly, nonatomic) BOOL regularFile;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) BOOL hasHiddenExtension;
@property (readonly, nonatomic) BOOL volume;
@property (readonly, nonatomic) BOOL mountTrigger;
@property (readonly, nonatomic) BOOL securedSystemContent;
@property (readonly, nonatomic) BOOL onDiskImage;
@property (readonly, nonatomic) BOOL onLocalVolume;
@property (readonly) BOOL AVCHDCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)basePropertyClasses;
+ (id)resourceValueClassesWithNull;
+ (BOOL)supportsSecureCoding;
+ (void)checkSelectors;

/* instance methods */
- (id)initWithURL:(id)url;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)URL;
- (void)askedForMissingSelector:(SEL)selector;
- (void)askedForMissingResourceKey:(id)key;
- (void)setObjectValue:(id)value forSelector:(SEL)selector;
- (BOOL)hasObjectValueForSelector:(SEL)selector;
- (void)noteExtantChildNodeWithRelativePath:(id)path;
- (BOOL)getResourceValue:(id *)value forKey:(id)key options:(unsigned char)options error:(id *)error;
- (BOOL)getCachedResourceValueIfPresent:(id *)present forKey:(id)key error:(id *)error;
- (void)setResourceValue:(id)value forKey:(id)key;
- (BOOL)hasResourceValueForKey:(id)key;
- (BOOL)isDirectory;
- (BOOL)isBusyDirectory;
- (BOOL)isExecutableModeFile;
- (BOOL)isExecutable;
- (BOOL)isResolvable;
- (BOOL)isSymbolicLink;
- (BOOL)isAliasFile;
- (BOOL)isRegularFile;
- (BOOL)isHidden;
- (BOOL)isDataContainer;
- (BOOL)getFileSystemRepresentation:(char x[1024])representation error:(id *)error;
- (id)pathWithError:(id *)error;
- (id)canonicalPathWithError:(id *)error;
- (id)nameWithError:(id *)error;
- (id)extensionWithError:(id *)error;
- (BOOL)isVolume;
- (BOOL)isMountTrigger;
- (BOOL)getVolumeIdentifier:(unsigned long long *)identifier error:(id *)error;
- (BOOL)isSecuredSystemContent;
- (BOOL)isOnDiskImage;
- (BOOL)isOnLocalVolume;
- (BOOL)isOnTimeMachineVolume;
- (BOOL)getCreationDate:(double *)date error:(id *)error;
- (BOOL)getContentModificationDate:(double *)date error:(id *)error;
- (BOOL)getLength:(unsigned long long *)length error:(id *)error;
- (BOOL)getHFSType:(unsigned int *)hfstype creator:(unsigned int *)creator error:(id *)error;
- (void)setHFSType:(unsigned int)hfstype creator:(unsigned int)creator;
- (void)setHFSTypesUnavailable;
- (BOOL)getDeviceNumber:(int *)number error:(id *)error;
- (BOOL)getDeviceRefNum:(unsigned long long *)num error:(id *)error;
- (BOOL)getInodeNumber:(unsigned long long *)number error:(id *)error;
- (BOOL)getFileIdentifier:(unsigned long long *)identifier error:(id *)error;
- (BOOL)getOwnerUID:(unsigned int *)uid error:(id *)error;
- (BOOL)childNodeWithRelativePathExists:(id)exists;
- (BOOL)isInTrash;
- (BOOL)isTrashFolder;
- (BOOL)isAVCHDCollection;
@end

#endif /* FSMimic_h */
