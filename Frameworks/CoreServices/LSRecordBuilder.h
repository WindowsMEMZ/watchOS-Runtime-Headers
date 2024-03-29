//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef LSRecordBuilder_h
#define LSRecordBuilder_h
@import Foundation;

#include "_LSDatabase.h"

@interface LSRecordBuilder : NSObject {
  /* instance variables */
  _LSDatabase *_db;
}

/* class methods */
+ (id)recordBuilderForType:(unsigned long long)type;

/* instance methods */
- (void)setDatabase:(id)database;
- (unsigned int)registerBundleRecord:(id)record error:(id *)error;
- (BOOL)parseInfoPlist:(id)plist;
- (void)parseiTunesMetadata:(id)metadata;
- (BOOL)parseInstallationInfo:(id)info;
@end

#endif /* LSRecordBuilder_h */
