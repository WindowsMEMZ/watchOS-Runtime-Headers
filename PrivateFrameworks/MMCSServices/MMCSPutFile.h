//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef MMCSPutFile_h
#define MMCSPutFile_h
@import Foundation;

#include "MMCSSimpleFile.h"

@class NSData, NSString;

@interface MMCSPutFile : MMCSSimpleFile {
  /* instance variables */
  id /* block */ _block;
  id /* block */ _updateBlock;
}

@property (copy) NSString *protocolVersion;
@property (copy) NSData *authRequestData;
@property (copy) id /* block */ completionBlock;
@property (copy) id /* block */ progressUpdateBlock;
@property (copy) id /* block */ registrationBlock;

/* instance methods */
- (void)dealloc;
- (void)setProgress:(double)progress;
@end

#endif /* MMCSPutFile_h */
