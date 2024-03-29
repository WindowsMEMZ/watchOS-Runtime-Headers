//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVOctetStreamParser_h
#define CoreDAVOctetStreamParser_h
@import Foundation;

#include "CoreDAVResponseBodyParser-Protocol.h"

@class NSError, NSMutableData, NSString;

@interface CoreDAVOctetStreamParser : NSObject<CoreDAVResponseBodyParser>

@property (retain, nonatomic) NSMutableData *octetStreamData;
@property (readonly) NSError *parserError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)canHandleContentType:(id)type;

/* instance methods */
- (id)init;
- (BOOL)processData:(id)data forTask:(id)task;
@end

#endif /* CoreDAVOctetStreamParser_h */
