//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _ECHeaderAuthenticationResultsParser_h
#define _ECHeaderAuthenticationResultsParser_h
@import Foundation;

@interface _ECHeaderAuthenticationResultsParser : NSObject
/* class methods */
+ (BOOL)_skipCFWSWithScanner:(id)scanner;
+ (BOOL)_scanToCFWSOrSemicolonWithScanner:(id)scanner intoString:(id *)string;
+ (BOOL)_scanToCFWSOrEqualWithScanner:(id)scanner intoString:(id *)string;
+ (BOOL)_scanToCFWSOrPeriodOrSemicolonWithScanner:(id)scanner intoString:(id *)string;
+ (long long)_versionWithScanner:(id)scanner;
+ (BOOL)_statementsWithScanner:(id)scanner intoArray:(id *)array;
+ (BOOL)_statementWithScanner:(id)scanner intoStatement:(id *)statement;
+ (BOOL)_propertiesWithScanner:(id)scanner intoArray:(id *)array;
@end

#endif /* _ECHeaderAuthenticationResultsParser_h */
