//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSDirectoryTraversalOperation_h
#define NSDirectoryTraversalOperation_h
@import Foundation;

#include ".h"
#include "NSError.h"
#include "NSString.h"

@class NSMutableArray;

@interface NSDirectoryTraversalOperation :  {
  /* instance variables */
  id _delegate;
  NSString *_sourcePath;
  NSError *_error;
  void * _stream;
  int _optionsFlags;
  int _lastDeviceInode;
  BOOL _shouldFilterUnderbars;
  BOOL _stopped;
  NSMutableArray *_deviceEntryPoints;
  NSMutableArray *_deviceNumbers;
}

/* class methods */
+ (id)_errorWithErrno:(int)errno atPath:(id)path;
+ (BOOL)_needsStatInfo;
+ (id)directoryTraversalOperationAtPath:(id)path;

/* instance methods */
- (id)initWithPath:(id)path;
- (id)delegate;
- (void)setDelegate:(id)delegate;
- (void)handlePathname:(id)pathname;
- (BOOL)_shouldFilterEntry:(struct _ftsent { struct _ftsent * x0; struct _ftsent * x1; struct _ftsent * x2; long long x3; void * x4; char * x5; char * x6; int x7; int x8; unsigned short x9; unsigned short x10; unsigned long long x11; int x12; unsigned short x13; short x14; unsigned short x15; unsigned short x16; unsigned short x17; struct stat * x18; char x19[1] } *)entry;
- (id)error;
- (void)_setError:(id)error;
- (BOOL)shouldProceedAfterError:(id)error;
- (void)_handleFTSEntry:(struct _ftsent { struct _ftsent * x0; struct _ftsent * x1; struct _ftsent * x2; long long x3; void * x4; char * x5; char * x6; int x7; int x8; unsigned short x9; unsigned short x10; unsigned long long x11; int x12; unsigned short x13; short x14; unsigned short x15; unsigned short x16; unsigned short x17; struct stat * x18; char x19[1] } *)ftsentry;
- (BOOL)_validatePaths:(id *)paths;
- (void)main;
- (void)dealloc;
@end

#endif /* NSDirectoryTraversalOperation_h */
