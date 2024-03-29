//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKUIMetalBinaryArchive_h
#define CLKUIMetalBinaryArchive_h
@import Foundation;

@class NSString;
@protocol MTLBinaryArchive;

@interface CLKUIMetalBinaryArchive : NSObject {
  /* instance variables */
  NSString *_archiveName;
}

@property (retain, nonatomic) NSObject<MTLBinaryArchive> *mtlBinaryArchive;

/* class methods */
+ (id)archiveWithName:(id)name bundle:(id)bundle device:(id)device;

/* instance methods */
- (BOOL)_binaryArchivesFeatureEnabled;
- (BOOL)_hasBinaryArchive;
- (BOOL)_shouldUseBinaryArchives;
- (id)initWithName:(id)name bundle:(id)bundle device:(id)device;
- (id)loadMTLBinaryArchiveNamed:(id)named inBundle:(id)bundle forDevice:(id)device;
- (id)newFunctionInLibrary:(id)library withDescriptor:(id)descriptor;
- (id)newRenderPipelineStateForDevice:(id)device withDescriptor:(id)descriptor;
- (void)logElapsedTimeWithStart:(double)start category:(unsigned long long)category name:(id)name usingBinaryArchive:(BOOL)archive;
@end

#endif /* CLKUIMetalBinaryArchive_h */
