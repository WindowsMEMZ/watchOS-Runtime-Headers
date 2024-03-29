//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKAttachment_h
#define EKAttachment_h
@import Foundation;

#include "EKObject.h"

@class NSNumber, NSString, NSURL;

@interface EKAttachment : EKObject

@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *localRelativePath;
@property (readonly, nonatomic) NSURL *localURL;
@property (readonly, nonatomic) NSURL *localURLForArchivedData;
@property (nonatomic) BOOL isBinary;
@property (nonatomic) BOOL autoArchived;
@property (retain, nonatomic) NSString *externalModificationTag;
@property (retain, nonatomic) NSString *externalID;
@property (readonly, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *fileNameRaw;
@property (retain, nonatomic) NSString *fileFormat;
@property (retain, nonatomic) NSNumber *fileSize;
@property (readonly, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSURL *URLForPendingFileCopy;
@property (readonly, retain) NSString *contentType;
@property (readonly, nonatomic) NSURL *urlOnDisk;

/* class methods */
+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;
+ (id)knownSingleValueKeysForComparison;
+ (id)knownRelationshipWeakKeys;
+ (id)createTempDestinationURLWithExtension:(id)extension;
+ (id)_copyFileAtURLToTemporaryDirectory:(id)directory;
+ (BOOL)canonicalizedEqualityTestValue1:(id)value1 value2:(id)value2 key:(id)key object1:(id)object1 object2:(id)object2;

/* instance methods */
- (BOOL)validateWithOwner:(id)owner error:(id *)error;
- (BOOL)save:(id *)save;
- (id)init;
- (id)initWithUUID:(id)uuid;
- (id)initWithFilepath:(id)filepath;
- (id)duplicateWithNewIdentity;
- (void)assignNewIdentity;
- (void)assignIdentity:(id)identity;
- (BOOL)copyLocalFileToNewSource;
- (void)invalidateLocalFilePropertiesForNewCopiedFile;
- (id)URLString;
- (void)setURLString:(id)urlstring;
- (unsigned int)flags;
- (void)setFlags:(unsigned int)flags;
- (BOOL)_flagValueWithMask:(unsigned int)mask;
- (void)_setFlagValue:(BOOL)value withMask:(unsigned int)mask;
- (id)securityScopedLocalURLWrapper;
- (id)securityScopedLocalURLForArchivedDataWrapper;
- (id)XPropertiesData;
- (void)setXPropertiesData:(id)data;
- (id)securityScopedURLWrapperForPendingFileCopy;
- (void)setSecurityScopedURLWrapperForPendingFileCopy:(id)copy;
- (void)markCopiedFileAsDownloaded;
- (BOOL)shouldSetQuarantineAttributesOnCopiedFile;
- (void)setShouldSetQuarantineAttributesOnCopiedFile:(BOOL)file;
- (long long)compareFileNames:(id)names;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* EKAttachment_h */
