//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPaths_Protocol_h
#define TRIPaths_Protocol_h
@import Foundation;

@protocol TRIPaths 
/* class methods */
+ (id)resolveHardCodedPath:(id)path;
/* instance methods */
- (id)trialRootDir;
- (id)trialRootDirUsingGlobal:(BOOL)global;
- (id)trialVolume;
- (id)volumeForDirectory:(id)directory;
- (id)databaseDir;
- (id)logDir;
- (id)containerDir;
- (id)container;
- (id)namespaceDescriptorsDir;
- (id)namespaceDescriptorsDirUsingGlobal:(BOOL)global;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)layer;
- (id)namespaceDescriptorsDefaultDir;
- (id)namespaceDescriptorsRolloutDir;
- (id)namespaceDescriptorsExperimentDir;
- (id)namespaceDescriptorsDevOverrideDir;
- (id)namespaceDescriptorsBMLTDir;
- (id)subjectDataFile;
- (id)systemDataFile;
- (id)deviceIdentifierFile;
- (id)treatmentsDir;
- (id)treatmentsDirUsingGlobal:(BOOL)global;
- (id)experimentsDir;
- (id)localTempDir;
- (id)assetStore;
- (id)assetStoreUsingGlobal:(BOOL)global;
- (id)decryptionKeyDirForAppleInternal:(BOOL)internal;
- (id)pathsForContainer:(id)container asClientProcess:(BOOL)process;
- (BOOL)validateWithError:(id *)error;
@end

#endif /* TRIPaths_Protocol_h */
