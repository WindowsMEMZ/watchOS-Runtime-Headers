//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SiriNLUExternalTypesConverter_h
#define SiriNLUExternalTypesConverter_h
@import Foundation;

@interface SiriNLUExternalTypesConverter : NSObject
/* class methods */
+ (id)convertFromNluRequest:(id)request;
+ (id)convertFromNluResponse:(id)response;
+ (id)convertfromRequestID:(id)id;
+ (id)convertFromNluTurnInput:(id)input;
+ (id)convertFromNluTurnContext:(id)context;
+ (id)convertFromNluLegacyNLContext:(id)nlcontext;
+ (id)convertFromContext:(id)context;
+ (id)convertFromRRAnnotation:(id)rrannotation;
+ (id)convertFromRRAnnotations:(id)rrannotations;
+ (id)convertFromRRGroupIdentifer:(id)identifer;
+ (id)convertFromEntityCandidate:(id)candidate;
+ (id)convertFromEntityCandidates:(id)candidates;
+ (id)convertFromTask:(id)task;
+ (id)convertFromTasks:(id)tasks;
+ (id)convertFromNumber:(id)number;
+ (id)convertFromDouble:(double)double;
+ (id)convertFromString:(id)string;
+ (id)convertFromAsrHypothesis:(id)hypothesis;
+ (id)convertFromAsrTokens:(id)tokens;
+ (id)convertFromAsrTokenInformation:(id)information;
+ (id)convertFromUUID:(id)uuid;
+ (id)convertFromAsrOutputs:(id)outputs;
+ (id)convertParser:(id)parser;
+ (id)convertFromUserParse:(id)parse;
+ (id)convertFromUserParses:(id)parses;
+ (id)convertFromRepetitionResult:(id)result;
+ (id)convertFromRepetitionResults:(id)results;
+ (id)convertFromMatchingSpan:(id)span;
+ (id)convertFromMatchingSpans:(id)spans;
@end

#endif /* SiriNLUExternalTypesConverter_h */
