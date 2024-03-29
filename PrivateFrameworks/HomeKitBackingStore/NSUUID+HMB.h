//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef NSUUID_HMB_h
#define NSUUID_HMB_h
@import Foundation;

@interface NSUUID (HMB) <HMBQueryableModelFieldCoder>
/* class methods */
+ (id)hmbUUIDWithSQLite3Column:(struct sqlite3_stmt *)column column:(int)column;
+ (id)hmbEncodeQueryableParameter:(id)parameter;
+ (id)hmbDecodeQueryableParameter:(id)parameter;
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)variable;
+ (id)hmbUUIDFromData:(id)data;

/* instance methods */
- (id)data;
@end

#endif /* NSUUID_HMB_h */
