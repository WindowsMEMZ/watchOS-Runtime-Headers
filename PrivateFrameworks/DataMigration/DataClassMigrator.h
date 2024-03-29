//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2622.0.0.0.0
//
#ifndef DataClassMigrator_h
#define DataClassMigrator_h
@import Foundation;

@class NSDictionary, NSString;

@interface DataClassMigrator : NSObject

@property (nonatomic) unsigned int userDataDisposition;
@property (retain, nonatomic) NSString *restoredBackupBuildVersion;
@property (retain, nonatomic) NSString *restoredBackupProductType;
@property (retain, nonatomic) NSString *restoredBackupDeviceName;
@property (copy, nonatomic) NSString *dmBundleIdentifier;
@property (readonly, nonatomic) BOOL shouldPreserveSettingsAfterRestore;
@property (readonly, nonatomic) BOOL wasPasscodeSetInBackup;
@property (nonatomic) BOOL didUpgrade;
@property (readonly, nonatomic) BOOL didRestoreFromBackup;
@property (readonly, nonatomic) BOOL didMigrateBackupFromDifferentDevice;
@property (readonly, nonatomic) BOOL didRestoreFromCloudBackup;
@property (retain, nonatomic) NSDictionary *context;

/* class methods */
+ (id)dataClassMigratorForBundleAtPath:(id)path;

/* instance methods */
- (BOOL)performMigration;
@end

#endif /* DataClassMigrator_h */
