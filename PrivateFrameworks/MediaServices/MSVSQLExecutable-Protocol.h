//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MSVSQLExecutable_Protocol_h
#define MSVSQLExecutable_Protocol_h
@import Foundation;

@protocol MSVSQLExecutable <NSObject>
/* instance methods */
- (id)statementWithString:(id)string error:(id *)error;
- (BOOL)executeStatement:(id)statement error:(id *)error;
- (BOOL)executeStatementString:(id)string error:(id *)error;
- (id)resultsForStatement:(id)statement;
@end

#endif /* MSVSQLExecutable_Protocol_h */
