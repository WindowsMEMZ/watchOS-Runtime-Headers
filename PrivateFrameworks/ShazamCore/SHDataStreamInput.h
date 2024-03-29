//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHDataStreamInput_h
#define SHDataStreamInput_h
@import Foundation;

#include "SHDataStream-Protocol.h"

@class NSString;

@interface SHDataStreamInput : NSObject<SHDataStream>

@property (retain, nonatomic) NSObject<SHDataStream> *next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)loadDataFromURL:(id)url error:(id *)error;
- (BOOL)readFromURL:(id)url error:(id *)error;
- (BOOL)closeWithError:(id *)error;
- (BOOL)processData:(id)data error:(id *)error;
@end

#endif /* SHDataStreamInput_h */
