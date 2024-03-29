//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef NSURL_HealthKit_h
#define NSURL_HealthKit_h
@import Foundation;

@interface NSURL (HealthKit)
/* class methods */
+ (id)_hk_urlForViewHealthRecords;
+ (id)_hk_urlForHealthRecordsProviderSearch;
+ (id)_hk_urlForElectrocardiogramType;
+ (id)_hk_urlForAtrialFibrillationEventType;
+ (id)_hk_urlForHKProfileIdentifier:(id)identifier;
+ (id)_hk_appendQueryParameterToURL:(id)url forHKProfileIdentifier:(id)identifier;
+ (id)hk_safeURLWithString:(id)string;
+ (id)hk_tapToHealthRadarURLWithTitle:(id)title description:(id)description classification:(long long)classification reproducibility:(long long)reproducibility keywords:(id)keywords autoDiagnostics:(long long)diagnostics attachments:(id)attachments;
+ (id)hk_tapToHealthRadarURLForComponent:(unsigned long long)component title:(id)title description:(id)description classification:(long long)classification reproducibility:(long long)reproducibility keywords:(id)keywords autoDiagnostics:(long long)diagnostics attachments:(id)attachments;
+ (id)hk_tapToHealthRadarURLForComponent:(unsigned long long)component title:(id)title description:(id)description classification:(long long)classification reproducibility:(long long)reproducibility keywords:(id)keywords autoDiagnostics:(long long)diagnostics attachments:(id)attachments collaborationContactHandles:(id)handles;
+ (id)hk_tapToRadarURLForBundleID:(id)id component:(unsigned long long)component title:(id)title description:(id)description classification:(long long)classification reproducibility:(long long)reproducibility keywords:(id)keywords autoDiagnostics:(long long)diagnostics attachments:(id)attachments;
+ (id)hk_tapToRadarURLForBundleID:(id)id component:(unsigned long long)component title:(id)title description:(id)description classification:(long long)classification reproducibility:(long long)reproducibility keywords:(id)keywords autoDiagnostics:(long long)diagnostics attachments:(id)attachments collaborationContactHandles:(id)handles;
+ (id)hk_tapToRadarURLForBundleID:(id)id component:(unsigned long long)component title:(id)title description:(id)description classification:(long long)classification reproducibility:(long long)reproducibility keywords:(id)keywords autoDiagnostics:(long long)diagnostics attachments:(id)attachments collaborationContactHandles:(id)handles diagnosticExtensionOptions:(unsigned long long)options;

/* instance methods */
- (id)_hk_extractEncodedHKProfileIdentifier;
- (id)hk_valueForFirstInstanceOfParameterNamed:(id)named;
- (BOOL)hk_isValidSafariViewControllerURL;
- (BOOL)hk_isRewrittenHealthCardQRCodeURL;
- (BOOL)hk_isRewrittenEUDigitalCOVIDCertificateQRCodeURL;
- (id)hk_fileSizeWithError:(id *)error;
@end

#endif /* NSURL_HealthKit_h */
