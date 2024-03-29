//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef _TtC10Foundation13__NSSwiftData_h
#define _TtC10Foundation13__NSSwiftData_h
@import Foundation;

#include "NSData.h"

@interface Foundation.__NSSwiftData : NSData { // (Swift)
  /* instance variables */
   _backing;
   _range;
}

@property (nonatomic, readonly) long long length;
@property (nonatomic, readonly) void * bytes;

/* instance methods */
- (id)copyWithZone:(void *)zone;
- (id)mutableCopyWithZone:(void *)zone;
- (BOOL)_isCompact;
- (BOOL)_providesConcreteBacking;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithContentsOfFile:(id)file error:(id *)error;
- (id)initWithContentsOfMappedFile:(id)file error:(id *)error;
- (id)initWithContentsOfMappedFile:(id)file;
- (id)initWithBase64Encoding:(id)encoding;
- (id)initWithBase64EncodedString:(id)string options:(unsigned long long)options;
- (id)initWithBase64EncodedData:(id)data options:(unsigned long long)options;
- (id)initWithBytes:(void *)bytes length:(long long)length;
- (id)initWithBytesNoCopy:(void *)copy length:(long long)length;
- (id)initWithBytesNoCopy:(void *)copy length:(long long)length freeWhenDone:(BOOL)done;
- (id)initWithBytesNoCopy:(void *)copy length:(long long)length deallocator:(id /* block */)deallocator;
- (id)initWithContentsOfFile:(id)file options:(unsigned long long)options error:(id *)error;
- (id)initWithContentsOfURL:(id)url options:(unsigned long long)options error:(id *)error;
- (id)initWithContentsOfFile:(id)file;
- (id)initWithContentsOfURL:(id)url;
- (id)initWithData:(id)data;
@end

#endif /* _TtC10Foundation13__NSSwiftData_h */
