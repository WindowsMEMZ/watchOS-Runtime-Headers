//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMedicationSearchEngine_h
#define HDMedicationSearchEngine_h
@import Foundation;

@interface HDMedicationSearchEngine : NSObject
/* class methods */
+ (id)medicationClustersFromScanResult:(id)result limit:(long long)limit profile:(id)profile errorOut:(id *)out;
+ (BOOL)medicationCluster:(id *)cluster machineReadableCode:(id)code codeAttributeType:(long long)type profile:(id)profile errorOut:(id *)out;
+ (id)medicationClustersFromTextSearchTokens:(id)tokens limit:(long long)limit profile:(id)profile errorOut:(id *)out;
+ (id)medicationClustersForCHRImportWithExistingMedications:(id)medications sinceDate:(id)date limit:(long long)limit profile:(id)profile errorOut:(id *)out;
+ (BOOL)_medicationClusterFromMachineReadableCode:(id)code codeAttributeType:(long long)type searchResultOut:(id *)out ontologyTransaction:(id)transaction errorOut:(id *)out;
+ (id)_medicationClustersFromScanResult:(id)result limit:(long long)limit ontologyTransaction:(id)transaction errorOut:(id *)out;
+ (id)_medicationClustersFromTextSearchTokens:(id)tokens limit:(long long)limit ontologyTransaction:(id)transaction errorOut:(id *)out;
+ (id)_relationshipsForInflation;
+ (id)_attributeTypesForInflation;
+ (id)_medicationSearchResultForSpecificProduct:(id)product ontologyTransaction:(id)transaction errorOut:(id *)out;
+ (BOOL)_medicationSearchResultForFirstConcept:(id *)concept predicate:(id)predicate ontologyTransaction:(id)transaction errorOut:(id *)out;
+ (BOOL)_inflateFirstConcept:(id *)concept predicate:(id)predicate relationshipTypes:(id)types maximumDepth:(long long)depth ontologyTransaction:(id)transaction errorOut:(id *)out;
+ (id)_medicationSearchResultForClinicalProduct:(id)product ontologyTransaction:(id)transaction errorOut:(id *)out;
+ (id)_genericProductForClinicalProduct:(id)product ontologyTransaction:(id)transaction error:(id *)error;
+ (id)_importEligibleMedicationConceptsSinceDate:(id)date limit:(long long)limit profile:(id)profile errorOut:(id *)out;
+ (id)hkt_genericMedicationWithClinicalProductConcept:(id)concept profile:(id)profile errorOut:(id *)out;
+ (id)hkt_importEligibleMedicationConceptsSinceDate:(id)date limit:(long long)limit profile:(id)profile errorOut:(id *)out;
@end

#endif /* HDMedicationSearchEngine_h */
