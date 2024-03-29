//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TITypologyLog_h
#define TITypologyLog_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TIKeyboardState.h"
#include "TIRollingLog.h"
#include "TITraceLogParsingDelegate-Protocol.h"
#include "TITypologyLogPersisting-Protocol.h"
#include "TITypologyLogProviding-Protocol.h"
#include "TITypologyLogging-Protocol.h"

@class NSDate, NSDictionary, NSMutableSet, NSString, NSUUID;
@protocol TITypologyLogDelegate;

@interface TITypologyLog : NSObject<NSCopying, TITypologyLogPersisting, TITypologyLogging, TITraceLogParsingDelegate, TITypologyLogProviding>

@property (copy, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) TIRollingLog *records;
@property (readonly, nonatomic) TIRollingLog *traceRecords;
@property (retain, nonatomic) NSMutableSet *loggedRecordClasses;
@property (retain, nonatomic) TIKeyboardState *lastKeyboardState;
@property (weak, nonatomic) NSObject<TITypologyLogDelegate> *delegate;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) unsigned long long partIndex;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) unsigned long long typologyLogVersion;
@property (readonly, nonatomic) unsigned long long traceLogVersion;
@property (readonly, nonatomic) NSString *recommendedTypologyLogFilename;
@property (readonly, nonatomic) NSString *recommendedTraceLogFilename;
@property (readonly, nonatomic) unsigned long long numTypologyRecords;
@property (readonly, nonatomic) unsigned long long numTraceRecords;
@property (readonly, nonatomic) unsigned long long maxNumRecords;

/* class methods */
+ (id)typologyLogFromTypologyLogFile:(id)file andTraceLogFile:(id)file error:(id *)error;
+ (BOOL)isTypologyLogFilename:(id)filename;
+ (BOOL)isTraceLogFilename:(id)filename;
+ (id)traceLogFilenameFromTypologyLogFilename:(id)filename;
+ (id)typologyLogFilenameFromTraceLogFilename:(id)filename;
+ (id)_adjustFilename:(id)filename oldPrefix:(id)prefix newPrefix:(id)prefix oldSuffix:(id)suffix newSuffix:(id)suffix;
+ (id)traceLogURLFromTypologyLogURL:(id)url;
+ (id)typologyLogURLFromTraceLogURL:(id)url;

/* instance methods */
- (id)init;
- (id)initWithUUID:(id)uuid partIndex:(unsigned long long)index date:(id)date systemVersion:(id)version buildVersion:(id)version clientIdentifier:(id)identifier config:(id)config;
- (id)initWithTypologyLog:(id)log;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithPropertyList:(id)list;
- (id)propertyList;
- (id)propertyListWithTrace;
- (id)trace;
- (id)traceLogHeader;
- (id)timestamp;
- (void)parseTraceLogContent:(id)content;
- (BOOL)writeToTypologyLogFile:(id)file andTraceLogFile:(id)file withAccessibilityInfo:(id)info error:(id *)error;
- (BOOL)_writeToTypologyLogFile:(id)file withAccessibilityInfo:(id)info includeTraceLogContent:(BOOL)content error:(id *)error;
- (BOOL)_writeToTraceLogFile:(id)file error:(id *)error;
- (id)filename;
- (id)_recommendedFilenameWithPrefix:(id)prefix andSuffix:(id)suffix;
- (id)textSummary;
- (id)recordSummary;
- (void)_logRecord:(id)record trace:(id)trace;
- (void)logRecord:(id)record;
- (void)logRecord:(id)record trace:(id)trace;
- (void)traceHeaderParsed:(id)parsed;
- (void)traceRecordParsed:(id)parsed;
- (void)enumerateRecordsWithBlock:(id /* block */)block;
- (void)enumerateTypologyRecordsWithBlock:(id /* block */)block;
- (void)enumerateTypologyRecordsWithBlockIncludingStop:(id /* block */)stop;
- (void)enumerateTraceRecordsWithBlock:(id /* block */)block;
- (void)enumerateTraceRecordsWithBlockIncludingStop:(id /* block */)stop;
- (void)enumerateParsedTraceRecordsWithBlock:(id /* block */)block;
- (void)enumerateParsedTraceRecordsWithBlockIncludingStop:(id /* block */)stop;
- (id)typologyRecordMatchingUUID:(id)uuid;
- (id)traceRecordMatchingUUID:(id)uuid;
- (id)parsedTraceRecordMatchingUUID:(id)uuid;
- (id)typologyRecordsMatchingUUIDRange:(id)uuidrange endUUID:(id)uuid;
- (id)typologyRecordUUIDsIncludedInRange:(id)range endUUID:(id)uuid;
- (BOOL)loggedRecordOfClass:(Class)class;
@end

#endif /* TITypologyLog_h */
