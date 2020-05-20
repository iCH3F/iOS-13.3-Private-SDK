//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMOneTimeCodeAccelerator, LAContext, NSDictionary, NSString, NSUUID, TIKeyboardSecureCandidateRenderer;
@protocol OS_dispatch_queue;

@interface TIAppAutofillManager : NSObject
{
    TIKeyboardSecureCandidateRenderer *_secureCandidateRenderer;
    NSDictionary *_currentOneTimeCode;
    NSUUID *_documentIdentifierForLastAutofillGeneration;
    NSString *_clientIdentifierForLastAutofillGeneration;
    NSString *_clientIdentifierForLastKeyboardSync;
    NSDictionary *_queuedCustomInfo;
    LAContext *_laContext;
    NSObject<OS_dispatch_queue> *_oneTimeCodeAcceleratorQueue;
    IMOneTimeCodeAccelerator *_oneTimeCodeAccelerator;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IMOneTimeCodeAccelerator *oneTimeCodeAccelerator; // @synthesize oneTimeCodeAccelerator=_oneTimeCodeAccelerator;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *oneTimeCodeAcceleratorQueue; // @synthesize oneTimeCodeAcceleratorQueue=_oneTimeCodeAcceleratorQueue;
@property(retain, nonatomic) LAContext *laContext; // @synthesize laContext=_laContext;
@property(retain, nonatomic) NSDictionary *queuedCustomInfo; // @synthesize queuedCustomInfo=_queuedCustomInfo;
@property(retain, nonatomic) NSString *clientIdentifierForLastKeyboardSync; // @synthesize clientIdentifierForLastKeyboardSync=_clientIdentifierForLastKeyboardSync;
@property(retain, nonatomic) NSString *clientIdentifierForLastAutofillGeneration; // @synthesize clientIdentifierForLastAutofillGeneration=_clientIdentifierForLastAutofillGeneration;
@property(retain, nonatomic) NSUUID *documentIdentifierForLastAutofillGeneration; // @synthesize documentIdentifierForLastAutofillGeneration=_documentIdentifierForLastAutofillGeneration;
@property(retain, nonatomic) NSDictionary *currentOneTimeCode; // @synthesize currentOneTimeCode=_currentOneTimeCode;
// - (void).cxx_destruct;
- (void)shouldAcceptOneTimeCode:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)shouldAcceptAutofill:(id)arg1 withPayload:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)shouldAuthenticateToAcceptAutofill;
- (id)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2;
- (id)generateOneTimeCodeCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2;
- (id)generateAutofillFormCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2;
- (id)obtainBundleIdentifierFromConnection:(id)arg1;
- (id)obtainApplicationIdentifierFromConnection:(id)arg1;
- (id)getCredentialsWithApplicationIdentifier:(id)arg1 autofillContext:(id)arg2;
- (BOOL)_simulatesAutofillCandidates;
- (id)customInfoFromCredential:(id)arg1;
- (BOOL)isValidedString:(id)arg1;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)arg1;
- (void)obtainOneTimeCodeCredential:(id)arg1;
- (void)obtainCredential:(id)arg1;
@property(readonly, nonatomic) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer;
- (id)initPrivate;

@end

