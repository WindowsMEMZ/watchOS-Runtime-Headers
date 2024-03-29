//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef POMMESSchemaPOMMESFunctionPerformanceProfile_h
#define POMMESSchemaPOMMESFunctionPerformanceProfile_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData, NSString;

@interface POMMESSchemaPOMMESFunctionPerformanceProfile : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 startTimeIntervalSince2001InMs; unsigned int x :1 durationInMs; unsigned int x :1 lineNumber; } _has;
}

@property (nonatomic) double startTimeIntervalSince2001InMs;
@property (nonatomic) BOOL hasStartTimeIntervalSince2001InMs;
@property (nonatomic) double durationInMs;
@property (nonatomic) BOOL hasDurationInMs;
@property (copy, nonatomic) NSString *fileId;
@property (nonatomic) BOOL hasFileId;
@property (nonatomic) int lineNumber;
@property (nonatomic) BOOL hasLineNumber;
@property (copy, nonatomic) NSString *callingFunction;
@property (nonatomic) BOOL hasCallingFunction;
@property (copy, nonatomic) NSString *measurementLabel;
@property (nonatomic) BOOL hasMeasurementLabel;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteStartTimeIntervalSince2001InMs;
- (void)deleteDurationInMs;
- (void)deleteFileId;
- (void)deleteLineNumber;
- (void)deleteCallingFunction;
- (void)deleteMeasurementLabel;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* POMMESSchemaPOMMESFunctionPerformanceProfile_h */
