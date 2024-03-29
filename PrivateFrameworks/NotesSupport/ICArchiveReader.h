//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef ICArchiveReader_h
#define ICArchiveReader_h
@import Foundation;

@class NSString;

@interface ICArchiveReader : NSObject {
  /* instance variables */
  struct archive * _archive;
}

@property (copy, nonatomic) NSString *sourcePath;
@property (copy, nonatomic) NSString *destinationPath;
@property (nonatomic) BOOL overwrite;
@property (nonatomic) BOOL writesTemporaryFilesInsideDestination;
@property (nonatomic) BOOL skipsInvisibleHeaders;

/* instance methods */
- (id)initWithSourceURL:(id)url destinationURL:(id)url;
- (BOOL)unarchiveResultURLs:(id *)urls error:(id *)error;
- (id)temporaryDirectoryWithError:(id *)error;
- (BOOL)unarchiveSourcePath:(id)path toDestinationPath:(id)path error:(id *)error;
- (BOOL)moveContentsOfDirectory:(id)directory toDirectory:(id)directory resultURLs:(id *)urls error:(id *)error;
- (id)incrementalPathInDirectory:(id)directory withFilename:(id)filename andExtension:(id)extension;
@end

#endif /* ICArchiveReader_h */
