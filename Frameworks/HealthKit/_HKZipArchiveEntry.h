//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKZipArchiveEntry_h
#define _HKZipArchiveEntry_h
@import Foundation;

#include "_HKZipArchiveExtractor.h"

@class NSData, NSString;

@interface _HKZipArchiveEntry : NSObject {
  /* instance variables */
  _HKZipArchiveExtractor *_extractor;
  struct archive_entry * _entry;
  NSData *_data;
  long long _enumerationCount;
}

@property (readonly, nonatomic) BOOL didReadEntryData;
@property (readonly, copy, nonatomic) NSString *pathname;

/* class methods */
+ (BOOL)_assignReadError:(id *)error archive:(struct archive *)archive;

/* instance methods */
- (id)initWithExtractor:(id)extractor currentEntry:(struct archive_entry *)entry pathname:(id)pathname;
- (id)dataWithError:(id *)error;
- (id)dataWithMaxSizeBytes:(unsigned long long)bytes error:(id *)error;
- (BOOL)enumerateLinesWithError:(id *)error block:(id /* block */)block;
- (BOOL)_isExtractorStateValidWithError:(id *)error;
- (id)_getDataWithSize:(unsigned long long)size error:(id *)error;
- (id)_getDataWithBufferingWithMaxSizeBytes:(unsigned long long)bytes error:(id *)error;
- (BOOL)_enumerateLinesInCurrentEntryWithError:(id *)error block:(id /* block */)block;
@end

#endif /* _HKZipArchiveEntry_h */
