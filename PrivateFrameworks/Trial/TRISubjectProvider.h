//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRISubjectProvider_h
#define TRISubjectProvider_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString, _PASLock;

@interface TRISubjectProvider : NSObject<NSSecureCoding> {
  /* instance variables */
  NSString *_path;
  _PASLock *_lock;
}

/* class methods */
+ (id)defaultProviderWithPaths:(id)paths;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPath:(id)path;
- (id)initWithCoder:(id)coder;
- (void)decodeWithCoder:(id)coder guardedData:(id)data;
- (void)encodeWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder guardedData:(id)data;
- (void)setNextRotationDate:(id)date;
- (BOOL)loadUsingGuardedData:(id)data;
- (BOOL)save;
- (unsigned long long)numberOfWeeksPerRotation;
- (id)subject;
- (id)subjectWithProjectId:(int)id;
- (id)nextRotationDate;
- (id)anchorDate;
- (id)nextRotationDateAfter:(id)after;
- (void)rotateSubject;
@end

#endif /* TRISubjectProvider_h */
