//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.40.9.0.0
//
#ifndef IXGlobalConfiguration_h
#define IXGlobalConfiguration_h
@import Foundation;

@class NSURL;

@interface IXGlobalConfiguration : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dynamicPropertyLock;
}

@property (readonly, nonatomic) NSURL *daemonUserHome;
@property (readonly, nonatomic) NSURL *rootPath;
@property (readonly, nonatomic) NSURL *dataStorageHome;
@property (readonly, nonatomic) NSURL *frameworkURL;
@property (readonly, nonatomic) NSURL *userVolumeURL;
@property (readonly, nonatomic) unsigned int daemonUID;
@property (readonly, nonatomic) unsigned int daemonGID;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)createDirectories;
- (id)_dataStorageHomeURLWithError:(id *)error;
- (id)dataDirectoryWithError:(id *)error;
- (id)dataDirectoryAbortingOnError;
- (id)promiseStagingRootDirectoryWithError:(id *)error;
- (id)promiseStagingRootDirectoryAbortingOnError;
- (id)removabilityDirectoryWithError:(id *)error;
- (id)removabilityDirectoryAbortingOnError;
- (id)remoteInstallationStagingDirectory:(id *)directory;
- (id)extractedInstallableStagingDirectory:(id *)directory;
@end

#endif /* IXGlobalConfiguration_h */
