//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class NSSet, SGContactPipelineHelper, SGDetectedAttributeML, SGHKHealthStore, SGQuickResponsesML;

@interface SGDetectedAttributeDissector : SGPipelineDissector
{
    SGDetectedAttributeML *_ml;
    SGQuickResponsesML *_mlQR;
    SGContactPipelineHelper *_contactsHelper;
    SGHKHealthStore *_healthStore;
    BOOL _filterWithAddressBook;
    float _unlikelyPhoneSamplingRate;
    NSSet *_hmmTrustedLanguages;
    NSSet *_ddTrustedLanguages;
    NSUInteger _selfIdentificationMessageCount;
}

+ (void)clearConversationCache;
+ (id)currentPatterns;
+ (id)patterns;
+ (BOOL)isBirthdayContext:(id)arg1;
+ (BOOL)isNameRequest:(id)arg1;
+ (BOOL)isMaybeNameContext:(id)arg1;
+ (BOOL)isPhoneContext:(id)arg1;
+ (BOOL)isAddressContext:(id)arg1;
+ (BOOL)isTwoPersonConversation:(id)arg1;
+ (id)dissectorWithMockedMLTrainingForTests;
@property(nonatomic) NSUInteger selfIdentificationMessageCount; // @synthesize selfIdentificationMessageCount=_selfIdentificationMessageCount;
// - (void).cxx_destruct;
- (id)detailTypeFromPrefix:(id)arg1;
- (id)detailTypeFromPrefix:(id)arg1 detectedLabelPointer:(_NSRange )arg2;
- (id)getLineContaining:(_NSRange)arg1 inText:(id)arg2;
- (void)dissectForContacts:(id)arg1 inContext:(id)arg2 withConversationHistory:(id)arg3;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (void)handleTextMessageSelfIdentification:(id)arg1 withConversationHistory:(id)arg2;
- (void)handleTextMessageBirthdayCongratulation:(id)arg1 withConversationHistory:(id)arg2;
- (void)logBirthdayExtractionMetricForPerson:(id)arg1 forDate:(id)arg2 isFromCongratulation:(unsigned char)arg3 withModelVersion:(id)arg4 didRegexTrigger:(unsigned char)arg5;
- (id)processTextMessageConversation:(id)arg1 threadLength:(NSUInteger)arg2;
- (id)filterDangerousSigDetections:(id)arg1 onEntity:(id)arg2 inContext:(id)arg3;
- (id)filterDangerousSigEmailDetections:(id)arg1 onEntity:(id)arg2 inContext:(id)arg3;
- (id)_makeSimplifiedListIdEmail:(id)arg1;
- (id)_makeAlnum:(id)arg1;
- (id)_extractEmailishTokenFromMailHeader:(id)arg1;
- (id)filterDangerousSigAddressDetections:(id)arg1 onEntity:(id)arg2;
- (id)filterDangerousSigPhoneDetections:(id)arg1 onEntity:(id)arg2;
- (id)detectionFromBodyDDMatch:(id)arg1 onEntity:(id)arg2 withSupervisionToFill:(id)arg3 isUnlikelyPhone:(BOOL)arg4;
- (id)detectionFromSignatureDDMatch:(id)arg1 onEntity:(id)arg2 detectedLabelRange:(_NSRange )arg3 lastClaimedLabelRange:(_NSRange)arg4 isUnlikelyPhone:(BOOL)arg5;
- (id)init;
- (id)initWithML:(id)arg1 withMLQR:(id)arg2 andHealthStore:(id)arg3;

@end

