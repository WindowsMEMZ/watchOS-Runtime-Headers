//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRCommandResult_h
#define MRCommandResult_h
@import Foundation;

#include "MRPlayerPath.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSError, NSString;

@interface MRCommandResult : NSObject<NSCopying>

@property (copy, nonatomic) NSArray *resultStatuses;
@property (nonatomic) unsigned int sendError;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *sendErrorDescription;
@property (copy, nonatomic) MRPlayerPath *playerPath;
@property (nonatomic) unsigned int startQOS;
@property (nonatomic) unsigned int endQOS;
@property (readonly, copy, nonatomic) NSArray *handlerReturnStatuses;

/* class methods */
+ (id)commandResultWithSendError:(unsigned int)error;
+ (id)commandResultWithSendError:(unsigned int)error description:(id)description;

/* instance methods */
- (id)initWithWithSendError:(unsigned int)error description:(id)description;
- (id)initWithHandlerStatuses:(id)statuses sendError:(unsigned int)error;
- (id)initWithResultStatuses:(id)statuses sendError:(unsigned int)error playerPath:(id)path;
- (id)initWithData:(id)data;
- (id)initWithProtobuf:(id)protobuf;
- (id)initWithError:(id)error;
- (id)copyWithPlayerPath:(id)path;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)protobuf;
- (id)data;
- (id)description;
@end

#endif /* MRCommandResult_h */
