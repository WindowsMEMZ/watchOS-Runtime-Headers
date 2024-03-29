//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef NSError_HomeKitCoreData_h
#define NSError_HomeKitCoreData_h
@import Foundation;

@interface NSError (HomeKitCoreData)
/* class methods */
+ (id)errorWithSQLite3Context:(struct sqlite3 *)context;
+ (id)errorWithSQLite3Context:(struct sqlite3 *)context statement:(const char *)statement;
+ (id)errorWithSQLite3Statement:(struct sqlite3_stmt *)statement;
+ (id)hmd_validationErrorWithDescription:(id)description;
+ (id)hmd_validationErrorWithDescription:(id)description managedObject:(id)object attributeName:(id)name;

/* instance methods */
- (id)hmd_actualCKErrorFromCKErrorPartialFailure:(id)failure;
- (id)hmd_conciseCKError;
- (id)hmd_hmErrorFromCKError;
- (BOOL)hmd_isCKError;
- (BOOL)hmd_isInternalCKError;
- (BOOL)hmd_isNonRecoverableCKError;
- (id)hmd_convertedCKError;
- (id)hmd_retryAfterCKError;
- (BOOL)hmd_isRecordConflictCKError;
@end

#endif /* NSError_HomeKitCoreData_h */
