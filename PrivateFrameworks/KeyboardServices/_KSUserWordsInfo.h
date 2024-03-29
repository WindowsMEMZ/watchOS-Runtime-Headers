//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 157.200.0.0.0
//
#ifndef _KSUserWordsInfo_h
#define _KSUserWordsInfo_h
@import Foundation;

#include "_KSFileEntry.h"

@class NSDate;

@interface _KSUserWordsInfo : NSObject {
  /* instance variables */
  NSDate *_modifiedDate;
  unsigned long long _size;
  _KSFileEntry *_file;
}

/* class methods */
+ (id)keyNamesExcludingData;
+ (id)keyForData;
+ (id)keyboardDirectory;
+ (id)filesForLanguage:(id)language;
+ (id)infoWithFiles:(id)files;
+ (id)infoWithRecord:(id)record;

/* instance methods */
- (id)initWithFiles:(id)files;
- (id)initWithRecord:(id)record;
- (BOOL)isBetterThan:(id)than;
- (void)saveToRecord:(id)record;
- (id)description;
@end

#endif /* _KSUserWordsInfo_h */
