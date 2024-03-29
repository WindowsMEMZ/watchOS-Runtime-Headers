//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef NSURL_ISAdditions_h
#define NSURL_ISAdditions_h
@import Foundation;

@interface NSURL (ISAdditions)
/* class methods */
+ (id)copyDictionaryForQueryString:(id)string unescapedValues:(BOOL)values;
+ (id)escapedStringForString:(id)string;
+ (id)queryStringForDictionary:(id)dictionary escapedValues:(BOOL)values;
+ (id)unescapedStringForString:(id)string;
+ (id)_URLQueryParameterValueAllowedCharacterSet;

/* instance methods */
- (id)sanitizedURL;
- (id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)values;
- (id)URLByAppendingQueryParameter:(id)parameter value:(id)value;
- (id)urlBySettingQueryStringDictionary:(id)dictionary;
- (BOOL)isSafeExternalURL;
- (id)schemeSwizzledURL;
- (id)urlByReplacingSchemeWithScheme:(id)scheme;
- (void)enumerateQueryWithBlock:(id /* block */)block;
@end

#endif /* NSURL_ISAdditions_h */
