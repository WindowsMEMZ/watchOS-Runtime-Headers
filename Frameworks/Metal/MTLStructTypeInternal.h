//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLStructTypeInternal_h
#define MTLStructTypeInternal_h
@import Foundation;

#include ".h"

@class NSArray, NSDictionary, NSString;

@interface MTLStructTypeInternal :  {
  /* instance variables */
  unsigned long long _dataType;
  NSDictionary *_dictionary;
  NSArray *_members;
}

@property BOOL isIndirectArgumentBuffer;
@property (readonly) NSString *typeName;

/* instance methods */
- (id)initWithMembers:(id *)members count:(unsigned long long)count;
- (id)initWithMembers:(id *)members count:(unsigned long long)count typeName:(id)name;
- (id)init;
- (void)setMembers:(id *)members count:(unsigned long long)count;
- (id)memberByName:(id)name;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)description withPrintedTypes:(id)types;
- (id)description;
- (id)members;
- (BOOL)isStructLayoutThreadSafeWith:(id)with;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)dataType;
@end

#endif /* MTLStructTypeInternal_h */
