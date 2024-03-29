//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLFileUtilities_h
#define PLFileUtilities_h
@import Foundation;

@interface PLFileUtilities : NSObject
/* class methods */
+ (id)defaultSystemPhotoDataDirectory;
+ (id)defaultSystemPhotoDataCPLDirectory;
+ (id)defaultSystemPhotoDataMiscDirectory;
+ (id)defaultSystemPhotoDCIMDirectory;
+ (id)proxyLockFilePathForDatabasePath:(id)path;
+ (id)proxyLockCoordinatingFilePathForDatabaseDirectory:(id)directory databaseName:(id)name;
+ (id)defaultSystemLibraryURL;
+ (id)systemLibraryURL;
+ (id)embeddedHomeDirectory;
+ (id)realSystemPhotoLibraryPath;
+ (id)_defaultSystemLibraryPath;
+ (id)fileManager;
+ (BOOL)secureMoveItemAtURL:(id)url toURL:(id)url capabilities:(id)capabilities error:(id *)error;
+ (BOOL)cloneFileAtPath:(id)path toPath:(id)path error:(id *)error;
+ (BOOL)copyItemAtURL:(id)url toURL:(id)url error:(id *)error;
+ (long long)directoryEntryCountAtURL:(id)url error:(id *)error;
+ (BOOL)removeFilesInDirectoryAtURL:(id)url withPrefix:(id)prefix error:(id *)error progress:(id /* block */)progress;
+ (BOOL)removeItemAtPath:(id)path error:(id *)error;
+ (BOOL)removeItemAtURL:(id)url error:(id *)error;
+ (BOOL)removeDisconnectedSQLiteDatabaseFileWithPath:(id)path error:(id *)error;
+ (id)descriptionForFileIngestionType:(long long)type;
+ (BOOL)ingestItemAtURL:(id)url toURL:(id)url type:(long long)type options:(unsigned long long)options capabilities:(id)capabilities error:(id *)error;
+ (BOOL)stripExtendedAttributesFromFileAtURL:(id)url inDomain:(id)domain error:(id *)error;
+ (BOOL)hasDiskSpaceToCopyFileAtURL:(id)url;
+ (BOOL)setFileCreationDate:(id)date forFileURL:(id)url error:(id *)error;
+ (BOOL)isFileExistsError:(id)error;
+ (BOOL)createDirectoryAtPath:(id)path error:(id *)error usingFileManager:(id)manager;
+ (BOOL)createDirectoryAtPath:(id)path error:(id *)error;
+ (BOOL)changeFileOwnerToMobileAtPath:(id)path error:(id *)error usingFileManager:(id)manager;
+ (BOOL)changeFileOwnerToMobileAtPath:(id)path error:(id *)error;
+ (id)_mobileOwnerAttributes;
+ (long long)fileLengthForFilePath:(id)path;
+ (BOOL)stripImmutableFlagIfNecessaryFromFileAtPath:(id)path;
+ (BOOL)fileURL:(id)url isEqualToFileURL:(id)url;
+ (id)realPathForPath:(id)path error:(id *)error;
+ (BOOL)filePath:(id)path hasPrefix:(id)prefix;
+ (BOOL)filePath:(id)path isEqualToFilePath:(id)path;
+ (BOOL)URLIsInTrash:(id)trash;
+ (id)redactedDescriptionForFileURL:(id)url;
+ (id)redactedDescriptionForPath:(id)path;
+ (id)standardOutputStringForExecutablePath:(id)path arguments:(id)arguments environment:(id)environment standardErrorOut:(id *)out error:(id *)error;
+ (id)_fileListingDetailsForPath:(id)path error:(id *)error;
+ (id)_attributeDetailsForPath:(id)path ofFileSystem:(BOOL)system error:(id *)error;
+ (id)_diagnosticInfoForPath:(id)path includeFileSystemAttributes:(BOOL)attributes resolvedFileSystemAttributes:(BOOL *)attributes;
+ (void)gatherDiagnosticInfoForURL:(id)url handler:(id /* block */)handler;
+ (void)logDiagnosticInfoForURL:(id)url;
+ (BOOL)filePathIsSubpathOfSyncRoot:(id)root;
+ (void)calculateTotalSizeOfFilesAtPath:(id)path calculatePurgeable:(BOOL)purgeable allocatedSize:(BOOL)size result:(id /* block */)result;
@end

#endif /* PLFileUtilities_h */
