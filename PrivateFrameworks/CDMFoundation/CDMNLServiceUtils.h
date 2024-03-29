//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMNLServiceUtils_h
#define CDMNLServiceUtils_h
@import Foundation;

@interface CDMNLServiceUtils : NSObject
/* class methods */
+ (struct unique_ptr<sirinluinternalnlv4_parser::NLv4ParserRequest, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> { struct __compressed_pair<sirinluinternalnlv4_parser::NLv4ParserRequest *, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> { struct NLv4ParserRequest * x0; } x0; })buildNLv4ProtoRequest:(id)request;
+ (id)buildSetupNLv4ProtoRequest:(id)request;
+ (id)buildSetupSNLCProtoRequest:(id)request;
+ (id)buildSNLCProtoResponse:(id)response snlcRequest:(id)request parserToSet:(id)set;
+ (id)buildPSCResponse:(id)pscresponse pscRequest:(id)request;
+ (id)getPscOverrideProbabilityForLabel:(int)label;
+ (id)buildPSCUserParseForExternalParserId:(id)id probability:(float)probability rewriteMsg:(id)msg;
+ (id)buildSetupITFMRequest:(id)itfmrequest;
+ (void)_sortMultilingualVariantsByScoreDescending:(id)descending;
+ (id)buildLVCResponse:(id)lvcresponse lvcRequest:(id)request;
+ (void)populateParser:(id)parser parserToSet:(id)set;
+ (void)_setWarmupRequestId:(id /* block */)id;
@end

#endif /* CDMNLServiceUtils_h */
